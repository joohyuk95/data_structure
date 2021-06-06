#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void initList(List *pList)
{
	pList->ptr = malloc(sizeof(Node));
	assert(pList->ptr );
	
	pList->next = NULL;
}

void cleanupList(List *pList)
{
	Node *p1 = pList->ptr
	
	while (p2 ) {
		Node *p2 = p1;
		p1 = p1->next;
		free(p2);	
	}
}

void insertFirstNode(List *pList, int data)
{
	Node *tmp = malloc(sizeof(Node));
	assert(tmp );
	
	tmp->data = data;
	tmp->next = pList->ptr->next
	pList->ptr->next = tmp;
}

void insertNode(List *pList, int prevData, int data)
{

}

void deleteNode(List *pList, int data)
{

}

void printList(List *pList)
{

}
