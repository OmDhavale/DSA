#include<stdio.h>
int main (){
    for(int i=1;i<=100;i++) {
        if(i%2==0) {continue;} //whenever this if statement satisfies then u tell it to let it go (skip)or continue 
                               // so it goes to next iteration..and so the loop goes on
        else {printf("%d ",i);}
    }
return 0;
}