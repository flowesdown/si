#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void concatenateLists(struct Node** head1, struct Node** head2) {
    if (*head1) {
        struct Node* temp = *head1;
        while (temp->next) temp = temp->next;
        temp->next = *head2;
    } else *head1 = *head2;
}

int main() {
    struct Node* list1 = NULL, *list2 = NULL;
    concatenateLists(&list1, &list2);
    return 0;
}
