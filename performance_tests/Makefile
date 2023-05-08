CC=clang
OG_VEGEN=../vegen/build_original/vegen-clang
VEGEN=../vegen/build/vegen-clang
CFLAGS=-I. -O3 -march=native

C_SOURCES :=$(wildcard *.c)
LLVM_C_EXECUTABLE :=$(C_SOURCES:%.c=llvm_%)
VEGEN_C_EXECUTABLE :=$(C_SOURCES:%.c=vegen_%)
OG_VEGEN_C_EXECUTABLE :=$(C_SOURCES:%.c=og_vegen_%)
C_LLVM := $(C_SOURCES:%.c=llvm_%.ll)
VEGEN_C_LLVM :=$(C_SOURCES:%.c=vegen_%.ll)

ifneq ("$(wildcard $(OG_VEGEN))","")
	OG_VEGEN_C_LLVM := $(C_SOURCES:%.c=og_vegen_%.ll)
	OG_VEGEN_C_EXECUTABLE :=$(C_SOURCES:%.c=og_vegen_%)
else
	OG_VEGEN_C_LLVM =
	OG_VEGEN_C_EXECUTABLE =
endif

all: $(VEGEN_C_LLVM) $(OG_VEGEN_C_LLVM) $(C_LLVM)

og_vegen_%: %.c
	$(OG_VEGEN) $< $(LDFLAGS) $(CFLAGS) -o $@

og_vegen_%.ll:%.c
	$(OG_VEGEN) $< $(LDFLAGS) $(CFLAGS) -S -emit-llvm -o $@

vegen_%:%.c
	$(VEGEN) $< $(LDFLAGS) $(CFLAGS) -o $@

vegen_%.ll:%.c
	$(VEGEN) $< $(LDFLAGS) $(CFLAGS) -S -emit-llvm -o $@

llvm_%:%.c
	$(CC) $< $(LDFLAGS) $(CFLAGS) -o $@

llvm_%.ll:%.c
	$(CC) $< $(LDFLAGS) $(CFLAGS) -S -emit-llvm -o $@

.PHONY: clean

clean:
	rm -f $(VEGEN_C_EXECUTABLE) $(LLVM_C_EXECUTABLE) $(OG_VEGEN_C_EXECUTABLE) *.ll

