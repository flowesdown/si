#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (i == 2 || i == 3 || i == 5) {
            printf("%d ", i);
            continue;
        }

        if ((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0)) {
            printf("%d ", i);
        }
    }

    return 0;
}