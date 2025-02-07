#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[50];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d,",arr[i]);
        }
    printf("\n");
    for(int i = 0;i<n;i++)printf("9%d,",arr[i]);

    return 0;
}