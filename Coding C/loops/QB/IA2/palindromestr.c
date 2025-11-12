#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    int count=0,flag=1;
    printf("Enter any string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("Size is %d\n",count);
    for(int i=count-1;i>=0;i--){
        rev[count-i-1]=str[i];
    }
    
    for(int i=0;i<count;i++){
        if(rev[i]!=str[i]){flag=0;}
    }
    if(flag==1){printf("Palindrome string");}
    else{printf("Not a Palindrome string");}

    return 0;
}