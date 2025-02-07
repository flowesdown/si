#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void criteriaSort(struct Node** head) {
    if (!*head) return;
    struct Node* temp1 = *head;
    struct Node* temp2;
    while (temp1) {
        temp2 = temp1->next;
        while (temp2) {
            if (temp1->data > temp2->data) {
                int temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}

int main() {
    struct Node* list = NULL;
    criteriaSort(&list);
    return 0;
}
