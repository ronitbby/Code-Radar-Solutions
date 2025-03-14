#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position (n)
    scanf("%d %d", &num, &n);

    // Create a mask with the n-th bit set to 1
    int mask = 1 << n;

    // Toggle the n-th bit using the XOR operation
    num = num ^ mask;

    // Print the modified number
    printf("%d\n", num);

    return 0;
}

