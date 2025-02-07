#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf((b - a == c - b && c - b == d - c) ? "Yes" : "No");
    return 0;
}