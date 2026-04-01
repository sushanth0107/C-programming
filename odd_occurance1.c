#include <stdio.h>

void findTwoOdd(int arr[], int n) {
    int xor = 0;
    
    // Step 1: Get the XOR of all elements
    for (int i = 0; i < n; i++) {
        xor ^= arr[i];
    }

    // Step 2: Find rightmost set bit in xor
    int set_bit = xor & (~(xor - 1));

    int x = 0, y = 0;

    // Step 3: Divide elements into two sets and XOR separately
    for (int i = 0; i < n; i++) {
        if (arr[i] & set_bit)
            x ^= arr[i];
        else
            y ^= arr[i];
    }

    printf("Two odd occurring numbers are: %d and %d\n", x, y);
}

int main() {
    int arr[] = {1, 2, 2,3}; // Odd: 3 and 6
    int n = sizeof(arr) / sizeof(arr[0]);
    findTwoOdd(arr, n);
    return 0;
}

