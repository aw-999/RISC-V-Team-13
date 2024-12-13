# Initialization (`init`)
93 04 10 00          | addi s1, zero, 0x1  /* Flag for F1 light activation */
13 09 f0 0f          | addi s2, zero, 0xff /* All lights on condition */
93 09 40 00          | addi s3, zero, 0x4  /* Iteration count for light delay */
93 06 10 00          | addi a3, zero, 0x1  /* Initial value for random delay */
13 0a 10 00          | addi s4, zero, 0x1  /* Final light delay value */

# Reset (`rst`)
13 05 00 00          | addi a0, zero, 0x0  /* Reset lights */
13 07 00 00          | addi a4, zero, 0x0  /* Clear vbuddy effect */
93 02 00 00          | addi t0, zero, 0x0  /* Reset trigger */

# Main Loop (`mainloop`)
63 84 92 02          | beq  t0, s1, fsm    /* Start FSM when vbdflag is on */
13 d6 36 00          | srli a2, a3, 0x3    /* Generate random delay (LFSR) */
13 76 16 00          | andi a2, a2, 0x1    /* Apply mask */
33 46 d6 00          | xor  a2, a2, a3     /* XOR for LFSR */
13 76 16 00          | andi a2, a2, 0x1    /* Apply mask again */
93 96 16 00          | slli a3, a3, 0x1    /* Shift left */
b3 86 c6 00          | add  a3, a3, a2     /* Update LFSR value */
93 f6 f6 00          | andi a3, a3, 0xf    /* Apply final mask */
93 d6 16 00          | srli a3, a3, 0x1    /* Shift right */
ef f0 df fd          | jal  ra, mainloop   /* Loop back */

# Finite State Machine (`fsm`)
ef 00 00 02          | jal  ra, lightdelay /* Add constant delay */
13 13 15 00          | slli t1, a0, 0x1    /* Shift left temp bits */
13 05 13 00          | addi a0, t1, 0x1    /* Increment light pattern */
e3 1a 25 ff          | bne  a0, s2, fsm    /* Loop until all lights are on */

# Increment Lights (`increment`)
e3 0e d7 fa          | beq  a4, a3, rst    /* Reset if delay is complete */
ef 00 c0 01          | jal  ra, finallightdelay /* Jump to final light delay */
13 07 17 00          | addi a4, a4, 0x1    /* Increment delay counter */
ef f0 5f ff          | jal  ra, increment  /* Continue until finished */

# Light Delay (`lightdelay`)
93 85 15 00          | addi  a1, a1, 0x1   /* Increment light delay counter */
e3 9e 35 ff          | bne   a1, s3, lightdelay /* Loop for delay */
93 05 00 00          | addi  a1, zero, 0x0 /* Reset light delay counter */
67 80 00 00          | RET                 /* Return to caller */

# Final Light Delay (`finallightdelay`)
93 85 15 00          | addi  a1, a1, 0x1   /* Increment light delay counter */
e3 9e 45 ff          | bne   a1, s4, finallightdelay /* Loop for final delay */
93 05 00 00          | addi  a1, zero, 0x0 /* Reset final light delay counter */
67 80 00 00          | RET                 /* Return to caller */
