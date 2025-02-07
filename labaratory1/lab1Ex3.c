#include <stdio.h>

int main() {
    double a, b, x;

    printf("Enter coefficients a and b: ");
    scanf("%lf %lf", &a, &b);

    if (a == 0) {
        if (b == 0) {
            printf("Infinite solutions.");
        } else {
            printf("No solution. -> b!=0");
        }
    } else {
        x = -b / a;
        printf("x = %.2f", x);
    }

    return 0;
}