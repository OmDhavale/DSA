#include<stdio.h>
int findgcd(int n1,int n2){
    while(n1!=n2){
        if(n1>n2) return findgcd(n1-n2,n2);
        else return findgcd(n1,n2-n1);
    }
    return n1;
}
int main(){
    int num1, num2;
    printf("2 nos.");
    scanf("%d %d",&num1,&num2);
    int gcd = findgcd(num1,num2);
    printf("%d",gcd);
    return 0;
}