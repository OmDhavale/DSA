#include<stdio.h>
int main (){
    int j;
    printf("%d",j);
    while(j<=10) {
        printf("\n%d",j);
        j=j+1;
        }
                    //output not coming as loop chya aat gelach nahi ahe..ithe j chi kahi value dilich nahi ahe for e.g int j=1 asa kahich nahi ahe 
                    //so ek garbage value yenar print karun bagh while loop chya adhi 
                    //4194432 ashi garbage value(any random value) aali which is not <=10 so loop madhe gela nahi

    return 0;
}

//ANS: Garbage value