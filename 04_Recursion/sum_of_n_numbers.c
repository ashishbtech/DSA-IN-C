// PROBLEM
// Find sum of first N natural numbers using recursion.
#include <stdio.h>

int sum(int n)
{
    
    if (n == 1)
        return 1;

   
    return n + sum(n - 1);
}

int main()
{
    int n = 5;

    int result = sum(n);

    printf("Sum = %d", result);

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)  (recursion stack)
*/