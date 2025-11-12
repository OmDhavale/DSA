#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
};

struct node *start=NULL;

//insert at beginning
struct node *Insert_beg(struct node *start){
 int num;
 struct node *new_node;
 printf("Enter -1 to stop insertion \n");
 printf("Enter Number: ");
 scanf("%d",&num);
 while(num!=-1){
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
 printf("Enter Number: ");
 scanf("%d",&num);
 }
 return start;
};
//display
struct node *Display(struct node *start){
struct node *ptr;
ptr=start;
if(start==NULL){
    printf("The Linked List is Empty!\n");
    return start;
}
printf("\n****** THE DATA IN LINKED LIST ******\n");
while(ptr->next!=NULL){
    printf("Address of Previous Node: %u\n",ptr->prev);
    printf("Address of Next Node: %u\n",ptr->next);
    printf("Data: %d\n\n",ptr->data);
    ptr=ptr->next;
    if(ptr->next==NULL){
        printf("Address of Previous Node: %u\n",ptr->prev);
        printf("Address of Next Node: %u\n",ptr->next);
        printf("Data: %d\n\n",ptr->data);
    }
}
return start;
};
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
// printf("4.Delete at Begining\n");
// printf("5.Delete Data\n");
printf("6.Display\n");
printf("7.Exit\n");
printf("---------------------------\n\n");


do{
    printf("Enter the operation to perform: ");
    scanf("%d",&no);
    switch(no){
        case 1:start=Insert_beg(start);
                        break;
        case 2:start=Insert_end(start);
                        break;
        case 3:start=Insert_after(start);
                        break;
        // case 4:start=Delete_beg(start);
        //                 break;
        // case 5:start=Delete_data(start);
        //                 break;
        case 6:start=Display(start);
                        break;
        default: printf("Invalid Input!\n");
    }

}while(no!=7);

return 0;
}
