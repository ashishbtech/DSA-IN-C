#include <stdio.h>
#include <stdlib.h>

/*
    PROBLEM
    Implement stack using linked list
*/

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if(top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    struct Node* temp = top;
    top = top->next;
    free(temp);
}

void peek()
{
    if(top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", top->data);
}

void display()
{
    struct Node* temp = top;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    printf("\n");

    pop();

    display();

    printf("\n");

    peek();

    return 0;
}

/*
Time Complexity:
Push: O(1)
Pop: O(1)
Peek: O(1)

Space Complexity: O(n)
*/