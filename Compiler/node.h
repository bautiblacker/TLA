#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum types {TYPE_EMPTY, TYPE_LITERAL, TYPE_STRING, TYPE_INT, TYPE_LIST, TYPE_STACK, TYPE_QUEUE, TYPE_DOUBLE, TYPE_BOOL, TYPE_MAP} type;

typedef struct Node {
	type type;
	char * value;

	struct Node * next;
    struct Node * prev;
	struct Node * leftChild;
    struct Node * parent;
} Node;

Node * newNode(type type, char * value);

void append(Node * parent, Node * node);

void printInorder(Node * node);

#endif