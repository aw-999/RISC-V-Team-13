rm -rf obj_dir
rm -f Ymain.vcd

verilator -Wall --cc --trace Main.sv --exe Ymain_tb.cpp # build obj_dir

make -j -C obj_dir/ -f VMain.mk VMain # build c++ project

obj_dir/VMain # build vcd file

# source ./_buildVcd.sh
