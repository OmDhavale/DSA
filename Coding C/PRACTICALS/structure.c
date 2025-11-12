#include<stdio.h>
typedef struct students {
    int rollno;
    char name[100];
}students;
int main(){
    students array[100],temp;
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",array[i].name);
        printf("Enter roll no: ");
        scanf("%d",&array[i].rollno);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i].rollno<array[j].rollno){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %s\n",array[i].rollno,array[i].name);
    }
    return 0;
}