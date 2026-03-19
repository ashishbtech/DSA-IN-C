#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value)
{
    if(top == SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    top--;
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

void display()
{
    for(int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
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
*/