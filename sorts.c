#include "functions.h"

// Swap function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// InsertionSort for the LinkedList
void InsertionSort(Node **head) {
    if (*head == NULL || (*head)->next == NULL) return;
    
    Node *sorted = NULL;
    Node *current = *head;
    while (current != NULL) {
        Node *next = current->next;
        if (sorted == NULL || sorted->value >= current->value) {
            current->next = sorted;
            sorted = current;
        } else {
            Node *temp = sorted;
            while (temp->next != NULL && temp->next->value < current->value) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    *head = sorted;
}

// SelectionSort for the LinkedList
void SelectionSort(Node **head) {
    if (*head == NULL || (*head)->next == NULL) return;
    
    Node *temp = *head;
    while (temp != NULL) {
        Node *min = temp;
        Node *i = temp->next;
        
        while (i != NULL) {
            if (i->value < min->value) {
                min = i;
            }
            i = i->next;
        }
        
        swap(&temp->value, &min->value);
        temp = temp->next;
    }
}

// MergeSort for the LinkedList
Node *merge(Node *left, Node *right) {
    if (left == NULL) return right;
    if (right == NULL) return left;
    
    Node *result = NULL;
    if (left->value <= right->value) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}

void split(Node *source, Node **front, Node **back) {
    Node *fast = source->next;
    Node *slow = source;
    
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *front = source;
    *back = slow->next;
    slow->next = NULL;
}

void MergeSort(Node **head) {
    if (*head == NULL || (*head)->next == NULL) return;
    
    Node *left;
    Node *right;
    split(*head, &left, &right);
    
    MergeSort(&left);
    MergeSort(&right);
    
    *head = merge(left, right);
}