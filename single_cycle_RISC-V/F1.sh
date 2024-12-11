rm -rf obj_dir
rm -f *.vcd

verilator -Wall --cc --trace main.sv --exe F1test.cpp # build obj_dir

make -j -C obj_dir/ -f Vmain.mk Vmain # build c++ project

obj_dir/Vmain # build vcd file

# source ./F1.sh


