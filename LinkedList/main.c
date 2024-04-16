#include <stdio.h>

#include "linked_list.h"

/*void test_insert() {
    LinkedList* list = list_create();

    list_insertFirst(list, 10);
    list_insertFirst(list, 20);
    list_insertFirst(list, 30);

    list_print(list);

    list_insertAfter(list, 1, 40);
    list_insertAfter(list, -1, 50);
    list_insertAfter(list, 25, 60);
    list_insertAfter(list, 0, 70);

    list_print(list);

    list_destroy(list);
}

void test_removeFirst() {
    LinkedList* list = list_create();

    bool res = list_removeFirst(list);
    printf("%s\n", (res) ? "true" : "false");

    list_insertFirst(list, 10);
    list_insertFirst(list, 20);
    list_insertFirst(list, 30);
    list_print(list);

    res = list_removeFirst(list);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);

    res = list_removeFirst(list);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);

    res = list_removeFirst(list);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);

    res = list_removeFirst(list);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);


    list_destroy(list);
}

void test_removeAt() {
    LinkedList* list = list_create();

    bool res = list_removeAt(list, 3);
    printf("%s\n", (res) ? "true" : "false");

    list_insertFirst(list, 10);
    list_insertFirst(list, 20);
    list_insertFirst(list, 30);
    list_print(list);

    res = list_removeAt(list, -1);
    printf("%s\n", (res) ? "true" : "false");
    res = list_removeAt(list, 5);
    printf("%s\n", (res) ? "true" : "false");

    res = list_removeAt(list, 1);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);

    res = list_removeAt(list, 1);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);

    res = list_removeAt(list, 0);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);

    res = list_removeAt(list, 0);
    printf("%s\n", (res) ? "true" : "false");
    list_print(list);


    list_destroy(list);
}*/

int main() {
    LinkedList* list1 = list_create();
    LinkedList* list2 = list_create();

    list_insertFirst(list1, 5);
    list_insertFirst(list1, 80);
    list_insertFirst(list1, 10);
    list_insertFirst(list1, 40);
    list_insertFirst(list1, 30);
    list_print(list1);

    list_insertFirst(list2, 4);
    list_insertFirst(list2, 3);
    list_insertFirst(list2, 1);
    list_print(list2);

    list_printElements(list1, list2);

    return 0;
}