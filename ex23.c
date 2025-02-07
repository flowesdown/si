#include <stdio.h>

float averageOverFive(int grades[], int size) {
    float sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (grades[i] >= 5) {
            sum += grades[i];
        }
    }
    
    return sum / size;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int grades[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }
    
    float avg = averageOverFive(grades, n);
    if (avg > 0) {
        printf("The average is %.2f\n", avg);
    } else {
        printf("No grades over 5.\n");
    }
    
    return 0;
}
