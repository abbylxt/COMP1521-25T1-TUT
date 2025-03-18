#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    // // 1234
    // int dec = 1234; // 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0 = 1000 + 200 + 30 + 4 = 1234
    // // hex counting: 0 1 2 ... 9 A B C D E F
    // int hex = 0x1234; // = 4096 + 512 + 48 + 4 = 4,660
    // // oct counting: 0 1 2 ... 7
    // int oct = 01234; // = 668
    // // binary = 0 1
    // int binary = 0b1010; // 10 (not portable) (not recommend to use in your code)

    // 127
    int dec = 1234; 
    // hex counting: 0 1 2 ... 9 A B C D E F
    int hex = 0x1234; //    0x4 = 4 * 16^0 = 4 * 1    = 4
                      //                      +
                      //   0x30 = 3 * 16^1 = 3 * 16   = 48
                      //                      +
                      //  0x200 = 2 * 16^2 = 2 * 256  = 512
                      //                      +
                      // 0x1000 = 1 * 16^3 = 1 * 4096 = 4096
                      //                      =
                      //                                4660
    // oct counting: 0 1 2 ... 8
    int oct = 01234; // 01000  = 1 * (8 ^ 3) = 1 * 512 = 512
                     //                         +
                     // 00200  = 2 * (8 ^ 2) = 2 * 64  = 128
                     //                         +
                     // 00030  = 3 * (8 ^ 1) = 3 * 8   = 24
                     //                         +
                     // 00004 = 4 * (8 ^ 0) = 4 * 1    = 4
                     //                         =
                     //                        668
    int binary = 0b1010; // 2 (not portable) (do not to use in your code)
                         // 0b1000 = 1 * 2^3 = 8
                         // 0b0000 = 0 * 2^2 = 0
                         // 0b0010 = 1 * 2^1 = 2
                         // 0b0000 = 0 * 2^0 = 0
                         // total  =  0b1010 = 10
    //  hex to binary    0x7F  = 0111 1111
                         // 0x7 = 7 = 4 + 2 + 1 = 1 * 2^2 + 1 * 2^1 + 1* 2^0 = 0b 0111 
                         // 0xF = 15 = 1111 = 8 + 4 + 2 + 1


    // printf("%d\n", dec);
    // printf("0x%03X = %d\n", hex, hex);
    // printf("0%o = %d\n", oct, oct);
    // printf("%d\n", binary);
    // printf("0x%03X, 0%o\n", hex, oct);
    // printf("0x%03x, 0%o\n", hex, oct);

    // mini program to print input in octal, hex and dec
    int input;
    scanf("%d", &input);
    printf("input decimcal form = %d\n input hex form  = 0x%03X\n input octal form = 0%o\n", input, input, input);

    return EXIT_SUCCESS;
}