#include <stdio.h>
int main() {
    int n, res = 0, factor = 1;
    scanf("%d", &n);
    while (n) {
        if (n % 10 % 3 != 0) {
            res += (n % 10) * factor;
            factor *= 10;
        }
        n /= 10;
    }
    printf("%d", res);
    return 0;
}