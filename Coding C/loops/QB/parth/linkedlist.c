#include <stdio.h>
#include <stdlib.h>
// Node structure for singly linked list
typedef struct Node {
int data; // Data to store
struct Node* next; // Pointer to the next node
} Node;
// Linked list structure
typedef struct {
Node* head; // Head of the list
} SinglyLinkedList;
// Function to create a new node
Node* createNode(int data) {
Node* newNode = (Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}
// Function to initialize a linked list
void initializeList(SinglyLinkedList* list) {
list->head = NULL;
}
// Function to add a node at the end of the list
void append(SinglyLinkedList* list, int data) {
Node* newNode = createNode(data);
if (list->head == NULL) {
list->head = newNode;
return;
}
Node* temp = list->head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
// Function to add a node at the beginning of the list
void prepend(SinglyLinkedList* list, int data) {
Node* newNode = createNode(data);
newNode->next = list->head;
list->head = newNode;
}
// Function to delete the first occurrence of a value
void delete(SinglyLinkedList* list, int value) {
if (list->head == NULL) {
return;
}
if (list->head->data == value) {
Node* temp = list->head;
list->head = list->head->next;
free(temp);
return;
}
Node* temp = list->head;
while (temp->next != NULL && temp->next->data != value) {
temp = temp->next;
}
if (temp->next != NULL) {
Node* nodeToDelete = temp->next;
temp->next = temp->next->next;
free(nodeToDelete);
}
}
// Function to print all nodes in the list
void printList(SinglyLinkedList* list) {
Node* temp = list->head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("null\n");
}
// Main function to interact with the user
int main() {
printf("Name: Parth Siddharth Manjrekar\nRoll No: 23UF18443AI030\n");
SinglyLinkedList list;
initializeList(&list);
int choice, data;
printf("Linked List Operations Menu:\n");
printf("1. Append\n");
printf("2. Prepend\n");
printf("3. Delete\n");
printf("4. Print List\n");
printf("5. Exit\n");
do {
// Display menu options
printf("Enter your choice (1-5): ");
scanf("%d", &choice);
switch (choice) {
case 1: // Append
printf("Enter a number to append: ");
scanf("%d", &data);
append(&list, data);
printf("Number appended.\n");
break;
case 2: // Prepend
printf("Enter a number to prepend: ");
scanf("%d", &data);
prepend(&list, data);
printf("Number prepended.\n");
break;
case 3: // Delete
printf("Enter a number to delete: ");
scanf("%d", &data);
delete(&list, data);
printf("Number deleted.\n");
break;
case 4: // Print List
printf("Linked List:\n");
printList(&list);
break;
case 5: // Exit
printf("Exiting...\n");
break;
default:
printf("Invalid choice. Please enter a number between 1 and 5.\n");
}
} while (choice != 5);
return 0;
}