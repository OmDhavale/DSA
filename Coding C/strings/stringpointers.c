#include<stdio.h>
int main(){
    char str[]="CollegeWallah";
    char* ptr = str; //ptr points to str[0]
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        *ptr++;
        i++;
    }

    return 0;
}