#include <stdio.h>
#include <stdlib.h>
// Node structure for Stack
struct StackNode {
int data;
struct StackNode* next;
};
// Stack structure
struct Stack {
struct StackNode* head;
};
// Function to create a new stack
struct Stack* createStack() {
struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
stack->head = NULL;
return stack;
}
// Push operation
void push(struct Stack* stack, int data) {
struct StackNode* newNode = (struct StackNode*)malloc(sizeof(struct
StackNode));
newNode->data = data;
newNode->next = stack->head;
stack->head = newNode;
printf("Pushed %d onto stack.\n", data);
}
// Pop operation
int pop(struct Stack* stack) {
if (stack->head == NULL) {
printf("Stack is empty. Cannot pop.\n");
return -1; // Indicate stack is empty
}
struct StackNode* temp = stack->head;
int poppedData = temp->data;
stack->head = stack->head->next;
free(temp);
printf("Popped %d from stack.\n", poppedData);
return poppedData;
}
// Display stack contents
void displayStack(struct Stack* stack) {
struct StackNode* current = stack->head;
if (current == NULL) {
printf("Stack is empty.\n");
return;
}
printf("Stack contents: ");
while (current) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}
// Example usage of stack with user input
int main() {
struct Stack* stack = createStack();
int choice, value;
printf("Name: Parth Siddharth Manjrekar\nRoll No: 23UF18443AI030\n");
printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
do {

printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter value to push: ");
scanf("%d", &value);
push(stack, value);
break;
case 2:
pop(stack);
break;
case 3:
displayStack(stack);
break;
case 4:
printf("Exiting...\n");
break;
default:
printf("Invalid choice. Please try again.\n");
}
} while (choice != 4);
return 0;
}