#include <stdio.h> 
#include <stdlib.h> 

typedef struct node { 
    int data; 
    struct node* next; 
}node; 

typedef struct queue { 
    node *front, *rear; 
}queue; 

node* newNode(int data) {
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    return temp; 
} 
// Function to create a queue 
queue* createQueue() { 
    queue* q = (queue*)malloc(sizeof(queue));
    q->front = q->rear = NULL; 
    return q; 
}
// Function to add an element to the queue 
void enqueue(queue* q, int data) { 
    node* temp = newNode(data); 
    if (q->rear == NULL) { 
        q->front = q->rear = temp; 
    } 
    q->rear->next = temp; 
    q->rear = temp;
    return;
} 
// Function to remove an element from the queue 
void dequeue(queue* q) { 
    if (q->front == NULL) { 
        printf("Queue is empty\n");
    } 
    node* temp = q->front; 
    q->front = q->front->next; 
    if (q->front == NULL) { 
        q->rear = NULL; 
    } 
    int data = temp->data; 
    free(temp); 
    printf("Dequeued: %d\n",data);
    return;
} 
// Function to display the queue 
void displayQueue(queue* q) { 
    node* temp = q->front; 
    while (temp != NULL) { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 

int main() { 
    queue* q = createQueue(); 
    do{
        
    }while()
    enqueue(q, 10); 
    enqueue(q, 20); 
    enqueue(q, 30); 
    printf("Queue: "); 
    displayQueue(q); 
    dequeue(q);
    printf("Queue after dequeue: "); 
    displayQueue(q); 
    return 0; 
}
