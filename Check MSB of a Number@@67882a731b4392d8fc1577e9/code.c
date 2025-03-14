#include <stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check if the LSB is set (1) or not (0)
    if (num & (1 << (sizeof(int) * 8 - 1)))  {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
