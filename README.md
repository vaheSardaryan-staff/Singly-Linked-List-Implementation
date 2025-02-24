# Linked List Implementation in C

## 📌 Introduction to Linked Lists
A **linked list** is a linear data structure where elements (nodes) are stored in memory dynamically. Each node contains:
- A **value** (data).
- A **pointer** to the next node in the list.

Unlike arrays, linked lists do not require contiguous memory allocation, making insertion and deletion operations more efficient.

### 🔹 How Linked Lists Work:
1. **Singly Linked List**: Each node has a pointer to the next node.
2. **Doubly Linked List**: Each node has pointers to both the previous and next nodes.
3. **Circular Linked List**: The last node points back to the first node.

This project implements a **singly linked list** with various operations and sorting algorithms.

---
## 📜 Implemented Functions

### 🛠️ Basic Operations:
| Function | Description |
|----------|------------|
| `push_front(int value)` | Inserts a new node at the front of the list. |
| `push_back(int value)` | Inserts a new node at the end of the list. |
| `pop_front()` | Removes the first node of the list. |
| `pop_back()` | Removes the last node of the list. |
| `insert_node_pos(int value, int position)` | Inserts a node at a given position. |
| `delete_node_pos(int position)` | Deletes a node at a given position. |
| `delete_node(int value)` | Deletes the first node with the specified value. |
| `find_node(int value)` | Searches for a node with the given value and returns it. |
| `reverse_list()` | Reverses the linked list. |
| `freeList()` | Frees the allocated memory for the linked list. |

### 📊 Sorting Algorithms:
| Algorithm | Time Complexity (O(n)) |
|-----------|----------------------|
| **Insertion Sort** | Best: O(n), Average: O(n²), Worst: O(n²) |
| **Selection Sort** | Best: O(n²), Average: O(n²), Worst: O(n²) |
| **Merge Sort** | Best: O(n log n), Average: O(n log n), Worst: O(n log n) |

---
## 🚀 How to Run the Project

### **1. Compile the Code**
```sh
$ gcc gcc main.c sorts.c functions.c -o program
```

### **2. Run the Program**
```sh
$ ./program
```

---
## 🎯 Expected Output
```plaintext
List after pop_front: 1 -> 2 -> 3
List after pop_back: 1 -> 2
List after inserting 15 at position 1: 1 -> 15 -> 2
List after deleting node at position 1: 1 -> 2
List after deleting value 10: 1 -> 2
Node with your value not found.
List before reversing:
1 -> 2 -> 25 -> 30
List after reversing:
30 -> 25 -> 2 -> 1
List is empty.

Insertion Sort:
Before Sorting: 5 -> -1 -> 3 -> 0 -> 5 -> -10 -> 100 -> 0
After Sorting: -10 -> -1 -> 0 -> 0 -> 3 -> 5 -> 5 -> 100

Selection Sort:
Before Sorting: 5 -> -1 -> 3 -> 0 -> 5 -> -10 -> 100 -> 0
After Sorting: -10 -> -1 -> 0 -> 0 -> 3 -> 5 -> 5 -> 100

Merge Sort:
Before Sorting: 5 -> -1 -> 3 -> 0 -> 5 -> -10 -> 100 -> 0
After Sorting: -10 -> -1 -> 0 -> 0 -> 3 -> 5 -> 5 -> 100
```

---
## 📌 Author
**Vahe Sardaryan**

[🔗 GitHub](https://github.com/vaheSardaryan-staff) | [🔗 LinkedIn](https://www.linkedin.com/in/vahe-sardaryan/)

