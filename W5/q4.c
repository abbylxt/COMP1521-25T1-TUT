




uint8_t six_middle_bits(uint32_t input) {
    // 0000 0000 0000 0100 1110 0000 0000 0000
    //                 |     | >>>>
    input = input >> 13;
    // 0b 11 1111 = 0x3F
    // 0000 0000 0000 0000 0000 0000 0010 0111
    // 0000 0000 0000 0000 0000 0000 0011 1111
    
    uint8_t result = input & 0x3F
    return result;
}