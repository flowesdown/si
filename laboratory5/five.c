#include <stdio.h>
#include <stdlib.h>

struct Node {
    int year;
    struct Node* next;
};

void sortList(struct Node** head) {
    struct Node *i, *j;
    for (i = *head; i; i = i->next)
        for (j = i->next; j; j = j->next)
            if (i->year > j->year) {
                int temp = i->year;
                i->year = j->year;
                j->year = temp;
            }
}

int main() {
    struct Node* list = NULL;
    sortList(&list);
    return 0;
}
