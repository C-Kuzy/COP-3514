/*
 Author: Connor Kouznetsov
 Description: 
*/

#include <stdio.h>

int main()
{
    char c, initial;

    printf("Enter a valid First & Last name: ");

    // Read the frist letter
    scanf(" %c", &initial);

    // Skip the rest of the first name
    while ((c = getchar()) != ' ')
        ;
    
    // Skip the whitespace between first - last names
    while ((c = getchar()) == ' ')
        ;

    // Output last name
    do {
        putchar(c);
    }

    while ((c = getchar()) != '\n' && c != ' ');

    printf(", %c.\n", initial);
    return 0;
}