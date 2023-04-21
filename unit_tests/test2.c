#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int16_t A[8];
int16_t B[8];
int32_t C[4];

void dot_prod3()
{
    for (int i = 0; i < 4; ++i)
    {
        C[i] = A[2 * i] * B[2 * i] + A[2 * i + 1] * B[2 * i + 1];
    }
}


int main()
{
    printf("%d %d\n", C[0], C[1]);
}