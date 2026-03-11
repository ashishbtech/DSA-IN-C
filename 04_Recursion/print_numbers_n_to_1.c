// PROBLEM
//     Print numbers from N to 1 using recursion.


#include <stdio.h>

void printReverse(int n)
{

    if (n == 0)
        return;

    
    printf("%d ", n);

    
    printReverse(n - 1);
}

int main()
{
    int n = 5;

    printReverse(n);

    return 0;
}

/*
    Time Complexity: O(n)
    Space Complexity: O(n)  (recursion stack)
*/