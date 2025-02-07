#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void displayList(struct Node* head, int option) {
    if (option == 1) {
        struct Node* temp = head;
        while (temp) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    } else if (option == 2) {
        struct Node* temp = head;
        while (temp && temp->next) temp = temp->next;
        while (temp) {
            printf("%d ", temp->data);
            temp = temp->prev;
        }
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    displayList(head, 1);
    displayList(head, 2);
    return 0;
}
