#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position (n)
    scanf("%d %d", &num, &n);

    // Create a mask with all bits set to 1 except the n-th bit
    int mask = ~(1 << n);

    // Clear the n-th bit by performing bitwise AND with the mask
    num = num & mask;

    // Print the modified number
    printf("%d\n", num);

    return 0;
}
