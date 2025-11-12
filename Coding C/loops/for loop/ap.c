#include<stdio.h>
int main (){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    // for(i=1;i<=2*n-1;i=i+2) {
    //     printf("%d ",i);
    // }
//here we use Arithmetic progrssion formula that is
//an=a+(n-1)d ..a=first term in AP d=Common difference
    for(i=4;i<=3*n+1;i=i+3) {
        printf("%d ",i);
    }
    return 0;
}