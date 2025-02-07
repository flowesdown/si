#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void makeCircular(struct Node** head) {
    if (!*head) return;
    struct Node* temp = *head;
    while (temp->next) temp = temp->next;
    temp->next = *head;
    (*head)->prev = temp;
}

int main() {
    struct Node* list = NULL;
    makeCircular(&list);
    return 0;
}
