#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position (n)
    scanf("%d %d", &num, &n);

    // Check if the n-th bit is set or not
    if (num & (1 << n)) {
        printf("The %d-th bit is set (1)\n", n);
    } else {
        printf("The %d-th bit is not set (0)\n", n);
    }

    return 0;
}
