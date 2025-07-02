/*
 Author: Connor Kouznetsov
 Description: Print out the first 30 Palindrome values...
*/

#include <stdio.h>

int main()
{
    int count = 0;
    int original = 0;

    printf("The first 30 palindromes:\n");

    while (count < 30)
    {
        int reversed = 0;
        int tmp = original;
        int digit;

        // Get the reversed number?
        while (tmp > 0)
        {
            digit = tmp % 10;
            reversed = (reversed * 10) + digit;
            tmp /= 10;
        }

        // Check if the reversed order matches up...
        if (reversed == original)
        {
            printf("%d ", original);
            count++;
        }
        original++;
    }

    printf("\n");
    return 0;
}