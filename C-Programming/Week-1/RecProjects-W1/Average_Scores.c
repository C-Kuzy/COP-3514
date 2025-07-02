/*
 Author: Connor Kouznetsov
 Description: Calculating the Average Score Between Multiple Test Versions
*/

// VERSION #1

#include <stdio.h>

int main()
{
    double test1A, test2A, test3A, test4A, test5A, test6A, test7A, test8A, test9A, test10A;
    double test1B, test2B, test3B, test4B, test5B, test6B, test7B, test8B, test9B, test10B;
    double test1C, test2C, test3C, test4C, test5C, test6C, test7C, test8C, test9C, test10C;

    // Program Greeting Message
    printf("Welcome! This program will allow you to average 10 test scores from each version\n");
    printf("--------------------------------------------------------------------------------\n");

    // Retrieving Test Grades
    printf("Enter Version A's 10 Test Scores: ");
    scanf("%le %le %le %le %le %le %le %le %le %le", 
        &test1A, &test2A, &test3A, &test4A, &test5A, &test6A, &test7A, &test8A, &test9A, &test10A);
    
    printf("Enter Version B's 10 Test Scores: ");
    scanf("%le %le %le %le %le %le %le %le %le %le",
        &test1B, &test2B, &test3B, &test4B, &test5B, &test6B, &test7B, &test8B, &test9B, &test10B);
    
    printf("Enter Version C's 10 Test Scores: ");
    scanf("%le %le %le %le %le %le %le %le %le %le", 
        &test1C, &test2C, &test3C, &test4C, &test5C, &test6C, &test7C, &test8C, &test9C, &test10C);
    
    // Calculating the Averages & Displaying
    printf("Average score of Version A: %.2lf Percent\n", 
        ((test1A + test2A + test3A + test4A + test5A + test6A + test7A + test8A + test9A + test10A) / 10));
    printf("Average score of Version B: %.2f Percent\n", 
        ((test1B + test2B + test3B + test4B + test5B + test6B + test7B + test8B + test9B + test10B) / 10));
    printf("Average score of Version C: %.2f Percent\n", 
        ((test1C + test2C + test3C + test4C + test5C + test6C + test7C + test8C + test9C + test10C) / 10));

    // Compare/Determine Best of Each Version's Total

    return 0;
}


// VERSION #2
/*
#include <stdio.h>

#define NUM_TESTS 10

void compute_avg(float data[], int size, float * average) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    *average = sum / size;
}

int main() {
    float VerA[NUM_TESTS] = {50.00, 55.00, 60.00, 65.00, 70.00, 75.00, 80.00, 85.00, 90.00, 100.00};
    float VerB[NUM_TESTS] = {75.26, 79.99, 77.34, 80.17, 78.84, 85.31, 90.41, 49.24, 88.59, 76.52};
    float VerC[NUM_TESTS] = {};

    float Avg1, Avg2, Avg3;
    compute_avg(VerA, NUM_TESTS, &Avg1);
    compute_avg(VerB, NUM_TESTS, &Avg2);
    compute_avg(VerC, NUM_TESTS, &Avg3);

    printf("Average score of Version A: %.2f\n", Avg1);
    printf("Average score of Version B: %.2f\n", Avg2);

    if (Avg1 > Avg2) & (Avg1 > Avg3) {
        printf("Version 1 performs better.\n");
    } else if (Avg2 > Avg1) & (Avg2 > Avg3) {
        printf("Version 2 performs better.\n");
    } else if ({
        printf("Both versions perform equally.\n");
    }

    return 0;
}
    */