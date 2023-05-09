#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int16_t A[800];
int16_t B[800];
int32_t C[400];

void dot_prod3()
{
    for (int i = 0; i < 400; ++i)
    {
        C[i] = A[2 * i] * B[2 * i] + A[2 * i + 1] * 10;
    }
}

int main()
{
    for (int i = 0; i < 800; ++i)
    {
        A[i] = i;
        B[i] = i;
    }
    for (int i = 0; i < 10000000; ++i)
    {
        dot_prod3();
        for (int i = 0; i < 400; ++i)
        {
            A[i] = C[i];
            B[i] = C[i];
            A[400 + i] = C[i];
            B[400 + i] = C[i];
        }
    }
    printf("%d %d\n", C[50], C[51]);
}
