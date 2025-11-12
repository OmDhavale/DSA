#include<stdio.h>
int main(){
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=(n/2)+1;  //gives middle element.. why only n/2+1 ?? ans: mathematically
            if(j==a||i==a) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}