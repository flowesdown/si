#include <stdio.h>

#define MAX 100

void paint(int n, int adj[][MAX]) {
    int color[MAX] = {0}, maxColor = 1, valid;
    
    for (int i = 0; i < n; i++) {
        for (color[i] = 1; ; color[i]++) {
            valid = 1;
            for (int j = 0; j < i; j++) {
                if (adj[i][j] && color[j] == color[i]) {
                    valid = 0;
                    break;
                }
            }
            if (valid) break;
        }
        if (color[i] > maxColor) maxColor = color[i];
    }

    printf("Min colors: %d\n", maxColor);
    for (int i = 0; i < n; i++) {
        printf("Country %d: Color %d\n", i + 1, color[i]);
    }
}

int main() {
    int n, adj[MAX][MAX];

    printf("Enter number of countries: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (1 for neighbors, 0 for non-neighbors):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    paint(n, adj);

    return 0;
}
