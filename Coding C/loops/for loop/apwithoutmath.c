#include<stdio.h>
int main (){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int a=4;
    for(i=1;i<=n;i++) {
        printf("%d ",a);
        a=a+3;
    }
    return 0;
} 
//here there is no need to apply the AP formula instead we can use new variable