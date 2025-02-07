#include <stdio.h>

// int main(){
//     int n,num=0,mult=1;
//     scanf("%d",&n);
//     printf("The number %d in base 2 is ",n);
//     while (n > 0){
//         num=num+(n%2)*mult;
//         n=n/2;
//         mult*=10;
//     }
//     printf("%d",num);
//     return 0;
// }
int main() {
    int n, i = 0;
    scanf("%d", &n);
    int binary[32];
    while (n) {
        binary[i++] = n % 2;
        n /= 2;
    }
    for (--i; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
    return 0;
}