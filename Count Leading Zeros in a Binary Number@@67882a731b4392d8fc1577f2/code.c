#include <stdio.h>

int countLeadingZeros(int num) {
    int count = 0;

    // Shift the number right until the number becomes 0
    while (num) {
        num >>= 1;
        count++;
    }

    // Subtract the number of shifts from the total number of bits (32 bits in typical int)
    return (sizeof(int) * 8) - count;
}

int main() {
    int num;

    // Input the number
    scanf("%d", &num);

    // Handle the special case for 0 (since 0 has no leading 1s)
    if (num == 0) {
        printf("32\n"); // If number is 0, it has 32 leading zeros in a 32-bit integer
    } else {
        // Output the count of leading zeros
        printf("%d\n", countLeadingZeros(num));
    }

    return 0;
}

