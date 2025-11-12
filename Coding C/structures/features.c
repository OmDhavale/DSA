#include<stdio.h>
#include<string.h>
int main(){
    struct name{
        int age;
        char name[50];
        int runs;
    }a,b,c;
    a.age=4;
    a.runs=100;
    strcpy(a.name,"Om");

    b=a;
    
    printf("%s %d %d",b.name,b.age, b.runs);
    return 0;
}