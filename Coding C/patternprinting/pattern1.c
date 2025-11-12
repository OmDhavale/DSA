#include<stdio.h>
int main(){
    int n;
    printf("Rows: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        // for(int j=1; j<=2*i-1;j=j+2){  //odd -> (2n-1) 
        //     printf("%d",j);
        // }
        int a = 1;
        for (int j=1;j<=i;j++){
            printf("%d",a);
            a=a+2;
        }
        printf("\n"); 
    }
    return 0;
}