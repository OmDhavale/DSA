#include<stdio.h>
#include<conio.h>

void main () {
    long int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%ld %ld %ld",&a,&b,&c);

    if(a>b) {
        if (a>c) {
            printf("%ld is greatest number",a);
        }
        else {
            printf("%ld is greatest number",c);
        }
    }
    else {
        if(b>c) {
            printf("%ld is greatest number",b);
        }
        else {
            printf("%ld is greatest number",c);
        }
    }
  getch();
}