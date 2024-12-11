# Initialization (`init` and `rst`)
00 10 04 93          | addi s1, zero, 0x1  /* Flag for F1 light activation */
0f f0 09 13          | addi s2, zero, 0xff /* All lights on condition */
00 30 09 93          | addi s3, zero, 0x3  /* Iteration count for light delay */
00 10 06 93          | addi a3, zero, 0x1  /* Initial value for random delay */
00 00 05 13          | addi a0, zero, 0x0  /* Reset lights */
00 00 07 13          | addi a4, zero, 0x0  /* Clear vbuddy effect */

# Main Loop (`mainloop`)
02 92 82 63          | beq  t0, s1, fsm    /* Start FSM when vbdflag is on */
00 36 d6 13          | srli a2, a3, 0x3    /* Generate random delay (LFSR) */
00 16 76 13          | andi a2, a2, 0x1    /* Apply mask */
00 d6 46 33          | xor  a2, a2, a3     /* XOR for LFSR */
00 16 76 13          | andi a2, a2, 0x1    /* Apply mask again */
00 16 96 93          | slli a3, a3, 0x1    /* Shift left */
00 c6 86 b3          | add  a3, a3, a2     /* Update LFSR value */
00 f6 f6 93          | andi a3, a3, 0xf    /* Apply final mask */
fe 1f f0 ef          | jal  ra, mainloop   /* Loop back */

# Finite State Machine (`fsm`)
02 00 00 ef          | jal  ra, lightdelay /* Add constant delay */
00 15 13 13          | slli t1, a0, 0x1    /* Shift left temp bits */
00 13 05 13          | addi a0, t1, 0x1    /* Increment light pattern */
ff 25 1a e3          | bne  a0, s2, fsm    /* Loop until all lights are on */

# Increment Lights (`increment`)
fc d7 02 e3          | beq  a4, a3, rst    /* Reset if delay is complete */
00 c0 00 ef          | jal  ra, lightdelay /* Jump to light delay */
00 17 07 13          | addi a4, a4, 0x1    /* Increment delay counter */
ff 5f f0 ef          | jal  ra, increment  /* Continue until finished */

# Light Delay (`lightdelay`)
00 15 85 93          | addi  a1, a1, 0x1   /* Increment light delay counter */
ff 35 9e e3          | bne   a1, s3, lightdelay /* Loop for delay */
00 00 05 93          | addi  a1, zero, 0x0 /* Reset light delay counter */
00 00 80 67          | RET                 /* Return to caller */
