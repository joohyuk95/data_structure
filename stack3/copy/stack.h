#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

typedef struct {
	int pArr[ARRAYSIZE];
	int tos;
} Stack;

void initStack(Stack *ps);
void push(Stack *ps, int data);
int pop(Stack *ps);

#endif
