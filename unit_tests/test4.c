#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int16_t A[800];
int16_t B[800];
int32_t C[400];

void dot_prod3()
{
    for (int i = 0; i < 100; ++i)
    {
        C[i] = A[2 * i] * B[2 * i] + A[2 * i + 1] * 10;
    }
}


int main()
{
    printf("%d %d\n", C[0], C[1]);
}