#include<stdio.h>
int factorial(int a){
    int fact=1;
    while(a>0){
        fact=fact*a;
        a--;
    }
    return fact;
}
int combination (int i, int j){
    int combi= factorial(i)/(factorial(j)*factorial(i-j));
    return combi;
}
int main (){
    int n;
    printf("Enter no of lines: ");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",combination(i,j));
            
        }
   
        printf("\n");
    }
    
    return 0;
}