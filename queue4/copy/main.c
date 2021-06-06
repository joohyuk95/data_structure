#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue q1, q2;
	initQueue(&q1, 10);
	initQueue(&q2, 100);
	
	push(&q1, 100);
	push(&q1, 200);
	push(&q1, 300);
	
	push(&q2, 700);
	push(&q2, 800);
	push(&q2, 900);
	
	printf("q1 first pop() : %d\n", pop(&q1));
	printf("q1 second pop() : %d\n", pop(&q1));
	printf("q1 third pop() : %d\n", pop(&q1));
	
	printf("q2 first pop() : %d\n", pop(&q2));
	printf("q2 second pop() : %d\n", pop(&q2));
	printf("q2 third pop() : %d\n", pop(&q2));
	
	cleanupQueue(&q1);
	cleanupQueue(&q2);

	return 0;
}
