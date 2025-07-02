/*
 Author: Connor Kouznetsov
 Description: Creating a program that sorts/finds the largest & smallest number between four integers
              prompted by the user input
*/

#include <stdio.h>
    
int main() 
{
    int n1, n2, n3, n4;
    int max1, max2, min1, min2;
    int max, min;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    printf("-------------------------------------\n");

    // Find the local min/max of n1 & n2
    if (n1 >= n2)
    {
        max1 = n1;
        min1 = n2;
    }
    else
    {
        max1 = n2;
        min1 = n1;
    }

    // Find the local min/max of n3 & n4
    if (n1 >= n2)
    {
        max2 = n3;
        min2 = n4;
    }
    else
    {
        max2 = n4;
        min2 = n3;
    }
    
    // Finding the global max of the local numbers
    if (max1 >= max2)
    {
        max = max1;
    }
    else 
    {
        max = max2;
    }

    // Finding the global min of the local numbers
    if (min1 <= min2)
    {
        min = min1;
    }
    else
    {
        min = min2;
    }

    printf("Largest Integer: %d\n", max);
    printf("Smallest Integer: %d\n", min);
    return 0;
} 
