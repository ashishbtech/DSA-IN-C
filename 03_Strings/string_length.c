// String Length in C
// Problem

// Find the length of a string without using strlen()

#include<stdio.h>

int stringLength(char str[]){
    int i=0;

    while(str[i]!='\0'){
        i++;
    }
    return i;

}

int main()
{
    char str[100];

    printf("Enter a string : ");
    scanf("%s",str);

    int length = stringLength(str);

    printf("Lenght of the string is: %d\n", length);

    return 0;

    
}

// Time: O(n)

// Space: O(1)