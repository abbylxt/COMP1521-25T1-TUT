#include <stdio.h>

void print_array(int nums[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\n", nums[i]);
    }
}

// void print_array(int nums[], int len, int curr_i) {
//     if (curr_i >= len) {
//         return;
//     }
//     printf("%d\n", nums[curr_i]);
//     print_array(nums, len, curr_i + 1); 
// }

int main(void)
{
    int nums[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    print_array(nums, 10);

    return 0;
}

