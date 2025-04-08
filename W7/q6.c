#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t six_middle_bits(uint32_t u) {
    u = u >> 13;
    int mask = 0x3F; // 11 1111 = 0x3F
    u = u & mask;
    return u;
}

int main(void) {
    uint32_t num = 0x00F9AEB0; // 0b 0000 0000 1111 1001 1010 1110 1011 0000
// mid six =                                         ^     ^
// result = 001101 = 0x0D
    printf("%d\n", num);
    printf("0x%0x\n", six_middle_bits(num));
    return EXIT_SUCCESS;
}