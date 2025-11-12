#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Define the maximum size of the queue
typedef struct {
int items[MAX];
int front, rear;
} CircularQueue;
// Initialize the circular queue
void initQueue(CircularQueue* q) {
q->front = -1;
q->rear = -1;
}
// Check if the queue is empty
int isEmpty(CircularQueue* q) {
return q->front == -1;
}
// Check if the queue is full
int isFull(CircularQueue* q) {
return (q->rear + 1) % MAX == q->front;
}
// Add an element to the queue
void enqueue(CircularQueue* q, int item) {
if (isFull(q)) {
printf("Queue is full\n");
return;
}
if (isEmpty(q)) {
q->front = 0;
}
q->rear = (q->rear + 1) % MAX;
q->items[q->rear] = item;
printf("Enqueued %d\n", item);
}
// Remove an element from the queue
int dequeue(CircularQueue* q) {
if (isEmpty(q)) {
printf("Queue is empty\n");
return -1; // Return a sentinel value for empty queue
}
int item = q->items[q->front];
if (q->front == q->rear) { // Queue has only one element
q->front = q->rear = -1;
} else {
q->front = (q->front + 1) % MAX;
}
return item;
}
// Display the elements of the queue
void display(CircularQueue* q) {
if (isEmpty(q)) {
printf("Queue is empty\n");
return;
}
printf("Queue elements: ");
int i = q->front;
while (1) {
printf("%d ", q->items[i]);
if (i == q->rear) break;
i = (i + 1) % MAX;
}
printf("\n");
}
// Main function to test the circular queue with user input
int main() {
CircularQueue queue;
initQueue(&queue);
int choice, value;
    printf("Name: Parth Siddharth Manjrekar\nRoll No: 23UF18443AI030\n");
    printf("\nCircular Queue Operations Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display Queue\n");
    printf("4. Exit\n");
    
while (1) {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: // Enqueue
    if (isFull(&queue)) {
    printf("Queue is full, cannot enqueue.\n");
    } 
    else {
    printf("Enter value to enqueue: ");
    scanf("%d", &value);
    enqueue(&queue, value);
    }
    break;
    case 2: // Dequeue
    value = dequeue(&queue);
    if (value != -1) {
    printf("Dequeued: %d\n", value);
    }
    break;
    case 3: // Display Queue
    display(&queue);
    break;
    case 4: // Exit
    printf("Exiting...\n");
    exit(0);
    default:
    printf("Invalid choice. Please try again.\n");
    }
}
return 0;
}