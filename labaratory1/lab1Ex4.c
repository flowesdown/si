#include <stdio.h>

int main() {
    int a, b, c, count = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a > 0) count++;
    if (b > 0) count++;
    if (c > 0) count++;

    if (count >= 2) {
        if (a > 0) printf("%d ", a);
        if (b > 0) printf("%d ", b);
        if (c > 0) printf("%d", c);
    } else {
        printf("Fewer than two positives");
    }

    return 0;
}
