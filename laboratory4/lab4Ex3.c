#include<stdio.h>

int main() {
    int n, i, j;
    int fib[100][100];

    printf("Input n (<= 10): ");
    scanf("%d", &n);

    fib[0][0] = 1;
    fib[0][1] = 1;
    for(i = 1; i < n; i++) {
        fib[i][0] = fib[i-1][1];
        fib[i][1] = fib[i-1][1] + fib[i-1][0];
    }

    for(i = 0; i < n; i++) {
        for(j = 2; j < n; j++) {
            fib[i][j] = fib[i][j-1] + fib[i][j-2];
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", fib[i][j]);
        }
        printf("\n");
    }

    return 0;
}