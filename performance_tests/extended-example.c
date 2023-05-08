#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int32_t A [SIZE];
int32_t B [SIZE];
int32_t C [SIZE];

void vector_mm_min_epi16()
{
    for(int j = 0; j < 8; j++) {
        C[j] = A[j] < B[j] ? A[j] : B[j];
    }
}

