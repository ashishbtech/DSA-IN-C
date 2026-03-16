/*
    PROBLEM
    Insert a node at the end of a linked list
*/

#include <stdio.h>
#include <stdlib.h>



struct Node
{
    int data;
    struct Node* next;
};

void traverse(struct Node* head)
{
    struct Node* temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

struct Node* insertAtEnd(struct Node* head, int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    struct Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

int main()
{
    struct Node *node1, *node2, *node3;

    node1 = (struct Node*)malloc(sizeof(struct Node));
    node2 = (struct Node*)malloc(sizeof(struct Node));
    node3 = (struct Node*)malloc(sizeof(struct Node));

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = NULL;

    struct Node* head = node1;

    head = insertAtEnd(head, 40);

    printf("Linked List:\n");
    traverse(head);

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/