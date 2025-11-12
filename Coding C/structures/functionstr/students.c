#include<stdio.h>
#include<string.h>
typedef struct data {
    int roll_no;
    char name[20];
    char department[50];
    char course[50];
    int year;
}database;
void fun(database a,database b){
    int flag=1;
        // char str1[50],str[50]; 
        // strcpy(str1,a.department);
        // strcpy(str2,b.department);
   
   for(int i=0;a.department[i]!=0,b.department[i]!=0;i++){
        if(a.department[i]!=b.department[i]){flag=0;break;}
   } 
   if(flag==1){printf("Samedept");}
   else{printf("Diff dept");}
}
int main(){
    database a,b;
    printf("Enter Roll no: ");
    scanf("%d",&a.roll_no);
    printf("Enter Name: ");
    scanf("%s",a.name);
    printf("Enter department: ");
    scanf("%s",a.department);
    printf("Enter Course: ");
    scanf("%s",a.course);
    printf("Enter Year of joining: ");
    scanf("%d",&a.year);

    printf("Enter Roll no: ");
    scanf("%d",&b.roll_no);
    printf("Enter Name: ");
    scanf("%s",b.name);
    printf("Enter department: ");
    scanf("%s",b.department);
    printf("Enter Course: ");
    scanf("%s",b.course);
    printf("Enter Year of joining: ");
    scanf("%d",&b.year);

    fun(a,b);
    return 0;
}