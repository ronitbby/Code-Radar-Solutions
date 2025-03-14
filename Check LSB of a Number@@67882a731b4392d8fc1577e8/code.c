#include <stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check if the LSB is set (1) or not (0)
    if (num & 1) {
        printf("LSB is set (1)\n");
    } else {
        printf("LSB is not set (0)\n");
    }

    return 0;
}
