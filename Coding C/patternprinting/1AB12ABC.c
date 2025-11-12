#include<stdio.h>
int main(){
    int n;
    printf("Rows number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");
        }
        else{
        int a = 1;
        for(int j=1;j<=i;j++){
            printf("%c",(char)(a+64));
            a++;
        }
        printf("\n");
        }
    }
    return 0;
}