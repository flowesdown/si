#include<stdio.h>
int main() {
    int n, v[50], i;
    long long product = 1;

    printf("Input n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 1; i < n; i += 2)
        product *= v[i];

    printf("Product of elements on odd positions is %lld\n", product);
    return 0;
}