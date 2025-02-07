#include<stdio.h>

int main() {
    float matr[100][100], prod = 1;
    int lin, col, i, j;

    printf("Input number of lines lin: ");
    scanf("%d", &lin);
    printf("Input number of columns col: ");
    scanf("%d", &col);

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            scanf("%f", &matr[i][j]);
        }
    }

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            prod *= matr[i][j];
        }
    }

    printf("The product of the 2D array's elements is: %5.3f\n", prod);

    return 0;
}
