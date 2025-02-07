#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int highestOddDigits(int n) {
    int digits[8], count = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            digits[count++] = digit;
        }
        n /= 10;
    }

    qsort(digits, count, sizeof(int), compare);

    int result = 0;
    for (int i = 0; i < count; i++) {
        result = result * 10 + digits[i];
    }
    
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = highestOddDigits(n);
    printf("The number is %d\n", result);

    return 0;
}
