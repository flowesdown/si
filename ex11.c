#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arrOne[n];
    for(int i = 0;i<n;i++)scanf("%d",&arrOne[i]);
    int arrTwo[n];
    for(int i = 0;i<n;i++)scanf("%d",&arrTwo[i]);
    printf("The arrays summ:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arrOne[i]+arrTwo[i]);
    }
}