#include<stdio.h>
int main(){
    int n;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    int flag=0, mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){if(mat[i][j]==mat[j][i]){flag++;}}
        }
    }
    if(flag>0){printf("Symmetric");}
    else{printf("Unsymmetric");}
    return 0;
}