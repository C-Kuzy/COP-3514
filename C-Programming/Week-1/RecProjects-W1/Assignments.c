/*
 Author: Connor Kouznetsov
 Description: Declarations, Assignments, & Printing Examples
*/

#include <stdio.h>

int main() 
{
    // Declarations
    int length, width, height;
    float profit, loss, total;
    double angle;
    char ch;

    // Assignments
    length = 40, width = 20 , height = 25;
    profit = 13468.69, loss = 69.6969, total = (profit - loss);
    angle = 114.0000065;
    ch = 'C';

    // Printing
    printf("Height: %d feet\n", height);
    printf("Profit: $%.2f dollars\n", profit);
    printf("Loss: $%.4f dollars\n", loss);
    printf("Total: $%.2f dollars\n", total);
    printf("Angle: %.2f degrees\n", angle);
    printf("Character: %c\n", ch);

    return 0;
}