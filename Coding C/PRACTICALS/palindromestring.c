#include<stdio.h>
int palindromef(char string[50]){
    int length=0,flag=1;
    char reverse[50];
    for(int i=0;string[i]!='\0';i++){
        length++;
    }
    for(int i=length-1;i>=0;i--){
        reverse[length-i-1]=string[i];
    }
    for(int i=0;i<length;i++){
        if(reverse[i]!=string[i]){flag=0;}

    }
    if(flag==1){printf("Palindrome string");}
    if(flag==0){printf("Not a Palindrome string");} 
    return 1;
}
int main(){
    char string[50];
    
    puts("Enter string: ");
    gets(string);
    palindromef(string);  
    return 0;
}