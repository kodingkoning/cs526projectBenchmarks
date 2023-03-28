CC=g++
VEGEN=vegen-clang++
CFLAGS=-I. -std=c++11 -O3

all: sim vegen_sim

sim: sim.cpp
	$(CC) $(CFLAGS) -Irandomc -o sim sim.cpp

vegen_sim: sim.cpp
	$(VEGEN) $(CFLAGS) -Irandomc -o vegen_sim sim.cpp

clean:
	rm -f sim vegen_sim

