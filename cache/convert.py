# Open the binary file in read-binary ('rb') mode
with open('cache_test.bin', 'rb') as binary_file:
    # Read all bytes from the file
    bytes = binary_file.read()

# Open or create the .mem file in write ('w') mode
with open('cache_test.mem', 'w') as mem_file:
    # Process every 4 bytes (32 bits) as one RISC-V instruction
    for i in range(0, len(bytes), 4):
        # Convert these 4 bytes into a 32-bit integer assuming little-endian format
        instruction = int.from_bytes(bytes[i:i+4], 'little')
        # Convert to hex, remove the '0x' prefix, and ensure it's zero-padded to 8 characters
        hex_instruction = f"{instruction:08x}"
        # Insert a space every two characters
        formatted_instruction = ' '.join(hex_instruction[j:j+2] for j in range(0, 8, 2))
        # Write the formatted instruction followed by a newline
        mem_file.write(formatted_instruction + '\n')
