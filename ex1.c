#include <stdio.h>

void merge(int a[], int n1, int b[], int n2, int c[], int n3, int r[]) {
    int i = 0, j = 0, k = 0, idx = 0;
    while (i < n1 || j < n2 || k < n3) {
        int v1 = (i < n1) ? a[i] : __INT_MAX__;
        int v2 = (j < n2) ? b[j] : __INT_MAX__;
        int v3 = (k < n3) ? c[k] : __INT_MAX__;
        if (v1 <= v2 && v1 <= v3) r[idx++] = a[i++];
        else if (v2 <= v1 && v2 <= v3) r[idx++] = b[j++];
        else r[idx++] = c[k++];
    }
}

int main() {
    int a[] = {1, 4, 7}, b[] = {2, 5, 8, 10}, c[] = {3, 6, 9, 11, 12};
    int r[100], n1 = 3, n2 = 4, n3 = 5;
    merge(a, n1, b, n2, c, n3, r);
    for (int i = 0; i < n1 + n2 + n3; i++) printf("%d ", r[i]);
    return 0;
}
