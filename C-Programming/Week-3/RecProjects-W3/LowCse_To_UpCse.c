/*
 Author: Connor Kouznetsov
 Description: Learning to convert lowercase letters to uppercase letters
              
              Example #1:

                Enter a Lowercase Letter: g
                Converted Uppercase: G

              Example #2:

                Enter a Lowercase Letter: 1
                ERROR! Not a lowercase letter
*/

#include <stdio.h>

int main()
{
    char c;
    printf ("Enter a Lowercase Letter: ");
    c = getchar();

    if (c >= 'a' && c <= 'z')
    {
      c = c - 'a' + 'A'; // or -32
      printf ("Uppercase: ");
      putchar(c);
      putchar('\n');
    }
    else
    {
      printf ("Not a lowercase letter.\n");
    }
    return 0;
}