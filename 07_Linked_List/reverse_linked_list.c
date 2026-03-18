/*
    PROBLEM
    Reverse a linked list
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

struct Node* reverseList(struct Node* head)
{
    struct Node *prev = NULL, *curr = head, *next = NULL;

    while(curr != NULL)
    {
        next = curr->next;   // store next
        curr->next = prev;   // reverse link
        prev = curr;         // move prev
        curr = next;         // move curr
    }

    return prev;
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

    printf("Original List:\n");
    traverse(head);

    head = reverseList(head);

    printf("\nReversed List:\n");
    traverse(head);

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/