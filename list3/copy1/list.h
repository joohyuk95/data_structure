#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef struct {
	Node *ptr;
} List;

initList(Node *ptr)

#endif
