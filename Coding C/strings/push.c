#include<stdio.h>
int main(){
    char str[20]= "College";
    //push letter 'k' in 2 nd index 
    for(int i=6;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='k';
    puts(str);
    return 0;
}