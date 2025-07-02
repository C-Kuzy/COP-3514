/*
 Author: Connor Kouznetsov
 Description: Writing a program that sums each digit in a three digit integer
*/

#include <stdio.h>

int main()
{
    int copy, value, sum;
    printf("Enter a three digit value: ");
    scanf("%d", &value);

    copy = value;

    sum = value % 10;
    value = value / 10;
    sum = sum + (value % 10);
    value = value / 10;
    sum = sum + (value % 10);

    printf("The digit sum of %d is %d\n", copy, sum);

    return 0;
}