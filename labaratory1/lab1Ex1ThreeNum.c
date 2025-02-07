#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf((b - a == c - b) ? "Yes" : "No");
    return 0;
}