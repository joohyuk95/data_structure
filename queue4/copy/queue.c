#include <assert.h>
#include <stdlib.h>
#include "queue.h"

void initQueue(Queue *pq, int size)
{
	pq->pArr = malloc(sizeof(int) * size);
	assert(pq->pArr );
	
	pq->front = 0;
	pq->rear = 0;
	pq->size = size;
}

void cleanupQueue(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, int data)
{
	assert(pq->rear != pq->size);
	
	pq->pArr[pq->rear] = data;
	++pq->rear;
}

int pop(Queue *pq)
{
	assert(pq->rear != 0);
	
	int tmp = pq->front;
	++pq->front;
	return pq->pArr[tmp];
}
