#include<stdio.h>
void funsum(int n,int s){
    if(n==0){
        printf("Sum is: %d",s);
        return;
    }
    funsum(n-1,s+n);
    return;
}
int main (){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    funsum(n,0);
    return 0;
}