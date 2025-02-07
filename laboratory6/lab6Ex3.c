#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void copyListWithFilter(struct Node* head, struct Node** newHead, int minValue) {
    while (head) {
        if (head->data >= minValue) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = head->data;
            newNode->next = *newHead;
            newNode->prev = NULL;
            if (*newHead) (*newHead)->prev = newNode;
            *newHead = newNode;
        }
        head = head->next;
    }
}

int main() {
    struct Node* list = NULL;
    struct Node* newList = NULL;
    copyListWithFilter(list, &newList, 10);
    return 0;
}
