/*
 Author: Connor Kouznetsov
 Description: Using a program that after entering two integers will calculate &
              display the greatest common divisor (GCD)
*/

    // Using an example of a while statement within our main function

#include <stdio.h>

int main()
{
    int num1, num2, GCD;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0)
    {
        GCD = num1 % num2;
        num1 = num2;
        num2 = GCD;
    }

    printf("The Greatest Common Divisor: %d\n", num1);
    return 0;
}
