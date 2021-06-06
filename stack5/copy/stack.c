#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "stack.h"

void initStack(Stack *ps, int size, int eleSize)
{
	ps->pArr = malloc(eleSize * size);
	assert(ps->pArr );
	
	ps->size = size;
	ps->eleSize = eleSize;
	ps->tos = 0;
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}

void push(Stack *ps, const void *pData)
{
	assert(ps->tos != ps->size);
	
	memcpy((unsigned char *)ps->pArr + ps->eleSize * ps->tos , pData, ps->eleSize);
	++ps->tos;
}

void pop(Stack *ps, void *pData)
{
	assert(ps->tos );
	
	--ps->tos;
	memcpy(pData, (unsigned char *)ps->pArr + ps->eleSize * ps->tos, ps->eleSize);
}
