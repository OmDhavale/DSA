#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
};

struct node *start=NULL;

/*FUNCTION TO INSERT AT BEGINING*/
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

/*FUNCTION TO DISPLAY THE DATA, PREVIOUS ADDRESS AND NEXT ADDRESS*/
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

/*DELETE THE ELMENT AT BEGINING*/
struct node *Delete_beg(struct node *start){
    if(start==NULL){
        printf("There is no Element to Delete!\n");
        return start;
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
    return start;
};

/*FUNCTION TO INSERT AT END*/
struct node *Insert_end(struct node *start){
struct node *ptr,*new_node;
int num;

printf("Enter -1 to stop insertion: \n");
printf("Enter Number: ");
scanf("%d",&num);

while(num!=-1){
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
    printf("Enter Number: ");
    scanf("%d",&num);
}

return start;
};

/*FUNCTION TO INSERT AFTER THE GIVEN ELEMENT*/
struct node *Insert_after(struct node *start){
  struct node *ptr,*preptr,*new_node;
  int num,no;
  ptr=start;
  preptr=ptr;
  if(start==NULL){
    printf("The Linked List is Empty!\n");
    return start;
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

  return start;
};


/*DELETE AFTER THE ELEMENT*/
struct node *Delete_data(struct node *start){
 struct node *ptr,*preptr;
 int num;
 ptr=start;
 preptr=ptr;
 if(start==NULL){
    printf("The Linked List is Empty!\n");
 }
 printf("Enter the Data to Delete: ");
 scanf("%d",&num);
 while(ptr->data!=num){
    preptr=ptr;
    ptr=ptr->next;
 }
 preptr->next=ptr->next;
(ptr->next)->prev=preptr;
 printf("The Element %d with the address %u get deleted...\n",num,ptr);
 ptr=NULL;
 free(ptr);

return start;
};

int main(){
int no;
printf("---------------------------\n");
printf("--- DOUBLY LINKED LIST ---\n");
printf("------- OM GAIKWAD --------\n");
printf("------ 23UF17855AI015 -----\n");
printf("---------------------------\n");
printf("1.Insert At Beginning\n");
printf("2.Insert At Ending\n");
printf("3.Insert After the Element\n");
printf("4.Delete at Begining\n");
printf("5.Delete Data\n");
printf("6.Display\n");
printf("7.Exit\n");
printf("---------------------------\n\n");

printf("Enter the operation to perform: ");
scanf("%d",&no);
while(no!=7){
switch(no){
case 1:start=Insert_beg(start);
                break;
case 2:start=Insert_end(start);
                break;
case 3:start=Insert_after(start);
                break;
case 4:start=Delete_beg(start);
                break;
case 5:start=Delete_data(start);
                break;
case 6:start=Display(start);
                break;
default: printf("Invalid Input!\n");
}
printf("Enter the operation to perform: ");
scanf("%d",&no);
}

return 0;
}