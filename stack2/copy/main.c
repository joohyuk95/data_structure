#include <stdio.h>
#include "stack.h"

int stack[100];
int tos;

int main(void)
{
	push(100);
	push(200);
	push(300);
	
	printf("1st pop from stack : %d\n", pop());
	printf("1st pop from stack : %d\n", pop());
	printf("1st pop from stack : %d\n", pop());	

	return 0;
}
