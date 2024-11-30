/* this is an assembly code to test RISC-V processor via F1 starting light unit */
/* the code is referred to the RISC-V F1Assembly from iAC lab */
/* delay and initial logic changed to adapt to the Lab team project processor */
/* language is used to create a finite state machine to turn on/off F1 starting light */ 
                           /* a Linear Feedback Shift Register to generate random delay for F1 starting (all lights go off) */
                           /* a constant time delay between each F1 light, aiming to make it to capure one second latency */


init:
    addi s1, zero, 0x1  /* a Flag to compare with trigger VbdFlag, activate f1 light when vbuddy button is pressed */
    addi s2, zero, 0xff /* 0x1111 1111, representing condition which all 8 lights are on */
    addi s3, zero, 0x3  /* determines how many times timedelay module iterates -- delay between lights */
    addi a3, zero, 0x1  /* initial value to produce LFSR random number -- all lights off delay */

rst:
    addi a0, zero, 0x0 /* reset all -- turn all lights off */
    addi a4, zero, 0x0 
    addi t0, zero, 0x0 /* set trigger back to 0, clear the vbuddy botton effect */ 

mainloop:
    beq  t0, s1, fsm    /* fsm starts when vbdflag is on */ 
    srli a2, a3, 0x3    /* LFSR -- generating a random delay value */
    andi a2, a2, 0x1
    xor  a2, a2, a3
    andi a2, a2, 0x1 
    slli a3, a3, 0x1 
    add  a3, a3, a2 
    andi a3, a3, 0xf
    jal  ra, mainloop   /* Loop  */

fsm:
    /* used to turn on F1 light one by one */
    jal  ra, lightdelay      /* add const delay */
    slli t1, a0, 0x1    /* shift left temp bits */
    addi a0, t1, 0x1    /* add 1 to shifted temp bits */
    bne  a0, s2, fsm    /* loop only if not all lights are on */

increment:
    /* happens when all the 8 F1 lights are on -- random light-off stage */
    beq  a4, a3, rst
    jal  ra, lightdelay      /* jump to counter */
    addi a4, a4, 0x1    /* inc delay */
    jal  ra, increment  /* run until delay finished */

lightdelay:
    /* iterate as a delay between each F1 light turning on */
    addi  a1, a1, 0x1   /* inc count */
    bne   a1, s3, lightdelay
    addi  a1, zero, 0x0 /* reset count */
    RET
