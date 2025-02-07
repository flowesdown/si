#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct SinglyNode {
    int data;
    struct SinglyNode* next;
};

void convertToSingly(struct Node* head, struct SinglyNode** newHead) {
    while (head) {
        struct SinglyNode* newNode = (struct SinglyNode*)malloc(sizeof(struct SinglyNode));
        newNode->data = head->data;
        newNode->next = *newHead;
        *newHead = newNode;
        head = head->next;
    }
}

int main() {
    struct Node* list = NULL;
    struct SinglyNode* newList = NULL;
    convertToSingly(list, &newList);
    return 0;
}
