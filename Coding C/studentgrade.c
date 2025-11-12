#include<stdio.h>
int main (){
    int p;
    printf("Enter percentage: ");
    scanf("%d",&p);
    if (p>=90 && p<=100) {
        printf("Grade A");
    }
    else if (p>=80 && p<90) {
        printf("Grade B"); 
    }
    else if (p>=70 && p<80) {
        printf("Grade C");
    }
    else if (p>=60 && p<70) {
        printf("Grade D");
    }
    else if (p>=50 && p<60) {
        printf("Grade E");
    }
    else if (p>=40 && p<50) {
        printf("Grade F");
    }
    else {printf("Fail");}
    return 0;
}