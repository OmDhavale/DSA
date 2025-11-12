#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter 3 no.s: ");
    scanf("%d %d %d",&a,&b,&c);
    // if (a>b) {
    //     if(a>c) {printf("%d is greatest",a);}
    //     else {printf("%d is greatest",c);}

    // }
    // else{
    //     if(b>c) {printf("%d is greatest",b);}
    //     else{printf("%d is greatest",c);}
    // }
    a>b?(a>c?printf("%d",a):printf("%d",c)):(b>c?printf("%d",b):printf("%d",c));
    return 0;
}