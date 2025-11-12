#include<stdio.h>
int main(){
    int n,sqr;
    printf("Enter a perfect square: ");
    scanf("%d",&n);
    for(int i=1;(i*i)<=n;i++){sqr=i;}
    printf("%d",sqr);
    return 0;
}