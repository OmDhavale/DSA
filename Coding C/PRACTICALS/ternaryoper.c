#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 nos: ");
    scanf("%d %d %d",&a,&b,&c);
    (a>b)?((a>c)?printf("Max = %d",a):printf("Max = %d",c)):((b>c)?printf("Max = %d",b):printf("Max=%d",c));
    return 0;
}