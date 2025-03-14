#include <stdio.h>

int main() {
    int num;

    // Input the number
    scanf("%d", &num);

    // Get the lowest set bit
    int lowest_bit = num & (-num);

    // Find the position of the lowest set bit
    int position = 0;
    while (lowest_bit > 1) {
        lowest_bit >>= 1;  // Shift right by 1
        position++;        // Increment the position
    }

    // Print the position of the lowest set bit (1-based indexing)
    printf("%d\n", position + 1);

    return 0;
}
