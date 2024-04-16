#include "linked_list.h"

#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    Element element;
    struct Node* next;
} Node;

struct LinkedList {
    Node* head;
    int size;
};

LinkedList* list_create() {
    LinkedList* list = malloc(sizeof(LinkedList));

    list->head = NULL;
    list->size = 0;

    return list;
}

void list_destroy(LinkedList* list) {
    Node* cur = list->head;

    while (cur != NULL) {
        Node* trash = cur;

        cur = cur->next;
        free(trash);
    }
    free(list);
}

void list_insertFirst(LinkedList* list, Element element) {
    Node* newNode = malloc(sizeof(Node));

    newNode->element = element;
    newNode->next = list->head;
    list->head = newNode;
    list->size++;
}

void list_insertAfter(LinkedList* list, int pos, Element element) {
    if (list->head == NULL || pos < 0) {
        list_insertFirst(list, element);
    } else {
        Node* cur = list->head;
        int i = 0;

        while (i < pos && cur->next != NULL) {
            cur = cur->next;
            i++;
        }

        Node* newNode = malloc(sizeof(Node));

        newNode->element = element;
        newNode->next = cur->next;
        cur->next = newNode;
        list->size++;
    }    
}

void list_print(LinkedList* list) {
    Node* cur = list->head;

    while (cur != NULL) {
        element_print(cur->element);
        cur = cur->next;
        if (cur != NULL) {
            printf(" -> ");
        }        
    }
    printf("\n");
}

bool list_removeFirst(LinkedList* list) {
    if (list->head == NULL) {
        return false;
    }

    Node* trash = list->head;

    list->head = list->head->next;
    free(trash);
    list->size--;

    return true;
}

bool list_removeAt(LinkedList* list, int pos) {
    // caso 0: posicao invalida
    if (pos < 0 || pos >= list->size) {
        return false;
    }

    // caso 1: lista vazia
    if (list == NULL) {
        return false;
    }

    // caso 2: remocao na cabeca
    if (pos == 0) {
        return list_removeFirst(list);
    } else { // caso 3: remocao na cauda
        Node* prev = list->head;
        int i = 0;

        while (i < pos - 1) {
            prev = prev->next;
            i++;
        }

        Node* trash = prev->next;

        prev->next = prev->next->next;
        free(trash);  
        list->size--;

    }

    return true;    
}

void list_printElements(LinkedList* l1, LinkedList* l2){
    Node* cur1 = l1->head;
    Node* cur2 = l2->head;
    int c = 0;

    while(cur2 != NULL){
        int pos = cur2->element;
        int i=0;

        while(i<pos && cur1 !=NULL){
            cur1 = cur1->next;
            i++;
        }
        if(cur1 != NULL){
            element_print(cur1->element);
        }

        cur2 = cur2->next;
    }
}


/*Adicione no TAD LinkedList uma função que recebe duas listas encadeadas (LinkedList)
como argumento e imprima os elementos da primeira lista cujas posições estão armazenadas na segunda lista. 
A função deve ter a seguinte assinatura:
void list_printElements(LinkedList* l1, LinkedList* l2). Por exemplo, se a
primeira lista contém os elementos 30, 40, 10, 80, 5 e a segunda lista contém os
elementos 1, 3, 4, a função deve imprimir os elementos 40, 80, 5*/
