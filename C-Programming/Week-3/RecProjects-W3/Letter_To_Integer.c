/*
 Author: Connor Kouznetsov
 Description: Using a simple program to convert character digits into integers
              If the input is a digit, it will return/print an integer
              But if the input isn't a digit, it will return an error statement

              Example:

                Enter a Valid Digit Character (0-9): 9
                Integer Value: 9

                Enter a Valid Digit Character (0-9): L
                The input 'L' IS NOT a digit!
*/

#include <stdio.h>

int main()
{
    char c;
    printf ("Enter a Valid Digit Character (0-9): ");
    c = getchar();

    if (c >= '0' && c <= '9')
    {
        int Value = c - '0';
        printf ("Integer Value: %d\n", Value);
    }
    else
    {
        printf ("The input '%c' IS NOT a digit!\n", c);
    }

    return 0;
}