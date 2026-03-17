/*
    PROBLEM
    Delete a node from linked list
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

struct Node* deleteNode(struct Node* head, int value)
{
    struct Node *temp = head, *prev = NULL;

    if(temp != NULL && temp->data == value)
    {
        head = temp->next;
        free(temp);
        return head;
    }

    while(temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
        return head;

    prev->next = temp->next;

    free(temp);

    return head;
}

int main()
{
    struct Node *node1, *node2, *node3, *node4;

    node1 = (struct Node*)malloc(sizeof(struct Node));
    node2 = (struct Node*)malloc(sizeof(struct Node));
    node3 = (struct Node*)malloc(sizeof(struct Node));
    node4 = (struct Node*)malloc(sizeof(struct Node));

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = node4;

    node4->data = 40;
    node4->next = NULL;

    struct Node* head = node1;

    head = deleteNode(head, 20);

    printf("Linked List:\n");
    traverse(head);

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/