#ifndef QUEUE_H
#define QUEUE_H
#define ARRAYSIZE 100

typedef struct {
	int array[ARRAYSIZE];
	int rear;
	int front;
} Queue;

void initqueue(Queue *pq);
void push(Queue *pq, int data);
int pop(Queue *pq);

#endif
