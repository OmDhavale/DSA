#include <stdio.h>
#include <stdlib.h>
// Define the node structure for a doubly linked list
typedef struct Node {
int data;
struct Node* next;
struct Node* prev;
} Node;
// Define the doubly linked list structure
typedef struct {
Node* head;
} DoublyLinkedList;
// Function to initialize the doubly linked list
void initList(DoublyLinkedList* list) {
list->head = NULL;
}
// Function to create a new node
Node* createNode(int data) {
Node* newNode = (Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->next = NULL;
newNode->prev = NULL;
return newNode;
}
// Function to append a node to the end of the doubly linked list
void append(DoublyLinkedList* list, int data) {
Node* newNode = createNode(data);
if (list->head == NULL) {
list->head = newNode;
} else {
Node* temp = list->head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
newNode->prev = temp;
}
printf("Appended %d to the list.\n", data);
}
// Function to prepend a node to the beginning of the doubly linked list
void prepend(DoublyLinkedList* list, int data) {
Node* newNode = createNode(data);
if (list->head == NULL) {
list->head = newNode;
} else {
newNode->next = list->head;
list->head->prev = newNode;
list->head = newNode;
}
printf("Prepended %d to the list.\n", data);
}
// Function to delete the first occurrence of a node with a specific value
void delete(DoublyLinkedList* list, int data) {
if (list->head == NULL) {
printf("List is empty.\n");
return;
}
Node* temp = list->head;
// If the node to delete is the head
if (temp->data == data) {
list->head = temp->next;
if (list->head != NULL) {
list->head->prev = NULL;
}
free(temp);
printf("Deleted %d from the list.\n", data);
return;
}
// Traverse the list to find the node to delete
while (temp != NULL && temp->data != data) {
temp = temp->next;
}
// Node not found
if (temp == NULL) {
printf("%d not found in the list.\n", data);
return;
}
// Node found
if (temp->next != NULL) {
temp->next->prev = temp->prev;
}
if (temp->prev != NULL) {
temp->prev->next = temp->next;
}
free(temp);
printf("Deleted %d from the list.\n", data);
}
// Function to display the elements of the doubly linked list
void display(DoublyLinkedList* list) {
if (list->head == NULL) {
printf("List is empty.\n");
return;
}
Node* temp = list->head;
printf("List elements: ");
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
}
// Main function to interact with the user and manage the doubly linked list
int main() {
printf("Name: Parth Siddharth Manjrekar\nRoll No: 23UF18443AI030\n");
DoublyLinkedList list;
initList(&list);
int choice, value;
printf("Doubly Linked List Operations\n");
printf("\n1. Append\n");
printf("2. Prepend\n");
printf("3. Delete\n");
printf("4. Display List\n");
printf("5. Exit\n");
while (1) {
// Display menu options
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1: // Append
printf("Enter value to append: ");
scanf("%d", &value);
append(&list, value);
break;
case 2: // Prepend
printf("Enter value to prepend: ");
scanf("%d", &value);
prepend(&list, value);
break;
case 3: // Delete
printf("Enter value to delete: ");
scanf("%d", &value);
delete(&list, value);
break;
case 4: // Display List
display(&list);
break;
case 5: // Exit
printf("Exiting...\n");
// Clean up memory before exiting
while (list.head != NULL) {
delete(&list, list.head->data);
}
return 0;
default:
printf("Invalid choice. Please try again.\n");
}
}
return 0;
}