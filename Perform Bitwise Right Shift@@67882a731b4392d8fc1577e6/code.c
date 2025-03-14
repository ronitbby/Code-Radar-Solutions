#include <stdio.h>

int main() {
    int num, shiftAmount;

    // Input the integer and the number of positions to shift
    scanf("%d %d", &num, &shiftAmount);

    // Perform and print the bitwise left shift operation
    printf("%d\n", num >> shiftAmount);

    return 0;
}
