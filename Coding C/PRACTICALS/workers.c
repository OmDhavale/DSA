#include<stdio.h>
typedef struct employee{
    int empno;
    char name[50];
    int exp;
    int salary;
}employee;
int main(){
    employee arr[100];
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Employee Number: ");
        scanf("%d",&arr[i].empno);
        printf("Enter name: ");
        scanf("%s",arr[i].name);
        printf("Enter Experience: ");
        scanf("%d",&arr[i].exp);
        printf("Enter Salary: ");
        scanf("%d",&arr[i].salary);

    }
    for(int i=0;i<n;i++){
        if(arr[i].exp>=5 && arr[i].salary<10000 ){
            printf("%d\t%s\t%d\t%d\n",arr[i].empno,arr[i].name,arr[i].exp,arr[i].salary);
        }
    }
}