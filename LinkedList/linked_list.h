#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

#include "element.h"

typedef struct LinkedList LinkedList;

LinkedList* list_create();
void list_destroy(LinkedList* list);
void list_insertFirst(LinkedList* list, Element element);
void list_insertAfter(LinkedList* list, int pos, Element element);
bool list_removeFirst(LinkedList* list);
bool list_removeAt(LinkedList* list, int pos);
void list_print(LinkedList* list);
void list_printElements(LinkedList* l1, LinkedList* l2);

#endif