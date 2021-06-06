#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue q1, q2;
	initQueue(&q1, 10, sizeof(int));
	initQueue(&q2, 100, sizeof(double));
	
	int i;
	i = 100; push(&q1, &i); // give address (not value)
	i = 200; push(&q1, &i);
	i = 300; push(&q1, &i);
	
	double d;
	d = 1.1; push(&q2, &d);
	d = 2.2; push(&q2, &d);
	d = 3.3; push(&q2, &d);
	
	int j;
	pop(&q1, &j); printf("q1 1st pop() : %d\n", j);
	pop(&q1, &j); printf("q1 2nd pop() : %d\n", j);
	pop(&q1, &j); printf("q1 3rd pop() : %d\n\n", j);

	double f;
	pop(&q2, &f); printf("q2 1st pop() : %.1f\n", f);
	pop(&q2, &f); printf("q2 2nd pop() : %.1f\n", f);
	pop(&q2, &f); printf("q2 3rd pop() : %.1f\n", f);
	
	cleanupQueue(&q1);
	cleanupQueue(&q2);
	return 0;
}
