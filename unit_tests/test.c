#include <stdint.h>
#include <stdio.h>

int main()
{
    uint8_t data[4];
    int8_t kernel[16][4];
    int32_t output[16];

    for (int i = 0; i < 16; i++)
        for (int k = 0; k < 4; k++)
            output[i] += data[k] * kernel[i][k];
            
    printf("%d\n", output[1]);
}