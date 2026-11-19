import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

/**
 * Writes the disassembly of an address range (used to read one case of a jump table that the decompiler
 * did not resolve). Script args: <output file> <start hex> <end hex> [<start hex> <end hex> ...].
 * Run with -readOnly on a copy of the project: the disassembly it creates is not saved.
 */
public class DisassembleRange extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 3 || args.length % 2 == 0) {
            throw new IllegalArgumentException("Expected: <output file> <start> <end> [<start> <end> ...]");
        }
        Listing listing = currentProgram.getListing();
        try (PrintWriter w = new PrintWriter(new File(args[0]), StandardCharsets.UTF_8)) {
            for (int i = 1; i < args.length; i += 2) {
                Address start = toAddr(args[i].replace("0x", ""));
                Address end = toAddr(args[i + 1].replace("0x", ""));
                disassemble(start);
                w.println("; range " + start + " - " + end);
                Instruction ins = listing.getInstructionAt(start);
                while (ins != null && ins.getAddress().compareTo(end) < 0) {
                    w.println(ins.getAddress() + "  " + ins.toString());
                    ins = ins.getNext();
                }
            }
        }
        println("DisassembleRange done");
    }
}
