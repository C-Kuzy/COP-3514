/*
 Author: Connor Kouznetsov
 Description: Building a Simple Sales Tax Calculator
*/ 

#include <stdio.h>

#define TAX 0.07 // Florida Sales Tax Rates (Per County) Link: https://zamp.com/resources/florida-sales-tax/

int main() 
{
    float charge, tax, total;

    printf("Welcome to your personal Sales Tax Calculator!\n");
    printf("Enter your given amount: ");
    scanf("%f", &charge);

    tax = charge * TAX;
    total = charge + tax;

    printf("-----------------------------------------------------------------------------------\n");
    printf("Here are the following charges you must pay:\n"); 
    printf("-----------------------------------------------------------------------------------\n");    
    printf("Listed Charge: $%.2f, Calculated Tax: $%.2f, Order Total: $%.2f\n", charge, tax, total);

    return 0;
}