#include<stdio.h>
void decending (int n ){
    if(n==0){return ;}
    printf("%d\n",n);
    decending(n-1);
    return;

}
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    decending(n);
    return 0;
}