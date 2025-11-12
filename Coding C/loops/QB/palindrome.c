#include<stdio.h>
int main (){
    int a,ld,reverse=0,no;
    printf("Enter any number: ");
    scanf("%d",&a);
  no=a;
    while (a>0) {
        reverse=reverse*10;
        reverse=reverse+(a%10);
        a=a/10;
    }
    if(reverse==no){printf("Palindrome no");}
    else{printf("Not Palindrome");}
    return 0;
}