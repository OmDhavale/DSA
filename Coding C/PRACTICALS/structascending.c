#include<stdio.h>
typedef struct students{
    char name[100];
    int rollno;
    int fees;
}studs;
int main(){
    studs array[100];
    int n;
    printf("Enter no of students: "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter name: "); scanf("%s",array[i].name);
        printf("Enter Roll No: "); scanf("%d", &array[i].rollno);
        printf("Enter fees: "); scanf("%d", &array[i].fees);
    }
    studs temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
        if(array[j].rollno<array[i].rollno){
            temp = array[j];
            array[j]=array[i];
            array[i]=temp;
        }
        }
    }
    printf("STUDENTS DATA\n---------------------------------------------\n");
    
    for(int i=0;i<n;i++){
        printf("%d %s %d \n",array[i].rollno,array[i].name, array[i].fees);
    }
    return 0;
}