#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    int count = 0;

    // Special case for zero
    if (num == 0) {
        return sizeof(unsigned int) * 8;  // If number is zero, return 32 leading zeros
    }

    // Count leading zeros by shifting
    while ((num & (1 << (sizeof(unsigned int) * 8 - 1))) == 0) {
        count++;
        num <<= 1;  // Shift left by 1
    }

    return count;
}

int main() {
    unsigned int num;

    // Input the number
    scanf("%u", &num);

    // Output the count of leading zeros
    printf("%d\n", countLeadingZeros(num));

    return 0;
}
