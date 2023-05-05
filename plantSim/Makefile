CC=g++
VEGEN=vegen-clang++
CFLAGS=-I. -std=c++11 -O3

all: sim vegen_sim vegen_sim.ll llvm_sim.ll llvm_sim

sim: sim.cpp
	$(CC) $(CFLAGS) -Irandomc -o $@ $<

vegen_sim: sim.cpp
	$(VEGEN) $(CFLAGS) -Irandomc -o $@ $<

vegen_sim.ll: sim.cpp
	$(VEGEN) $(CFLAGS) -S -emit-llvm -Irandomc -o $@ $<

llvm_sim.ll: sim.cpp
	clang++ $(CFLAGS) -S -emit-llvm -Irandomc -o $@ $<

llvm_sim: sim.cpp
	clang++ $(CFLAGS) -Irandomc -o $@ $<

clean:
	rm -f sim vegen_sim vegen_sim.ll llvm_sim.ll llvm_sim

