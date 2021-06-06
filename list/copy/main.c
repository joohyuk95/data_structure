#include <stdio.h>
#include <stdlib.h>
#include "link.h"

int main(void)
{
	Node *ptr = malloc(sizeof(Node));
	ptr->data = 1;
	ptr->next = malloc(sizeof(Node));
	ptr->next->data = 2;
	ptr->next->next = malloc(sizeof(Node));
	ptr->next->next->data = 4;
	ptr->next->next->next = NULL;
	
	Node *p = ptr;
	while (p ) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	
	// insert
	Node *tmp = malloc(sizeof(Node));
	tmp->data = 3;
	tmp->next = ptr->next->next;
	ptr->next->next = tmp;
	
	p = ptr;
	while (p ) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	// delete
	tmp = ptr->next->next;
	ptr->next->next = tmp->next;
	free(tmp);
	
	p = ptr;
	while (p ) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	
	p = ptr;
	while (p ) {
		tmp = p;
		p = p->next;
		free(tmp);
	}
	


	return 0;
}
