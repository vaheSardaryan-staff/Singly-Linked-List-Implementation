#include "functions.h"

void printAlgorithm(void (*sort)(Node**), const char* name) {
    printf("%s:\n", name);

    Node* head = NULL;
    push_back(&head, 5);
    push_back(&head, -1);
    push_back(&head, 3);
    push_back(&head, 0);
    push_back(&head, 5);
    push_back(&head, -10);
    push_back(&head, 100);
    push_back(&head, 0);

    printf("Before Sorting: ");
    print(head);

    sort(&head);

    printf("After Sorting: ");
    print(head);

    printf("\n");

    freeList(head);
}

int main() {
    
    Node* head = NULL;

    push_front(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    push_front(&head, 5);
    
    printf("List after push_front and push_back: ");
    print(head);

    pop_front(&head);
    printf("List after pop_front: ");
    print(head);

    pop_back(&head);
    printf("List after pop_back: ");
    print(head);

    insert_node_pos(&head, 15, 1);
    printf("List after inserting 15 at position 1: ");
    print(head);

    delete_node_pos(&head, 1);
    printf("List after deleting node at position 1: ");
    print(head);

    delete_node_value(&head, 10);
    printf("List after deleting value 10: ");
    print(head);

    Node* x = find_node(head, 20);
    if (x) {
        printf("Node with your value found.");
    } 
    else {
        printf("Node with your value not found.");
    }

    push_back(&head, 25);
    push_back(&head, 30);
    printf("List before reversing: \n");
    print(head);
    
    reverse_list(&head);
    printf("List after reversing: \n");
    print(head);

    while (head != NULL) {
        pop_front(&head);
    }

    if (is_empty(head)) {
        printf("List is empty.\n");
    } else {
        printf("List isn't empty.\n");
    }

    printf("\n");

    printAlgorithm(InsertionSort, "Insertion Sort");
    printAlgorithm(SelectionSort, "Selection Sort");
    printAlgorithm(MergeSort, "Merge Sort");

    freeList(head);
    
    return 0;
}