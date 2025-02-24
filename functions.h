#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;


// LinkedList functionalities
Node* create_node(int value);
void push_back(Node** head, int value);
void pop_back(Node** head);
void push_front(Node** head, int value);
void pop_front(Node** head);
void insert_node_pos(Node** head, int value, int position);
void delete_node_pos(Node** head, int position);
void delete_node(Node** head, Node* node);
void delete_node_value(Node** head, int value);
void reverse_list(Node** head);
int get_size(Node* head);
int is_empty(Node* head);
Node* find_node(Node* head, int value);
void print(Node* head);
void freeList(Node *head);

// LinkedList Sorting Algorithms
void InsertionSort(Node **head);
void SelectionSort(Node **head);
void MergeSort(Node **head);

#endif