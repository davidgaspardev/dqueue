#include "dqueue.h"

DQueue* create_dqueue() {
    DQueue* dqueue = (DQueue*) malloc(sizeof(DQueue));

    if(dqueue != NULL) {
        dqueue->first = NULL;
        dqueue->size = 0;
    }

    return dqueue;
}

void enqueue(DQueue* dqueue, int info) {
    if(dqueue == NULL) return;

    DNode* node = (DNode*) malloc(sizeof(DNode));
    if(node == NULL) return;
    node->info = info;
    node->next = NULL;

    if(dqueue->first == NULL) {
        dqueue->first = node;
    } else {
        dqueue->last->next = node;
    }

    dqueue->last = node;
    dqueue->size += 1;
}

int dequeue(DQueue* dqueue) {
    if(dqueue == NULL || dqueue->first == NULL) return 0;

    int result = dqueue->first->info;
    DNode* second = dqueue->first->next;
    free(dqueue->first);
    dqueue->first = second;

    dqueue->size -= 1;

    return result;
}

int peek(DQueue* dqueue) {
    if(dqueue == NULL || dqueue->first == NULL) return 0;

    return dqueue->first->info;
}

int size(DQueue* dqueue) {
    return dqueue->size;
}

bool empty(DQueue* dqueue) {
     if(dqueue == NULL) return false;
    return dqueue->size == 0;
}

void destroy(DQueue* dqueue) {
    if(dqueue == NULL || dqueue->first == NULL) return;

    while(dqueue->size > 0) {
        dequeue(dqueue);
    }
}
