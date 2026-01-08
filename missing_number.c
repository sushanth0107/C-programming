#include <stdio.h>

int main() {
    int arr[] = {1,3,2,5};   // sorted array with missing number
    int n = 5;                  // numbers from 1 to 5
    int xor_all = 1, xor_arr = 0;

    

    // XOR all elements in array
    for (int i = 0; i < n - 1; i++) {
        xor_arr ^= arr[i];
    }

    // Missing number = xor_all ^ xor_arr
    int missing = xor_all ^ xor_arr;
    printf("Missing number = %d\n", missing);

    return 0;
}

