/*
 Author: Connor Kouznetsov
 Description: Create a Bool Type using typedef
              Assigning Values TRUE or FALSE
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

int main()
{
    Bool flag = TRUE;

    if (flag == TRUE)
        printf ("The Boolean is True!\n");
    else
        printf ("The Boolean is False!\n");

    // Overflow Function
    int num = 1546846297; // Can input any 10 digit number here...
    printf ("%ld\n", (long int)num + 1);

    return 0;
}