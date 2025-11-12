#include<stdio.h>
// int factorial(int x){
//     int fact=1;
//     while(x>0){
//         fact=fact*x;
//         x--;
//     }
//     return fact;
// }

// int main () {
//     int a;
//     printf("Any number :");
//     scanf("%d",&a);
    
//     int b = factorial(a);
//     printf("%d",b);
//     return 0;
// }
// #include<stdio.h>
// int add (int x, int y) {   //a will get assigned to int x
//                            //b will get assigned to int y
//     int a= x+y;
//     return a;        //will return value of a (x+y) to calling function
// }
// int main (){
//     int a,b;
//     printf("Two numbers dya: ");
//     scanf("%d %d",&a,&b);
//     int sum = add(a,b); //will call (go to) 'add' function 
    
//     printf("addition is %d",sum);
//     return 0;
// }

#include<stdio.h>
void eng() {
    printf("England\n");
    return;
}

int main (){
    printf("India\n");
    void aus();
    aus();      //call aus
    return 0;
}
void aus () {
    printf("Austrailia\n");
    eng();      //call eng
    return;
}