#include <stdio.h>

#define MAX_COUNTRIES 100

void paint(int n, int v[], int z[][MAX_COUNTRIES]) {
    int c, ok, cmax = 1;

    v[0] = 1;

    for (int i = 1; i < n; i++) {
        c = 1;
        do {
            ok = 1;
            for (int j = 0; j < i && ok; j++) {
                if (z[i][j] && v[j] == c) {
                    ok = 0;
                }
            }
            if (ok) v[i] = c;
            else c++;
        } while (!ok);

        cmax = (c > cmax) ? c : cmax;
    }

    printf("Minimum number of colors used: %d\nColoring of countries:\n", cmax);
    for (int i = 0; i < n; i++) {
        printf("Country %d: Color %d\n", i, v[i]);
    }
}

int main() {
    int n, z[MAX_COUNTRIES][MAX_COUNTRIES], v[MAX_COUNTRIES];
    
    printf("Enter the number of countries: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix (1 for neighboring countries, 0 for non-neighbors):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &z[i][j]);
        }
    }

    paint(n, v, z);
    return 0;
}
