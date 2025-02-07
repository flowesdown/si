#include<stdio.h>

int main() {
    int n, i, j, value;

    printf("Input n (<= 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        value = 1;
        for(j = 0; j < n; j++) {
            if(j < n - i - 1) {
                printf("%5d", 0);
            } else {
                printf("%5d", value);
                value *= 2;
            }
        }
        printf("\n");
    }

    return 0;
}
