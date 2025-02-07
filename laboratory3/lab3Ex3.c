#include<stdio.h>

int main() {
    int v[50], n = 0, i, ascending = 1, descending = 1, arithmetic = 1, geometric = 1, diff, ratio;

    printf("Input series (end with 0): ");
    while (n < 50 && scanf("%d", &v[n]) && v[n] != 0) n++;

    diff = v[1] - v[0];
    ratio = v[1] / v[0];
    for (i = 1; i < n; i++) {
        if (v[i] <= v[i - 1]) ascending = 0;
        if (v[i] >= v[i - 1]) descending = 0;
        if (v[i] - v[i - 1] != diff) arithmetic = 0;
        if (v[i] % v[i - 1] != 0 || v[i] / v[i - 1] != ratio) geometric = 0;
    }

    if (ascending) printf("Strictly ascending.\n");
    if (descending) printf("Strictly descending.\n");
    if (arithmetic) printf("Arithmetic progression.\n");
    if (geometric) printf("Geometric progression.\n");
    if (!ascending && !descending && !arithmetic && !geometric) 
        printf("No rule followed.\n");

    return 0;
}
