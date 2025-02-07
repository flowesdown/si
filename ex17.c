#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int pre=0;
    int cur;
    for(int i=0;i<n;i++){
        scanf("%d",&cur);
        if(pre>cur){
            printf("The array values are not in ascending order");
            break;
        }pre=cur;
    }
    printf("The array values are in ascending order");
    return 0;
}