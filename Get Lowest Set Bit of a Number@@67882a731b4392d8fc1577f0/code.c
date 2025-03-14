#include <stdio.h>

int main() {
    int num;

    // Input a single integer
    scanf("%d", &num);

    // Get the lowest set bit using bitwise AND
    int lowest_bit = num-1;

    // Print the lowest set bit
    printf("%d\n", lowest_bit);

    return 0;
}
