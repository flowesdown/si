#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void copyList(struct Node* source, struct Node** dest) {
    struct Node *temp = source, *new_node, *last = NULL;
    while (temp) {
        new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = temp->data;
        new_node->next = NULL;
        if (!*dest) *dest = new_node;
        else last->next = new_node;
        last = new_node;
        temp = temp->next;
    }
}

int main() {
    struct Node* original = NULL, *copy = NULL;
    copyList(original, &copy);
    return 0;
}
