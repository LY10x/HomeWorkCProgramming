#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char *firstname;
    struct Node *father;
    struct Node *mother;
    struct Node *marriedto;
} Node;

Node* create_node(char *name) {
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->firstname = name;
    (*new_node).firstname = name;
    new_node->father = NULL;
    new_node->mother = NULL;
    new_node->marriedto = NULL;
    return new_node;
}

int main() {
    // Create nodes for some family members
    Node *john = create_node("John");
    Node *jane = create_node("Jane");
    Node *bob = create_node("Bob");
    Node *sue = create_node("Sue");
    Node *alice = create_node("Alice");

    // Set relationships
    john->father = bob;
    john->mother = jane;
    bob->father = NULL;
    bob->mother = NULL;
    jane->father = NULL;
    jane->mother = NULL;
    alice->father = john;
    alice->mother = sue;
    sue->father = NULL;
    sue->mother = NULL;

    // Print family tree
    printf("Family tree:\n");
    printf("John: father = %s, mother = %s\n",
        john->father ? john->father->firstname : "NULL",
        john->mother ? john->mother->firstname : "NULL");
    printf("Alice: father = %s, mother = %s\n",
        alice->father ? alice->father->firstname : "NULL",
        alice->mother ? alice->mother->firstname : "NULL");

    return 0;
}