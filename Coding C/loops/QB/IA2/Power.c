#include<stdio.h>
int main(){
    int power(int,int);
    int n,r;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&r);
    int y=power(n,r);
    printf("%d raised to %d is %d",n,r,y);
    return 0;
}
int power(int n, int r){
    
    if(r==0){return 1;}
    else {return n*power(n,(r-1));}
}