#include<stdio.h>
int main(){
    int x,n,pow=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        pow = pow*x;
    }
    printf("Power is %d",pow);
    return 0;
}