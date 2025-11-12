#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// Define a stack structure
typedef struct {
int top;
unsigned capacity;
int* array;
} Stack;
// Function to create a stack of given capacity
Stack* createStack(unsigned capacity) {
Stack* stack = (Stack*)malloc(sizeof(Stack));
stack->capacity = capacity;
stack->top = -1;
stack->array = (int*)malloc(stack->capacity * sizeof(int));
return stack;
}
// Function to check if the stack is full
int isFull(Stack* stack) {
return stack->top == stack->capacity - 1;
}
// Function to check if the stack is empty
int isEmpty(Stack* stack) {
return stack->top == -1;
}
// Function to add an item to the stack
void push(Stack* stack, int item) {
if (isFull(stack)) {
printf("Stack overflow\n");
return;
}
stack->array[++stack->top] = item;
}
// Function to remove an item from the stack
int pop(Stack* stack) {
if (isEmpty(stack)) {
printf("Stack underflow\n");
return -1; // Return a sentinel value for underflow
}
return stack->array[stack->top--];
}
// Function to return the top item from the stack
int peek(Stack* stack) {
if (isEmpty(stack)) {
printf("Stack is empty\n");
return -1; // Return a sentinel value for an empty stack
}
return stack->array[stack->top];
}
// Function to evaluate a postfix expression
int evaluatePostfix(char* expression) {
Stack* stack = createStack(100); // Create a stack with a capacity of 100
int i;
for (i = 0; expression[i]; ++i) {
// If the character is a digit, push it onto the stack
if (isdigit(expression[i])) {
push(stack, expression[i] - '0'); // Convert char to int
}
// If the character is an operator, pop two operands and perform the operation
else if (expression[i] == ' ') {
continue; // Skip spaces
}
else {
int val2 = pop(stack);
int val1 = pop(stack);
switch (expression[i]) {
case '+': push(stack, val1 + val2); break;
case '-': push(stack, val1 - val2); break;
case '*': push(stack, val1 * val2); break;
case '/': push(stack, val1 / val2); break;
}
}
}
return pop(stack); // The result is the only item left in the stack
}
// Driver code to test the postfix evaluation
int main() {
char expression[256]; // Buffer to hold the user input
printf("Name: Parth Siddharth Manjrekar\nRoll No: 23UF18443AI030\n");
// Prompt the user to enter a postfix expression
printf("Enter a postfix expression: ");
if (fgets(expression, sizeof(expression), stdin) != NULL) {
// Remove trailing newline character if present
size_t len = strlen(expression);
if (len > 0 && expression[len - 1] == '\n') {
expression[len - 1] = '\0';
}
// Evaluate and print the result
printf("Postfix Evaluation Result: %d\n",
evaluatePostfix(expression));
} else {
printf("Error reading input.\n");
}
return 0;
}