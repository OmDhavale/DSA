#include <stdio.h>
#include <stdlib.h>
// Node structure for Queue
struct QueueNode {
int data;
struct QueueNode* next;
};
// Queue structure
struct Queue {
struct QueueNode* head;
struct QueueNode* tail;
};
// Function to create a new queue
struct Queue* createQueue() {
struct Queue* queue = (struct Queue*)malloc(sizeof(struct
Queue));
queue->head = queue->tail = NULL;
return queue;
}
// Enqueue operation
void enqueue(struct Queue* queue, int data) {
struct QueueNode* newNode = (struct
QueueNode*)malloc(sizeof(struct QueueNode));
newNode->data = data;
newNode->next = NULL;
if (queue->tail == NULL) {
queue->head = queue->tail = newNode;
printf("Enqueued %d into queue.\n", data);
return;
}
queue->tail->next = newNode;
queue->tail = newNode;
printf("Enqueued %d into queue.\n", data);
}
// Dequeue operation
int dequeue(struct Queue* queue) {
if (queue->head == NULL) {
printf("Queue is empty. Cannot dequeue.\n");
return -1; // Indicate queue is empty
}
struct QueueNode* temp = queue->head;
int dequeuedData = temp->data;
queue->head = queue->head->next;
if (queue->head == NULL) {
queue->tail = NULL;
}
free(temp);
printf("Dequeued %d from queue.\n", dequeuedData);
return dequeuedData;
}
// Display queue contents
void displayQueue(struct Queue* queue) {
struct QueueNode* current = queue->head;
if (current == NULL) {
printf("Queue is empty.\n");
return;
}
printf("Queue contents: ");
while (current) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}
// Example usage of queue with user input
int main() {
printf("Name: Parth Siddharth Manjrekar\nRoll No: 23UF18443AI030\n");
struct Queue* queue = createQueue();
int choice, value;
printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
do {

printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter value to enqueue: ");
scanf("%d", &value);
enqueue(queue, value);
break;
case 2:
dequeue(queue);
break;
case 3:
displayQueue(queue);
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