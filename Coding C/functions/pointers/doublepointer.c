#include<stdio.h>
int main (){
    int a=4;
    int* x =&a;    // stored address of a in var x
    printf("%d\n",*x);
    int** y= &x;    //stored the address of x in var y
    printf("%d\n",**y);  
    return 0;
}