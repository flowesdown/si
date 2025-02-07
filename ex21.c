#include <stdio.h>

int main() {
    int a, i = 0,b;
    scanf("%d %d", &a,&b);
    int binary[32];
    while (a) {
        binary[i++] = a % b;
        a /= b;
    }
    for (--i; i >= 0; i--)
        printf("%d", binary[i]);
    return 0;
}