#include<stdio.h>
int main() {
    int n, v[100], i, sum = 0;

    printf("Input n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    for (i = 0; i < n; i++)
        sum += v[i];

    printf("Sum of array's elements is %d\n", sum);
    return 0;
}