#include <stdio.h>
#include "queue.h"

void initqueue(Queue *pq)
{
	pq->rear = 0;
	pq->front = 0;
}

void push(Queue *pq, int data)
{
	pq->array[pq->rear] = data;
	++pq->rear;
}

int pop(Queue *pq)
{
	int tmp = pq->front;
	++pq->front;
	
	return pq->array[tmp];
}
