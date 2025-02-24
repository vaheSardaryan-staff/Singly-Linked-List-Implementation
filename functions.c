#include "functions.h"

// Creation of a node
Node* create_node(int value){
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL){
        printf("Allocation fail.");
        exit(1);
    }
    
    node->value = value;
    node->next = NULL;
    return node;
}

// Inserting the Node from the end
void push_back(Node** head, int value){
    Node *node = create_node(value);

    if (node == NULL) return;

    if (*head == NULL){
        *head = node;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = node;
}

// Removing the Node from the end
void pop_back(Node** head){
    if (*head == NULL) return;

    if((*head)->next == NULL){
        free(*head);
        *head = NULL;
        return;
    }

    Node *temp = *head;
    while (temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

// Inserting the Node to the front part
void push_front(Node **head, int value){
    Node *node = create_node(value);
    if (node == NULL) return;

    node->next = *head;
    *head = node;
}

// Removing the Node from the front part
void pop_front(Node **head){
    if (*head == NULL) return;

    Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Inserting the node at a desired position
void insert_node_pos(Node **head, int value, int position){
    Node *new_node = create_node(value);

    if (position == 0){
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node *temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++){
        temp = temp->next;
    }

    if (temp == NULL){
        free(new_node);
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

// Deleting the node from a desired position
void delete_node_pos(Node **head, int position) {
    if (*head == NULL || position < 0) return;

    Node *temp = *head;

    if (position == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    Node *prev = NULL;
    for (int i = 0; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}


// Deleting exact node
void delete_node(Node **head, Node *node){
    if (*head == NULL || node == NULL) return;

    if (*head == node){
        *head = node->next;
        free(node);
        return;
    }

    Node *temp = *head;
    Node *prev = NULL;

    while (temp !=  NULL && temp != node){
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

// Deleting all the nodes with the desired value
void delete_node_value(Node **head, int value){
    Node *temp = *head;
    Node *prev = NULL;

    while (temp != NULL){
        if (temp->value == value){
            if (prev == NULL){
                *head = temp->next;
            } 
            else {
                prev->next = temp->next;
            }
            Node *toFree = temp;
            temp = temp->next;
            free(toFree);
        } 
        else {
            prev = temp;
            temp = temp->next;
        }
    }
}

// Reversing the list
void reverse_list(Node **head){
    Node *prev = NULL;
    Node *current = *head;
    Node *next = NULL;

    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Getting the size of the list
int get_size(Node *head){
    int count = 0;
    Node *temp = head;

    while (temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

// Checking if the list is empty
int is_empty(Node *head){
    return head == NULL;
}

// Finding the node with desired value
Node *find_node(Node *head, int value){
    Node *temp = head;
    while (temp != NULL){
        if (temp->value == value){
            return temp;
        }
        else{
            temp = temp->next;
        }
    }
    return NULL;
}

// Printing the list
void print(Node *head) {
    while (head) {
        printf("%d", head->value);
        if (head->next) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

// Memory Cleanup Function
void freeList(Node *head) {
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}