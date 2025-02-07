#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int max = 0;
    int val;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&val);
            if(max<val)max=val;
        }
        
        printf("%d ",max);
        max=0;
    }
    

    return 0;
}