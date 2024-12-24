#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sizeOfDoubleVector=n*2;
    int arr[sizeOfDoubleVector];
    for(int i = 0;i<sizeOfDoubleVector;i++)scanf("%d",&arr[i]);
    int product=0;
    for(int i = 0;i<n;i++)product+=(arr[i]*arr[i+n]);
    printf("The scalar product of vectors= %d",product);

    return 0;
}