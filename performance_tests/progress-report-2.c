#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t A [8];
int32_t B [8];
int32_t C [4];

void vector_add()
{
    for (int i = 0; i < 8; ++i) {
        //A[i] = i*2;
        //B[i] = i*3;
    }
    for (int i = 0; i < 4; ++i)
        C[i] = A[2 * i] * B[2 * i] + A[2 * i + 1] * 4;
}

int main()
{
    vector_add();
    for (int i = 0; i < 4; ++i)
        printf("%d %d\n", C[0], C[1]);
}
