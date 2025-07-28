/*
 Author: Connor Kouznetsov
 Description: 2025 Summer C Semester: COP-3514 PRE-TEST Multiple Choice Answer Bank
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define MX_Options 5

/* ---------------------------- Question Bank Structure ---------------------------- */
struct {
    const char *prompt;               // Refers to Displaying Question Prompt
    const char *choices[MX_Options];  // Refers to displaying answer choices A-E 
    int correct;                      // Searches through 
    const char *why;                  // Got the Question wrong? There's feedback for you!
} Question;

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> 1 - Pre-Test */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What is the value of the expression: ((i \% j) + k)? Assume i, j, & k are int variables.\n i = 3 ; j = 4 ; k = 5 ;",
            {"8",   // 0 == A
             "5",   // 1 == B
             "0",   // 2 == C
             "3",   // 3 == D
             "6"},  // 4 == E
            0,      // Answer = (0 == A)
            "Perform modulo first: i \% j = 3 \% 4 = R3... Then do addition: 3 + 5 = 8"},
    
    /* QUESTION #2 */
    {"The following code accomplishes which of the tasks written below? Assume the list is an int array with 10 elements that store positive int values.\n\nint foo = 0;\nint j;\nfor (j = 0; j < 10; j++) {\n  if (foo < list[j]) foo = list[j];\n"
            {"It counts the number of elements in list that are greater than 'foo'",              // 0 == A
             "It stores every value in list, one at a time, in foo, until the loop terminates",   // 1 == B
             "It stores the smallest value in the list (the minimum) in foo",                     // 2 == C
             "It stores the largest value in the list (the maximum) in foo",                      // 3 == D
             "None of the above..."},                                                             // 4 == E
            3,                                                                                    // Answer = (3 == D)
            },

    /* QUESTION #3 */
    {"What is the value of sum after the following program fragment is executed? Assume sum and i are int variables.\n\nsum = 0;\nfor (i = 0; i < 3; i++) {\n sum += i;\n if (i \% 2 == 1)\n break;\n}"
            {"0",                      // 0 == A
             "1",                      // 1 == B
             "2",                      // 2 == C
             "3",                      // 3 == D
             "None of the above..."},  // 4 == E
            1,                         // Answer = (1 == B)
            },

    /* QUESTION #4 */
    {"Which of the following loops would adequately add 1 to each element stored in values? Assume that values is an integer array (list) of 10 elements and j is an integer variable."
            {"for (j=0; j<9; j++) values[j]++; ////In Python: for j in range (1, 9): values[j]=1",       // 0 == A
             "for (j=0; j<=10; j++) values[j]++; ////In Python: for j in range (1, 11): values[j]=1 ",   // 1 == B
             "for (j=1; j<10; j++) values[j]++; //In Python: for j in range (1, 10): values[j]=1 ",      // 2 == C
             "for (j=0; j<10; j++) values[j]++; //In Python: for j in range (0, 10): values[j]=1 ",      // 3 == D
             "None of the above..."},                                                                    // 4 == E
            3,
            },

    /* QUESTION #5 */
    {"What output does the following program fragment produce?\nint n;\nfor (n = 9; n > 0; n -= 2) {\n   printf('\%d', n);\n}"
            {"9 7 5 3",                 
             "9 7 5 3 1",
             "9 8 7 6 5 4 3 2 1",
             "Infinite Loop",
             "None of the above..."},
            1,
            },

}

#define NQ ((int)(sizeof quiz / sizeof quiz[0]))

/* ------------------- helpers ------------------- */
static void shuffle_int_array(int *a, int n) {
    for (int i = n - 1; i > 0; --i)
    {
        int j = rand() % (i + 1);
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

/* ---------- Main Function ---------- */
int main(void) {
    srand((unsigned)time(NULL)); /* new order each run */

    int qs_ordr[NQ];
    for (int i = 0; i < NQ; ++i)
        qs_ordr[i] = i;
    shuffle_int_array(qs_ordr, NQ);

    printf("\nWelcome to Summer C: 2025 COP-3514 Pre-TEST Examination (enter Q/q to quit)\n\n");

    int correct_count = 0;
    int correct_bank[NQ] = {0}; // 1 if correct, 0 if not

    for (int qn = 0; qn < NQ; ++qn) {
        const Question *q = &quiz[qs_ordr[qn]];

        int aorder[5] = {0, 1, 2, 3, 4};
        shuffle_int_array(aorder, 5);

        int correct_pos = 0;
        for (int k = 0; k < 5; ++k)
            if (aorder[k] == q->correct) {
                correct_pos = k;
                break;
            }

        printf("\nQ%d: %s\n", qn + 1, q->prompt);
        for (int k = 0; k < 5; ++k)
            printf("   %c) %s\n", 'A' + k, q->choices[aorder[k]]);

        printf("ENTER YOUR ANSWER {A‑D / Q}: ");
        char ans;
        if (scanf(" %c", &ans) != 1) {
            puts("Invalid Input Error.");
            return 1;
        }
        ans = toupper((unsigned char)ans);

        if (ans == 'Q') {
            puts("See ya Later!");
            break;
        }
        if (ans < 'A' || ans > 'D') {
            puts("Please enter A‑D or Q.");
            --qn;
            continue;
        }

        if (ans - 'A' == correct_pos) {
            puts("✅ CORRECT! ✅");
            correct_count++;
            correct_bank[qn] = 1;
        }
        else {
            printf("❌ INCORRECT ❌. Correct answer: %c\n    %s\n",
                   'A' + correct_pos, q->why);
        }
    }

    // Print answer bank and percentage
    printf("\n=== Answer Bank ===\n");
    for (int i = 0; i < NQ; ++i) {
        printf("Q%d: %s\n", i + 1, correct_bank[i] ? "✅ CORRECT ✅" : "❌ INCORRECT ❌");
    }
    double percent = 100.0 * correct_count / NQ;
    printf("\nTOTAL QUIZ SCORE: %d/%d (%.2f%%)\n\n", correct_count, NQ, percent);

    return 0;
}
