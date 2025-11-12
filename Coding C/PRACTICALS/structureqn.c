#include<stdio.h>
typedef struct students {
    int rollno;
    char name[50];
    int marks;
}students;
int main(){
    students array[500];
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Roll no.: ");
        scanf("%d",&array[i].rollno);
        printf("Enter name: ");
        scanf("%s",array[i].name);
        printf("Marks: ");
        scanf("%d",&array[i].marks);
    }

    students temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[j].rollno<array[i].rollno){
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    printf("-------Students data--------\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%d \n",array[i].rollno,array[i].name,array[i].marks);
    }
    return 0;
}