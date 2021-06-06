#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue *pq, int size, int eleSize)
{
	pq->pArr = malloc(eleSize * size);
	assert(pq->pArr);
	
	pq->eleSize = eleSize;
	pq->size = size;
	pq->rear = 0;
	pq->front = 0;
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
	
	int tmp = pq->front;
	++pq->front;
	memcpy(pData, (unsigned char *)pq->pArr + pq->eleSize * tmp, pq->eleSize);
	
}
