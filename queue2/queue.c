#include <stdio.h>
#include "queue.h"

int queue[10];
static int rear;
static int front;

void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop(void)
{
	int tmp = front;
	++front;
	
	return queue[tmp];
}
