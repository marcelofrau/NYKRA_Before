import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

public class ExportFunctionInventory extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("Expected output TSV path");
        }

        File output = new File(args[0]);
        File parent = output.getParentFile();
        if (parent != null && !parent.isDirectory() && !parent.mkdirs()) {
            throw new IllegalStateException("Could not create output directory: " + parent);
        }

        int count = 0;
        try (PrintWriter writer = new PrintWriter(
                new OutputStreamWriter(new FileOutputStream(output), StandardCharsets.UTF_8))) {
            writer.println("address\tname\tthunk\texternal");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                String name = function.getName().replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
                writer.printf("%s\t%s\t%s\t%s%n", function.getEntryPoint(), name,
                        function.isThunk(), function.isExternal());
                count++;
            }
        }

        if (count == 0) {
            throw new IllegalStateException("No functions were found in the analyzed program");
        }
        println("Exported " + count + " function records to " + output);
    }
}
