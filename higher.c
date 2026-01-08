#include <stdio.h>

// Function to count set bits
int countBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;
        n >>= 1;
    }
    return count;
}

// Function to print number in binary
void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int count = countBits(n);
    printf("Input in binary: ");
    printBinary(n);

    // find next number with same set bits
    for (int i = n + 1; i < 1000; i++) {
        if (countBits(i) == count) {
            printf("Next number with same set bits: %d\n", i);
            printf("In binary: ");
            printBinary(i);
            break;
        }
    }

    return 0;
}

