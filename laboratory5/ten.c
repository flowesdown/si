#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int number;
    char surname[100];
    char specialization[100];
    int year;
    float average;
    struct Node* next;
};

void displayFirstYearCS(struct Node* head) {
    while (head) {
        if (head->year == 1 && !strcmp(head->specialization, "Computer Science")) {
            printf("%d %s %.2f\n", head->number, head->surname, head->average);
        }
        head = head->next;
    }
}

int main() {
    struct Node* list = NULL;
    displayFirstYearCS(list);
    return 0;
}
