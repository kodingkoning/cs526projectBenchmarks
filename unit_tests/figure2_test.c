#include "stdint.h"

void dot_16x1x16_uint8_int8_int32 (
    uint8_t data [ restrict 4] ,
    int8_t kernel [ restrict 16][4] ,
    int32_t output [ restrict 16]) {

    for ( int i = 0; i < 16; i ++)
        for ( int k = 0; k < 4; k ++)
            output [i] += data [k] * kernel [i ][ k ];

}
