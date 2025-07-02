/*
Name: Connor Kouznetsov
Descrption: Classifying Individual Grade scores by using a Standard Grading Scale

    Use the following Grading Scale:
        A = 90% - 100%
        B = 80% - 89%
        C = 70% - 79%
        D = 60% - 69%
        F = 0% - 59%

    WARNING!!! Print an Error Message if the grade input > 100 or input < 0
*/

#include <stdio.h>

int main()
{
    int grade;

    printf("Enter a valid numerical grade value: ");
    scanf("%d", &grade);
    printf("--------------------------------------\n");

    if (grade > 100 || grade < 0) {
        printf("Error: Invalid Grade!\n");
        return 0;
    }

    switch (grade / 10)
    {
        // 0% - 59% => F
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Letter Grade: F\n");
            break;
        // 60% - 69% => D
        case 6:
            printf("Letter Grade: D\n");
            break;
        // 70% - 79% => C
        case 7:
            printf("Letter Grade: C\n");
            break;
        // 80% - 89% => B
        case 8:
            printf("Letter Grade: B\n");
            break;
        // 90% - 100% => A
        case 9:
        case 10:
            printf("Letter Grade: A\n");
            break;
        // If input is outside our parameters...
        default:
            printf("Unknown\n");
    }
    
    if (grade > 69) {
        printf("Congrats! You recieved a Passing Grade!\n");
        return 0;
    }
    else if (grade < 70) {
        printf("Sorry... You did not pass...\n");
        return 0;
    }
    else {
        printf("Sorry... Your Score is Invalid\n");
        return 0;
    }
    
    return 0;
}