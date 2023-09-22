#ifndef DQUEUE_H_
#define DQUEUE_H_

#include <stdlib.h>
#include <stdbool.h>

typedef struct dnode {
    int info;
    struct dnode* next;
} DNode;

typedef struct dqueue {
    DNode* first;
    DNode* last;
    int size;
} DQueue;

DQueue* create();
void enqueue(DQueue* dqueue, int info);
int dequeue(DQueue* dqueue);
int peek(DQueue* dqueue);
int size(DQueue* dqueue);
bool empty(DQueue* dqueue);
void destroy(DQueue* dqueue);

#endif