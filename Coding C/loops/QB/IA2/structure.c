#include<stdio.h>
struct stdata {
    int rollno;
    char name[50];
    int marks;
};
int main(){
    struct stdata st[500];
    int r,m,n;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Roll No, Marks, Name: ");
        // scanf("%d %s %d",&st[i].rollno, st[i].name, &st[i].marks);
        scanf("%d",&st[i].rollno);
        scanf("%d",&st[i].marks);
        scanf("%s",st[i].name);
    }
    printf("ROLL NO \t NAME \t MARKS\n");
    printf("-------------------------------------------------------\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%d\n",st[i].rollno, st[i].name, st[i].marks);
    }
}