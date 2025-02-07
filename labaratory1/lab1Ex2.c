#include <stdio.h>

int main() {
    double x, result;

    scanf("%lf", &x);

    if (x <= 0) {
        result = x * x;
    } else if (x <= 10) {
        result = x + 1;
    } else {
        result = -x * x + 2;
    }

    printf("f(x) = %.2f", result);

    return 0;
}