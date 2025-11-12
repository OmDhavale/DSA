#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;

node* top;
void push(int data){
    node* newNode;
    newNode = malloc(sizeof(newNode));
    if(newNode==NULL){
        printf("Stack Overflow");
    }
    else{
        newNode->data = data;
        newNode->next = NULL;
        newNode->next = top;
        top=newNode;
    }
}

void pop(){
    node* temp = top;
    if(temp==NULL){
        printf("Stack Underflow !");
    }
    int val = temp->data;
    top=top->next;
    free(temp);
    temp = NULL;
    printf("%d deleted",val);
}

void display(){
    node* temp;
    temp = top;
    if(top==NULL) printf("Stack Underflow");
    else{
        printf("The stack elements are:\n");
        while(temp){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int ch,no;
    printf("---------------------------\n");
    printf("--- STACK USING LINKED LIST ---\n");
    printf("------- OM DHAVALE --------\n");
    printf("------ 23UF17933AI012 -----\n");
    printf("---------------------------\n");
    printf("1. Push\n2. Pop\n3. Display\n4. EXIT");
    do{
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter element to be pushed: ");
                    scanf("%d",&no);
                    push(no);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: break;
            default: printf("Wrong choice !");
        }
    }while(ch!=4);

    return 0;
}