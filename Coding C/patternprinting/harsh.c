#include <stdio.h>
int main(){
    int n;
    printf("Enter Rows : ");
    scanf("%d",&n);
    int a = 1;
                                      // int b = 1; saalne se   out put ye hai 
    for(int i=1;i<=n;i++){
      int b = 1;  
        for(int j=1;j<=n-i;j++){
            printf("  ");
            
        }
        
        for(int k=1;k<=a;k++){
            //printf("* ");
                                       // Ye code incomplete hai
            int d = b + 64;
            char ch = (char)d;
            printf("%c ",ch);
            b = b + 1;
            
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}