#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head) {
    node_t *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

node_t *create_node(int value) {
    node_t *new_node = malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

node_t *append_node(node_t *head, int value) {
    node_t *new_node = malloc(sizeof(node_t));  // Corrected memory allocation
    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL) {
        return new_node;  // If the list is empty, return the new node
    }

    node_t *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;  // Append the new node
    return head;
}

node_t *insert_at_head(node_t *head, node_t *node_to_insert) {
    node_to_insert->next = head;
    return node_to_insert;
}

node_t *find_node(node_t *head, int value) {
    node_t *tmp = head;
    while (tmp != NULL) {
        if (tmp->value == value) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

void insert_after_node(node_t *node, node_t* new_node) {
    if (node != NULL) {  // Check if the node is not NULL
        new_node->next = node->next;
        node->next = new_node;
    }
}

int main() {  // Changed return type to int
    node_t *n1 = NULL;  // Initialize head as NULL
    node_t *n2;

    for (int i = 0; i < 20; i++) {
        n2 = create_node(i * 2 + i);
        n1 = insert_at_head(n1, n2);
    }

    n2 = find_node(n1, 57);  // Find a node in the list, not the last created node
    insert_after_node(n2, create_node(101));
    insert_after_node(find_node(n1, 101), create_node(102));
    
    printlist(n1);
    return 0;  // Return 0 to indicate successful completion
}