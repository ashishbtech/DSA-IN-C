//  PROBLEM
//     Find factorial of a number using recursion.

#include <stdio.h>
int factorial(int n)
{
    
    if (n == 0 || n == 1)
        return 1;

    
    return n * factorial(n - 1);
}

int main()
{
    int n = 5;

    int result = factorial(n);

    printf("Factorial = %d", result);

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)  (recursion stack)
*/