#include<stdio.h>
int main (){
    float i,n,a=100.0;
    scanf("%f",&n);
    for (i=1;i<=n;i++) {
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}