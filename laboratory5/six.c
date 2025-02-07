#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* findFromEnd(struct Node* head, int x) {
    struct Node *main_ptr = head, *ref_ptr = head;
    for (int i = 0; i < x; i++) if (!ref_ptr) return NULL; ref_ptr = ref_ptr->next;
    while (ref_ptr) { main_ptr = main_ptr->next; ref_ptr = ref_ptr->next; }
    return main_ptr;
}

int main() {
    struct Node* list = NULL;
    findFromEnd(list, 3);
    return 0;
}
