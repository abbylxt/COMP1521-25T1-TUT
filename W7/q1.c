#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

int main(void) {
    int16_t num1 = 30000; 
    int16_t num2 = 30000;
    int32_t result = num1 + num2;
    uint16_t unsigned_result = num1 + num2;

    int8_t neg_num_8 = 0x80;
    int16_t neg_num_16 = 0x80;
    // 0000 0000
    // 1000 0000 
    // 0000 0000 1000 0000 
    // 0000 0000 0000 0000
    // 1000 0000 0000 0000

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", result);
    printf("%d\n", unsigned_result);
    printf("%d\n", neg_num_8);
    printf("%d\n", neg_num_16);

    // printf("%d\n", numF);



    return EXIT_SUCCESS;
}