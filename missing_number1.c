#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 5};  // Missing number is 4
    int n = 5;

    int xor1 = 1;          // Start XOR from 1
    int xor2 = arr[0];     // Start XOR from first element of array

    for (int i = 2; i <= n; i++) {
        xor1 ^= i;
    }

    for (int i = 1; i < n - 1 + 1; i++) {
        xor2 ^= arr[i];
    }

    int res = xor1 ^ xor2;
    printf("Missing number is: %d\n", res);
    return 0;
}

