#include<stdio.h>
struct stud{
    char studname[50];
    int rollno;
    int percentage;
};
int main(){
    struct stud str[100];
    int i,n;
    printf("Enter no of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name:");
        scanf("%s", str[i].studname);
        printf("Enter Roll No:");
        scanf("%d", &str[i].rollno);
        printf("Enter Percentage:");
        scanf("%d", &str[i].percentage);
    }
    printf("\nName \t Roll No \t Percentage \n");
    for(i=0;i<n;i++){
        printf("%s\t%d\t%d \n",str[i].studname,str[i].rollno,str[i].percentage);
    }
    return 0;
}