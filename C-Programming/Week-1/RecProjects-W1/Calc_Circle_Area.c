/*
 Author: Connor Kouznetsov
 Description: Calculating the Area of a Circle
*/

#include <stdio.h>
#define PI 3.14

int main()
{
    int radius;
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    area = PI * (radius * radius); // Represents (radius ** 2) or the radius squared

    printf("The area of our circile with radius %d is %.2lf\n", radius, area);
    
    return 0;
}