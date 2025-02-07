#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int isSymmetric(struct Node* head) {
    struct Node *slow = head, *fast = head, *second_half, *prev = NULL;
    while (fast && fast->next) { fast = fast->next->next; slow = slow->next; }
    second_half = slow;
    while (second_half) {
        if (head->data != second_half->data) return 0;
        head = head->next;
        second_half = second_half->next;
    }
    return 1;
}

int main() {
    struct Node* list = NULL;
    printf("%d", isSymmetric(list));
    return 0;
}
