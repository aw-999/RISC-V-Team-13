<center>

## F1 test program

---
 

</center>

## How to test the file

* clone the repo ```git clone copied_link.com
* Move F1.sh F1test.cpp F1assembly.bin into the tested CPU

* Following check process needed if used on OTHER CPU
* Make sure the F1.sh uses the correct top module name, currently "main_top", they already match with the single cycle 
* Make sure F1test.cpp matches the name -- currently #include "Vmain_top.h", they already match with the single cycle 
* Check Vbuddy connection, if not move to test dir and type ```./attach_usb.sh```

```usbipd: info: Using WSL distribution 'Ubuntu-22.04' to attach; the device will be available in all WSL 2 distributions.
usbipd: info: Using IP address xxx.xx.xxx.x to reach the host.
```

* Change InstructionMemory.sv memory source to F1assembly.mem
* use ```source./F1.sh``` to start simulation

<br>

___

## Simulatoin video

#F1:

https://github.com/aw-999/RISC-V-Team-13/blob/main/test/F1test.mp4
___

 