// Problem
// Print numbers from 1 to N using recursion.
#include <stdio.h>

void printNumbers(int n)
{
    
    if (n == 0)
        return;

    
    printNumbers(n - 1);

   
    printf("%d ", n);
}

int main()
{
    int n = 5;

    printNumbers(n);

    return 0;
}

/*
    Time Complexity: O(n)
    Space Complexity: O(n)   // recursion call stack
*/