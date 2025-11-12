#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
};

struct node *start=NULL;

void insert_beg(int num){ 
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    if(start==NULL){
        new_node->data=num;
        new_node->next=NULL;
        new_node->prev=NULL;
    }
    else{
        new_node->data=num;
        new_node->next=start;
        new_node->prev=NULL;
        start->prev=new_node;
    }
    start=new_node;
}

void display(){
struct node *ptr;
ptr=start;
if(start==NULL){
    printf("The Linked List is Empty!\n");
    
}
while(ptr->next!=NULL){
    printf("Data: %d\n",ptr->data);
    ptr=ptr->next;
    if(ptr->next==NULL){
        printf("Data: %d\n",ptr->data);
    }
}

}

void Insert_end(int num){
struct node *ptr,*new_node;
    ptr=start;
    new_node=(struct node *)malloc(sizeof(struct node));

    if(start==NULL){
        new_node->data=num;
        new_node->next=NULL;
        new_node->prev=NULL;
        start=new_node;
    }
    else{
        new_node->data=num;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_node;
        new_node->next=NULL;
        new_node->prev=ptr;
    }
    
}

void Insert_after(){
    struct node *ptr,*preptr,*new_node;
    int num,no;
    ptr=start;
    preptr=ptr;
    if(start==NULL){
        printf("The Linked List is Empty!\n");
    }
    printf("Enter the Data after which the element has to insert: ");
    scanf("%d",&no);
    printf("Enter the Element to Insert after %d: ",no);
    scanf("%d",&num);
    
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    while(preptr->data!=no){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
    new_node->prev=preptr;
    ptr->prev=new_node;

}

void Delete_beg(){
    if(start==NULL){
        printf("There is no Element to Delete!\n");
    }
    struct node *ptr;
    ptr=start;
    start=start->next;
    if(start!=NULL){     //THE FOLLWING IF STATEMENT IS DUE TO IF THE START BECOMES THE NULL THAN BY TAKING THE PREVIOUS OF NULL THE CODE WILL CRASH!
        start->prev=NULL;
    }
    printf("The Element %d at begining with the address %u get deleted...\n",ptr->data,ptr);
    ptr=NULL;
    free(ptr);
}

void Delete_end(){
    if(start==NULL){
        printf("There is no Element to Delete!\n");
    }
    struct node *ptr;
    struct node *preptr;
    ptr=start;
    preptr = start;
    while(ptr->next !=NULL){
        preptr = ptr;
        ptr=ptr->next;
    }
    preptr->next = NULL;
    ptr->prev = NULL;
    //struct node *temp = ptr;
    printf("The Element %d at ending with the address %u get deleted...\n",ptr->data,ptr);
    ptr=NULL;
    free(ptr);
}

int main(){
int no;
    printf("---------------------------\n");
    printf("--- DOUBLY LINKED LIST ---\n");
    printf("------- OM DHAVALE --------\n");
    printf("------ 23UF17933AI012 -----\n");
    printf("---------------------------\n");
    printf("1.Insert At Beginning\n");
    printf("2.Insert At Ending\n");
    printf("3.Insert After the Element\n");
    printf("4.Display\n5.Delete at begining\n6.Delete at Ending");
    printf("7.Exit\n");
    printf("---------------------------\n\n");

do{
    
    printf("Enter the operation to perform: ");
    scanf("%d",&no);
    int num,num2;
    switch(no){
        case 1: 
                printf("Enter Number: ");
                scanf("%d",&num);
                insert_beg(num);
               break;
        case 2:printf("Enter Number: ");
                scanf("%d",&num2);
                Insert_end(num2);
               break;
        case 3:Insert_after();
               break;
        
        case 4: display();
                break;
        case 5: Delete_beg();
                break;
        case 6: Delete_end();
                break;
        case 7: break;

        default: printf("Invalid Input!\n");
    }

}while(no!=7);

return 0;
}
