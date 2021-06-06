#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "queue.h"

void initQueue(Queue *pq, int size, int eleSize)
{
	pq->pArr = malloc(size * eleSize);
	assert(pq->pArr );
	
	pq->front = 0;
	pq->rear = 0;
	pq->eleSize = eleSize;
	pq->size = size;
}

void cleanupQueue(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, const void *pData)
{
	assert(pq->rear != pq->size);
	
	memcpy((unsigned char *)pq->pArr + pq->eleSize * pq->rear, pData, pq->eleSize);
	++pq->rear;
}

void pop(Queue *pq, void *pData)
{
	assert(pq->rear != 0);

	memcpy(pData, (unsigned char *)pq->pArr + pq->front * pq->eleSize, pq->eleSize);
	++pq->front;
}
