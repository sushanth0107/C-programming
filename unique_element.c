#include <stdio.h>

int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {1,2,3,1,2,3,5,5,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, n);
    printf("The non-repeating element is: %d\n", unique);

    return 0;
}

