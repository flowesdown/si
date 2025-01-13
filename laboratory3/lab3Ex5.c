#include <stdio.h>

int main() {
    int n, a[50], prev, temp, i, j;
    scanf("%d", &n);
    a[0] = 1;
    for (i = 0; i < n; i++) {
        prev = 0;
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            temp = a[j];
            a[j] += prev;
            prev = temp;
            printf("%d ", a[j]);
        }
        printf("\n");
    }

    return 0;
}
