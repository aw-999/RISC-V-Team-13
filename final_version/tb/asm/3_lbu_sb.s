.text
.globl main
main:
    # Initialize pointer to base address
    li s0, 0x00010000   # s0 = 0x00010000

    # DEBUG: Print value of s0
    li a7, 1            # syscall for print_int
    mv a0, s0           # move s0 to a0 for printing
    ecall               # print s0 (should be 0x00010000)

    # Store 100 and 200 in memory
    li t1, 100          # t1 = 100
    sb t1, 0(s0)        # store 100 at address 0x00010000
    li t2, 200          # t2 = 200
    sb t2, 1(s0)        # store 200 at address 0x00010001

    # DEBUG: Print t1 and t2
    li a7, 1            # syscall for print_int
    mv a0, t1           # move t1 to a0
    ecall               # print t1 (should be 100)
    mv a0, t2           # move t2 to a0
    ecall               # print t2 (should be 200)

    # Load values back from memory
    lbu t3, 0(s0)       # t3 = *(0x00010000)
    lbu t4, 1(s0)       # t4 = *(0x00010001)

    # DEBUG: Print loaded values t3 and t4
    li a7, 1            # syscall for print_int
    mv a0, t3           # move t3 to a0
    ecall               # print t3 (should be 100)
    mv a0, t4           # move t4 to a0
    ecall               # print t4 (should be 200)

    # Add loaded values
    add a0, t3, t4      # a0 = t3 + t4

    # DEBUG: Print the result of addition
    li a7, 1            # syscall for print_int
    mv a0, a0           # move result to a0
    ecall               # print a0 (should be 300)

    # Infinite loop
    bne a0, zero, finish

finish:
    bne a0, zero, finish    # loop forever