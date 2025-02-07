#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int num) {
    int original = num, sum = 0, n = 0;
    while (num > 0) {
        num /= 10;
        n++;
    }
    num = original;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }
    return sum == original;
}

void findArmstrongNumbers(int a, int b) {
    printf("Armstrong numbers between %d and %d are:\n", a, b);
    for (int i = a+1; i <= b; i++) {
        if (isArmstrongNumber(i)) {
            printf("%d is an Armstrong number.\n", i);
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    findArmstrongNumbers(a, b);
    return 0;
}
