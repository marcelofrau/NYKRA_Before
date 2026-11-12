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

public class DecompilePhase1Functions extends GhidraScript {
    private static final String[][] TARGETS = new String[][] {
        {"gml_Script_reset_files", "14003dd50"},
        {"gml_Script_map_save", "14003fa60"},
        {"gml_Script__SET_SCENE", "140047690"},
        {"gml_Script_map_load", "14004bac0"},
        {"gml_Script_clear_objects", "14005ffa0"},
        {"gml_Script_col_move", "140061cf0"},
        {"gml_Script_col_move_yeah", "140063e70"},
        {"gml_Script__save_type_rec2", "1400ba350"},
        {"gml_Script__save_type_rec", "1400bafa0"},
        {"gml_Script__save_type", "1400bca20"},
        {"gml_Script_save_game", "1400be4a0"},
        {"gml_Script_load_game", "1400c5e00"},
        {"gml_Script_goto_map", "1401019b0"},
        {"gml_Script__save_ds_list", "1401a02a0"},
        {"gml_Script_save_CHARACTER", "1401a0c30"},
        {"gml_Script_save_CONTROL", "1401a77f0"},
        {"gml_Script_load_CHARACTER", "1401aabe0"},
        {"gml_Script_load_CONTROL", "1401b9a50"},
        {"gml_Script_save_GENERAL", "1401c2a30"},
        {"gml_Script_load_GENERAL", "1401c3a90"},
        {"gml_Script_COLLIDE", "141671610"},
        {"gml_Script_ARRAY_COLLIDE", "1416875a0"}
    };

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("Expected output directory path");
        }
        File outDir = new File(args[0]);
        if (!outDir.isDirectory() && !outDir.mkdirs()) {
            throw new IllegalStateException("Could not create output directory: " + outDir);
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        for (String[] pair : TARGETS) {
            String name = pair[0];
            String addrHex = pair[1];
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

            File outFile = new File(outDir, name + ".c");
            if (outFile.exists() && outFile.length() > 100) {
                println("Skipping already decompiled " + name);
                continue;
            }
            try (PrintWriter writer = new PrintWriter(
                    new OutputStreamWriter(new FileOutputStream(outFile), StandardCharsets.UTF_8))) {
                writer.println("// Function: " + name + " @ 0x" + addrHex);
                if (fn == null) {
                    writer.println("// ERROR: Function not found or could not be created at " + addrHex);
                    continue;
                }
                DecompileResults res = decomp.decompileFunction(fn, 120, monitor);
                if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                    writer.println(res.getDecompiledFunction().getC());
                } else {
                    writer.println("// ERROR: Decompilation failed: " + (res != null ? res.getErrorMessage() : "null"));
                }
            }
            println("Decompiled " + name + " -> " + outFile);
        }
        decomp.dispose();
    }
}
