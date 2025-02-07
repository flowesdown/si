#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[100];
    int year;
    struct Node* next;
};

void delElemVal(struct Node** head, const char* name) {
    struct Node *temp = *head, *prev = NULL;
    while (temp && strcmp(temp->name, name)) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) return;
    if (!prev) *head = temp->next;
    else prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;
    delElemVal(&head, "Alice");
    return 0;
}