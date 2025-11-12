#include<stdio.h>
int main(){
    int n;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){sum+=mat[i][j];}
        }
    }
    printf("%d",sum);

    return 0;
}