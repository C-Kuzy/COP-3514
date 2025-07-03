/*
 Author: Connor Kouznetsov
 Description: Recitation week #2 practice
*/

#include <stdio.h>

int main()
{
    char c, initial;

    printf("Enter a valid First & Last name: ");

    // Read the first letter
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
