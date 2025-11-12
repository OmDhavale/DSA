#include<stdio.h>
int main(){
    int n,a;
    printf("Enter no of rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        a=65;
        for(int j=1; j<=n+1-i;j++){
            printf("%c",(char)a);
            a++;
        }
        printf("\n");
    }
    return 0;
}