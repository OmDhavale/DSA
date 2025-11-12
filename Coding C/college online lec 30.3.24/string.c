#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("Enter a string: ");
    gets(str);
    int i=0,count=0,size=0;
    while(str[i]!=0){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
            count++;
        }
        i++;
        size++;
    }
    
    printf("Vowels: %d\n",count);
    printf("Consonants: %d",size-count);
    return 0;
}