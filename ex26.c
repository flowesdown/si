#include <stdio.h>

void display_smaller_numbers(int max_value) {
    printf("Numbers smaller than %d in ascending order:\n", max_value);
    for (int i = 0; i < max_value; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a natural number greater than zero.\n");
    } else {
        display_smaller_numbers(num);
    }

    return 0;
}
