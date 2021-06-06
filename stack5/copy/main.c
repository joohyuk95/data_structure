#include <stdio.h>
#include "stack.h"

int main(void)
{
	Stack s1, s2;
	
	initStack(&s1, 10, sizeof(int));
	initStack(&s2, 100, sizeof(double));
	
	int i;
	i = 100; push(&s1, &i);
	i = 200; push(&s1, &i);
	i = 300; push(&s1, &i);
	
	double d;
	d = 10.1; push(&s2, &d);
	d = 20.1; push(&s2, &d);
	d = 30.1; push(&s2, &d);
	
	int j;
	pop(&s1, &j); printf("s1 1st pop() : %d\n", j);
	pop(&s1, &j); printf("s1 2nd pop() : %d\n", j);
	pop(&s1, &j); printf("s1 3rd pop() : %d\n", j);
	
	double e;
	pop(&s2, &e); printf("s2 1st pop() : %.1f\n", e);
	pop(&s2, &e); printf("s2 2nd pop() : %.1f\n", e);
	pop(&s2, &e); printf("s2 3rd pop() : %.1f\n", e);
	
	cleanupStack(&s1);
	cleanupStack(&s2);
	
	return 0;
}
