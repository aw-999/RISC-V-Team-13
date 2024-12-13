Added file: cache_2.sv data_2.sv memcache.sv


Changed file:

control.sv
line 18,19: added load / store bit control for cache datamemory
line 106-108: added end, endcase to match logic design

top.sv
line 279: just the name of datamem -- following wiring still required

NEED TO CHANGE FILE:

control.sv
logic to decode store and load i neccessary

top.sv
wire the logic up cache, main memory, memcache


Notes

logic seems to be changing inside the top.sv and control.sv,cannot see the funct3m inside 