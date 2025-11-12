#include<stdio.h>
int main () {
    int n,sum=0;
    printf("Value of n dya: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n) {
        
        if (i%2==0) {
            sum=sum-i;
        }
        else {
            sum=sum+i;
        }
        i++;
    }
    printf("The sum is %d",sum);
    return 0;
}