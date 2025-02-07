#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void concatenateList(struct Node** head) {
    struct Node* temp = *head;
    struct Node* newHead = NULL;
    while (temp) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = temp->data;
        newNode->next = newHead;
        newNode->prev = NULL;
        if (newHead) newHead->prev = newNode;
        newHead = newNode;
        temp = temp->next;
    }
    temp = newHead;
    while (temp) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = temp->data;
        newNode->next = *head;
        newNode->prev = NULL;
        if (*head) (*head)->prev = newNode;
        *head = newNode;
        temp = temp->next;
    }
}

int main() {
    struct Node* list = NULL;
    concatenateList(&list);
    return 0;
}
