CC=g++
VEGEN=../vegen/build/vegen-clang++
OG_VEGEN=../vegen/build_original/vegen-clang++
CFLAGS=-I. -std=c++17 -O3 -march=native

EXEC=gcc_sim vegen_sim og_vegen_sim llvm_sim
LLVM=gcc_sim.ll vegen_sim.ll og_vegen_sim.ll llvm_sim.ll

all: $(EXEC) $(LLVM)

gcc_sim: sim.cpp
	$(CC) $(CFLAGS) -Irandomc -o $@ $<

gcc_sim.ll: sim.cpp
	$(VEGEN) $(CFLAGS) -Irandomc -o $@ $<

vegen_sim: sim.cpp
	$(VEGEN) $(CFLAGS) -Irandomc -o $@ $<

vegen_sim.ll: sim.cpp
	$(VEGEN) $(CFLAGS) -S -emit-llvm -Irandomc -o $@ $<

og_vegen_sim: sim.cpp
	$(OG_VEGEN) $(CFLAGS) -Irandomc -o $@ $<

og_vegen_sim.ll: sim.cpp
	$(OG_VEGEN) $(CFLAGS) -S -emit-llvm -Irandomc -o $@ $<


llvm_sim.ll: sim.cpp
	clang++ $(CFLAGS) -S -emit-llvm -Irandomc -o $@ $<

llvm_sim: sim.cpp
	clang++ $(CFLAGS) -Irandomc -o $@ $<

clean:
	rm -f $(EXEC) $(LLVM)

