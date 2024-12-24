#include <stdio.h>


void findLongestNaturalSequence(int arr[], int n) {
    if (n == 0) {
        printf("Масив порожній.\n");
        return;
    }

    int maxStart = 0, maxLength = 0;
    int currStart = 0, currLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currLength++;
        } else {
            if (currLength > maxLength) {
                maxStart = currStart;
                maxLength = currLength;
            }
            currStart = i;
            currLength = 1;
        }
    }

    if (currLength > maxLength) {
        maxStart = currStart;
        maxLength = currLength;
    }

    printf("Найдовша послідовність: ");
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 10, 11, 12, 13, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Вхідний масив: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    findLongestNaturalSequence(arr, n);

    return 0;
}