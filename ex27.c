#include <stdio.h>

double x(int k) {
    if (k == 0) return 1;
    return x(k - 1) + 1.0 / x(k - 1);
}

int main() {
    int k;
    scanf("%d", &k);
    printf("%.6f\n", x(k));
    return 0;
}