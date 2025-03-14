#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position (n)
    scanf("%d %d", &num, &n);

    // Check if the n-th bit is set or not
    if (num & (1 << n)) {
        printf("1", n);
    } else {
        printf("0", n);
    }

    return 0;
}
