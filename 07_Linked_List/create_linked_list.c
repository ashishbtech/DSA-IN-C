/*
    PROBLEM
    Create a linked list and print its elements
*/


#include <stdio.h>
#include <stdlib.h>



struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node *node1, *node2, *node3, *node4;

    node1 = (struct Node*)malloc(sizeof(struct Node));
    node2 = (struct Node*)malloc(sizeof(struct Node));
    node3 = (struct Node*)malloc(sizeof(struct Node));
    node4 = (struct Node*)malloc(sizeof(struct Node));

    node1->data = 1;
    node1->next = node2;

    node2->data = 2;
    node2->next = node3;

    node3->data = 3;
    node3->next = node4;

    node4->data = 4;
    node4->next = NULL;

    struct Node* head = node1;

    struct Node* temp = head;

    printf("Linked List:\n");

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/