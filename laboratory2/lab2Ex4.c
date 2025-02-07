#include <stdio.h>
int main() {
    int n, s = 0, prod = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) s += (prod *= i);
    printf("%d", s);
    return 0;
}