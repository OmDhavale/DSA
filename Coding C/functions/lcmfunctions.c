#include<stdio.h>
int findlcm(int n1,int n2){
    static int temp =1;
    if (temp%n2==0 && temp%n1==0){return temp;}
    temp++;
    findlcm(n1,n2);
    return temp;
}
int main(){
    int n1,n2;
    printf("2 nos input: ");
    scanf("%d %d",&n1,&n2);
    int lcm = findlcm(n1,n2);
    printf("%d is lcm",lcm);
    return 0;
}