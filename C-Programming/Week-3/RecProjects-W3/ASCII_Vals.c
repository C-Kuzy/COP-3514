/*
 Author: Connor Kouznetsov
 Description: Print all necessary characters with values of 32 to 126
              Display each value through the program
*/

#include <stdio.h>

int main()
{
    int i;
    for (i = 32; i < 126; i++)
    {
        printf ("ASCII Value ( %3d ) = '%c'\n", i, i);
    }
    return 0;
}