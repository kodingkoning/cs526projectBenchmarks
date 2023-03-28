CC=g++
VEGEN=vegen-clang++
CFLAGS=-I. -std=c++11 -O3

C_SOURCES :=$(wildcard *.c)
C_EXECUTABLE :=$(C_SOURCES:.c=)
VEGEN_C_EXECUTABLE :=$(C_SOURCES:%.c=vegen_%)

all: $(VEGEN_C_EXECUTABLE) $(C_EXECUTABLE) $(binaries)

$(C_EXECUTABLE):$(C_SOURCES)
	$(CC) $< $(LDFLAGS) $(CFLAGS) -o $@

$(VEGEN_C_EXECUTABLE):$(C_SOURCES)
	$(VEGEN) $< $(LDFLAGS) $(CFLAGS) -o $@

.PHONY: clean

clean:
	rm -f $(C_EXECUTABLE) $(VEGEN_C_EXECUTABLE)

