import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SourceType;

import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.List;

/**
 * Decompiles every function of a list file to one .c file each.
 * Script args: <output dir> <list file>. The list has one "name<TAB>0xVA" per line
 * (Tools/list_object_functions.py writes it from yyc-function-table.json).
 * Existing output files are kept, so a run can be resumed. Run with -readOnly on a copy
 * of the project: the functions it creates are not saved.
 */
public class DecompileFunctionList extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2 || args.length > 3) {
            throw new IllegalArgumentException("Expected: <output dir> <list file> [timeout seconds, default 120]");
        }
        int timeoutSeconds = args.length == 3 ? Integer.parseInt(args[2]) : 120;
        File outDir = new File(args[0]);
        if (!outDir.isDirectory() && !outDir.mkdirs()) {
            throw new IllegalStateException("Could not create output directory: " + outDir);
        }
        List<String> lines = Files.readAllLines(new File(args[1]).toPath(), StandardCharsets.UTF_8);

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        // Large events (oOrigin Draw_0, oControl Step_1) exceed the decompiler's default response
        // buffer: "Response buffer size exceeded". Raise the payload limit before opening.
        ghidra.app.decompiler.DecompileOptions options = new ghidra.app.decompiler.DecompileOptions();
        options.setMaxPayloadMBytes(256);
        decomp.setOptions(options);
        decomp.openProgram(currentProgram);
        int done = 0, failed = 0, skipped = 0;

        for (String line : lines) {
            if (line.isBlank()) continue;
            String[] parts = line.split("\t");
            String name = parts[0].trim();
            String addrHex = parts[1].trim().replace("0x", "");
            File outFile = new File(outDir, name + ".c");
            if (outFile.exists() && outFile.length() > 100) {
                skipped++;
                continue;
            }
            Address addr = toAddr(addrHex);
            Function fn = fm.getFunctionAt(addr);
            if (fn == null) {
                fn = createFunction(addr, name);
            } else {
                try {
                    fn.setName(name, SourceType.USER_DEFINED);
                } catch (Exception ignored) {
                }
            }
            try (PrintWriter writer = new PrintWriter(
                    new OutputStreamWriter(new FileOutputStream(outFile), StandardCharsets.UTF_8))) {
                writer.println("// Function: " + name + " @ 0x" + addrHex);
                if (fn == null) {
                    writer.println("// ERROR: Function not found or could not be created at " + addrHex);
                    failed++;
                    continue;
                }
                DecompileResults res = decomp.decompileFunction(fn, timeoutSeconds, monitor);
                if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                    writer.println(res.getDecompiledFunction().getC());
                    done++;
                } else {
                    writer.println("// ERROR: Decompilation failed: " + (res != null ? res.getErrorMessage() : "null"));
                    failed++;
                }
            }
            println("Decompiled " + name + " -> " + outFile);
        }
        decomp.dispose();
        println("DecompileFunctionList: " + done + " decompiled, " + skipped + " skipped, " + failed + " failed");
    }
}
