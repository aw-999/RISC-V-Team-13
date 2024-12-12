.section .data
# Allocate memory for testing: 16KB should be enough to exceed many L1 cache sizes.
test_data:
    .space 16384

.section .text
.globl _start

_start:
    # Load base address of test_data into a0
    la a0, test_data

    # Test cache hits by accessing the same memory location multiple times
    li t0, 1000      # Number of accesses
cache_hit_loop:
    lw t1, 0(a0)     # Load word from the address in a0
    addi t0, t0, -1  # Decrement loop counter
    bnez t0, cache_hit_loop  # If t0 is not zero, loop

    # Test cache misses by accessing each word in the test data to exceed the cache size
    li t0, 4096      # Assume 4 words per cache line in a 16KB cache
    li t1, 0
cache_miss_loop:
    lw t2, 0(a0)     # Load word from the current address
    addi a0, a0, 4   # Move to the next word
    addi t1, t1, 1   # Increment word count
    blt t1, t0, cache_miss_loop  # Loop until we've accessed all words

    # End of testing, hang indefinitely (simple infinite loop)
end:
    j end

