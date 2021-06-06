#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

void initList(List *pList)
{
	pList->ptr = malloc(sizeof(Node));
	assert(pList->ptr );
	
	pList->ptr->next = NULL;
}

void cleanupList(List *pList)
{
	Node *p1 = pList->ptr;
	
	while (p1 ) {
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
	tmp->next = pList->ptr->next;
	pList->ptr->next = tmp;
}

void insertNode(List *pList, int prevData, int data)
{
	Node *p = pList->ptr->next;
	
	while (p ) {
		if (p->data == prevData)
			break;
		p = p->next;
	}
	
	if (p ) {
		Node *tmp = malloc(sizeof(Node));
		assert(tmp );
		
		tmp->data = data;
		tmp->next = p->next;
		p->next = tmp;
	}

}

void deleteNode(List *pList, int data)
{
	Node *prevP = pList->ptr;
	Node *P = pList->ptr->next;
	
	while (P ) {
		if (P->data == data)
			break;
			
		P = P->next;
		prevP = prevP->next;
	}
	
	if (P ) {
		prevP->next = P->next;
		free(P);
	}
}

void printList(const List *pList)
{
	Node *p1 = pList->ptr->next;
	
	printf("[");
	while (p1 ) {
		printf("%d", p1->data);
		printf( (p1->next ) ? ", " : "");
		p1 = p1->next;
	}
	printf("]\n");
}
