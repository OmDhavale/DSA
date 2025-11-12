#include <stdio.h>
#include <ctype.h>  
#include <stdlib.h> 


#define MAX 100


int stack[MAX];
int top = -1;


void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
    }
}


int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;  // Consider returning an error code or value.
    } else {
        return stack[top--];
    }
}


int evaluatePostfix(char* expression) {
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else {
            int op2 = pop();
            int op1 = pop();
            int result;


            switch (expression[i]) {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
                default:
                    printf("Invalid operator encountered: %c\n", expression[i]);
                    return -1;
            }
            push(result);
        }
    }
    
    return pop();
}


int main() {
    char expression[100];
    printf("Name: Om Maruti Dhavale\nRoll No.12 Div. SE-13\n Enter the string in postfix");
    scanf("%s",expression);
    int result = evaluatePostfix(expression);
    printf("The result of the postfix expression '%s' is: %d\n", expression, result);
    return 0;
}


