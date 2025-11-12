#include<stdio.h>
int main(){
    int a;
    printf("Number dya re baba: ");
    scanf("%d",&a);

    int b=0;
    for(int i=2;i<=a-1;i++) {
      if(a%i==0) {b++;}
      break;
    }
    if(a==1) {printf("Not prime not composite");}
    else if(b==0) {printf("Prime");}
    else{printf("Composite no");}
    
    return 0;
}