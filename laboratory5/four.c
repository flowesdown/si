#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteList(struct Node** head) {
    struct Node* temp;
    while (*head) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    struct Node* list = NULL;
    deleteList(&list);
    return 0;
}
