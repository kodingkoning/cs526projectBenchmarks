#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int16_t A[8];
int16_t B[8];
int32_t C[4];

/*void dot_prod()
{
    C[0] = A[0] * B[0] + A[1] * B[1];
    C[1] = A[2] * B[2] + A[3] * B[3];
}

void dot_prod2()
{
    for (int i = 0; i < 2; ++i)
    {
        C[i] = A[2 * i] * B[2 * i] + A[2 * i + 1] * B[2 * i + 1];
    }
}*/

void dot_prod3()
{
    for (int i = 0; i < 4; ++i)
    {
        C[i] = A[2 * i] * B[2 * i] + A[2 * i + 1] * B[2 * i + 1];
    }
}


int main()
{
    //dot_prod();
    //dot_prod2();
    printf("%d %d\n", C[0], C[1]);
}