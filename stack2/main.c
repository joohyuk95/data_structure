#include <stdio.h>
#include "stack.h"

int stack[100];
int tos; // top of stack

void push(int data);
int pop(void);

int main(void)
{
	push(100);
	push(200);
	push(300);
	
	printf("1st pop() : %d\n", pop());
	printf("2nd pop() : %d\n", pop());
	printf("3rd pop() : %d\n", pop());

	return 0;
}
