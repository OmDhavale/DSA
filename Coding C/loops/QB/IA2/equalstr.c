#include<stdio.h>
int main(){
    char a[100],b[100];int flag=1;
    printf("Enter first string a: ");
    gets(a);
    printf("Enter second string b: ");
    gets(b);
    for(int i=0;a[i]!=0,b[i]!=0;i++){
        if(a[i]!=b[i]){flag=0;}
    }
    if(flag==1){printf("Same strings");}
    else{printf("Unequal string");}
    
    return 0;
}