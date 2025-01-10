#include <stdio.h>

float averageOverFive(int grades[], int size) {
    int count = 0;
    float sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (grades[i] > 5) {
            sum += grades[i];
            count++;
        }
    }
    
    return count > 0 ? sum / count : 0.0;
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
