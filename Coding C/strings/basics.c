#include<stdio.h>
#include<string.h>

int main(){
    // int count=0;
    //  char str[]= "PhysicsWallah";
    //  char str[]={'w','h','o',};
    // int i=0;
    // while (str[i]!='\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }
    char str[50];
    scanf("%[^\n]s",str);
    

    printf("string is %s\n",str);
    puts(str);
    return 0;
}