~/Documents/iac/lab0-devtools/tools/attach_usb.sh

rm -rf obj_dir
rm -f main_top.vcd

verilator -Wall --cc --trace main_top.sv --exe F1test.cpp # build obj_dir

make -j -C obj_dir/ -f Vmain_top.mk Vmain_top # build c++ project

obj_dir/Vmain_top # build vcd file

# source ./F1.sh