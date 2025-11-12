#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    printf("Enter a string: ");
    gets(str);
    int l=0,flag=0;
    for(int i=0;str[i]!='\0';i++){
        l++;
    }
    for(int i=l;i>=0;i--){
        rev[l-i-1]=str[i];
    }
    for(int i=0;i<l;i++){
        if(rev[i]==str[i]){flag++;}
        else{flag=0;}
    }
    if(flag>0){printf("Paindrome");}
    else{printf("Not palindrome");}
    return 0;
}