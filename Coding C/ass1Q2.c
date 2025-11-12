#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    if(x>10) printf("1");
    else if(x>=1) printf("2");
    else if(x) printf("3");
    else printf("4");
    return 0;
}