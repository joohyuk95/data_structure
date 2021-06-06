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
	ptr->next->next->next = NULL;		// 1, 2, 4
	
	// insert 3
	Node *tmp = malloc(sizeof(Node));
	tmp->data = 3;
	tmp->next = ptr->next->next;
	ptr->next->next = tmp;		// 1, 2, 3, 4
	
	// delete 2
	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);		// 1, 3, 4
	
	// print
	
	Node *p = ptr;
	
	while (p ) {
		tmp = ptr;
		printf("%d, ", p->data);
		p = p->next;
	}
	printf("\n");
	
	
	
	
	return 0;
}
