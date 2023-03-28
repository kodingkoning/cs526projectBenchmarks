CC=g++
VEGEN=vegen-clang
CFLAGS=-I. -O3 -S

C_SOURCES :=$(wildcard *.c)
C_EXECUTABLE :=$(C_SOURCES:.c=)
VEGEN_C_EXECUTABLE :=$(C_SOURCES:%.c=vegen_%)

all: $(VEGEN_C_EXECUTABLE) $(C_EXECUTABLE)

%:%.c
	$(CC) $< $(LDFLAGS) $(CFLAGS) -o $@

vegen_%:%.c
	$(VEGEN) $< $(LDFLAGS) $(CFLAGS) -o $@

.PHONY: clean

clean:
	rm -f $(C_EXECUTABLE) $(VEGEN_C_EXECUTABLE)

