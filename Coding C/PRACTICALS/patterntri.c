#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter no of rows: ");scanf("%d",&n);
    for( i=1;i<=n;i++){
        for( j=1;j<=i;j++){
            printf(" ");
        }
        for( k=j-1;k<=n;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}