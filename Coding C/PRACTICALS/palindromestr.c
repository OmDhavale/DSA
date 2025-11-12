#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    char rev[100];
    for(int i=length-1;str[i]!='\0';i++){
        rev[length-1-i]=str[i];
    }
    int test=0;
    for(int i=0;str[i]!='\0';i++){
        if(rev[i]==str[i]){test=1;}
    }
    if(test==1){printf("Palindrome string");}
    else{printf("Not palindrome");}
    return 0;
}