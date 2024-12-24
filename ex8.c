#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)scanf("%d",&arr[i]);


    
    int doubleCount=0;
    int repetitionCount=doubleCount;

    for(int i = 0; i <n;i++){
        if (arr[i] == -1) continue;
        repetitionCount=doubleCount;
        for (int j = i + 1; j < n; j++){
            if(arr[i]==arr[j]){
            repetitionCount++;
            arr[j]=-1;

            }
        }
        if(doubleCount!=repetitionCount)doubleCount++;
    }
    printf("The total number of duplicate elements found in the array is: %d",doubleCount);

    return 0;
}