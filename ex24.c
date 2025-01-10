#include <stdio.h>

int sumOfSquares(int arr1[], int arr2[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (arr1[i] * arr1[i]) + (arr2[i] * arr2[i]);
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int result = sumOfSquares(arr1, arr2, n);
    printf("Summ square root is %d\n", result);

    return 0;
}
