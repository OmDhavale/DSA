#include<stdio.h>
int main (){
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);

    for (int i=n;i>0;i--){
        for(int j=n;j>i-1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}