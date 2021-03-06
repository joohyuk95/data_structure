#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef struct {
	Node *ptr;
} List;

static Node *createNode(int data, const Node *next); // cannot use in main function

void initList(List *pList);
void cleanupList(List *pList);

void insertFirstNode(List *pList, int data);
void insertNode(List *pList, int prevData, int data);
void deleteNode(List *pList, int data);

void printList(const List *pList);

#endif
