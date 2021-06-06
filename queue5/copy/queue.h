#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
	void *pArr;
	int front;
	int rear;
	int size;
	int eleSize;
	
} Queue;

void initQueue(Queue *pq, int size, int eleSize);
void cleanupQueue(Queue *pq);

void push(Queue *pq, const void *pData);
void pop(Queue *pq, void *pData);

#endif
