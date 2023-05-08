#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t A [32];
int32_t B [32];
int32_t C [16];

void vector_add()
{
    for(int count = 0; count < 16; count+=4) {
        C[count+0] = A[count+0] + B[count+0];
        C[count+1] = A[count+1] + B[count+1];
        C[count+2] = A[count+2] + 9;
        C[count+3] = A[count+3] + 11;
    }
}

