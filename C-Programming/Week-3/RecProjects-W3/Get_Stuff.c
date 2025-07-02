/*
 Author: Connor Kouznetsov
 Description: Retrieve charaters from stdin (standard input) using getchar call
              Printing the character with newline to stdout using putchar

              Example #1:

              Enter a Valid Character: z
              The Character You Entered: z

              Example #2

              Enter a Valid Character: L
              The Character You Entered: L


*/

#include <stdio.h>

int main()
{
    char c;
    printf ("Enter a Valid Character: ");
    c = getchar();
    printf ("The Character You Entered: ");
    putchar(c);
    putchar('\n');

    return 0;
}