#include<stdio.h>
int main() {
    int n, v[50], x, i, first = -1, last = -1;

    printf("Input n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Input x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (v[i] == x) {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (first != -1)
        printf("First position: %d\nLast position: %d\n", first, last);
    else
        printf("x not found.\n");

    return 0;
}
