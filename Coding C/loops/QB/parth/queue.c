#include<stdio.h>
#define max 10
int queue[10],rear=-1,front=-1;
int deleted_val;


int enqueue(int no){
    if(rear == max-1 ) printf("Overflow");
    else{
        if(front==-1 && rear ==-1) 
      {  front = 0; rear = 0;
        queue[rear]=no;
      }
      else{
        rear = rear +1;
        queue[rear]=no;
      }
    }
}


int dequeue(){
    if(front==-1 || front>rear) printf("underflow");
    else{
        deleted_val = queue[front];
        front++;
    }
    return deleted_val;
}
void display(){
    if(rear>=0){
        printf("\nElements in queue: ");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
    else{
        printf("\nQueue is empty\n");
    }
}
int main(){
    int ch,no;
    printf("Name: Parth Siddharth Manjrekar\nRoll No: 23UF18443AI030\n");
    printf("\n1.Enqueue\n2.Display\n3.Dequeue\n4.EXIT\n"); 
    do{ printf("Enter your choice: ");
        scanf("%d",&ch);
   
        switch(ch){
        case 1: printf("Enter number to be inserted in queue: ");
                    scanf("%d",&no);
                    enqueue(no); 
                    break;
        case 2: display(); break;
        case 3: printf("Deleted element : %d\n",dequeue());break;
        case 4: printf("Exitting....");break;
    }
    }while(ch!=4);
    return 0;
}
