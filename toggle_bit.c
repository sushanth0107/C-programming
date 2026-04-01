#include <stdio.h>

int main() {
    int num, pos;
    printf("Enter number and bit position to toggle (0-indexed): ");
    scanf("%d %d", &num, &pos);

    int result = num ^ (1 << pos);

    printf("Result after toggling bit %d: %d\n", pos, result);

    return 0;
}

