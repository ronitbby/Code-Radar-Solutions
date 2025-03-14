#include <stdio.h>

int main() {
    int num;

    // Input the number
    scanf("%d", &num);

    // Get the lowest set bit using bitwise AND
    int lowest_bit = num & (-num);

    // Print the lowest set bit
    printf("%d\n", lowest_bit);

    return 0;
}
