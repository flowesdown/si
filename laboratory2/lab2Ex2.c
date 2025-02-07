#include <stdio.h>
int main() {
    int a, b, q = 0;
    scanf("%d %d", &a, &b);
    while (a >= b) a -= b, q++;
    printf("Quotient: %d, Remainder: %d", q, a);
    return 0;
}