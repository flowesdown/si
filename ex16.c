#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num=0;
    for(int i=1;1<<i<n;i++){
        num++;
    }
    for (int i = num; i >= 0; i--) {  
        if (n & (1 << i))  
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    
    return 0;
}
