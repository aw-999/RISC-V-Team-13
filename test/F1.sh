rm -rf obj_dir
rm -f top.vcd

verilator -Wall --cc --trace top.sv --exe F1test.cpp # build obj_dir

make -j -C obj_dir/ -f Vtop.mk Vtop # build c++ project

obj_dir/Vmain_top # build vcd file

# source ./F1.sh