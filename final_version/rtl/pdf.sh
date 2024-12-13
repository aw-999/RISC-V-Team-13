rm -rf obj_dir
rm -f top.vcd

verilator -Wall --cc --trace top.sv --exe pdf.cpp # build obj_dir

make -j -C obj_dir/ -f Vtop.mk Vtop # build c++ project

obj_dir/Vtop # build vcd file

# source ./pdf.sh