#include <stdio.h>
int main() {
    int n, sum = 0, i = 1;
    scanf("%d", &n);

    // Using while
    while (i <= n) sum += i, i++;
    printf("Sum (while): %d\n", sum);

    // Using do while
    sum = 0, i = 1;
    do sum += i++; while (i <= n);
    printf("Sum (do while): %d", sum);

    return 0;
}