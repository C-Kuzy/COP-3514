/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 10 & 11 Quiz Bank
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#define MX_Options 4

/* ---------------------------- Question Bank Structure ---------------------------- */
typedef struct {
    const char *prompt;               // Refers to Displaying Question Prompt
    const char *choices[MX_Options];  // Refers to displaying answer choices A-E 
    int correct;                      // Initializes a correct response!
    const char *why;                  // Got the Question wrong? There's feedback for you!
} Question;

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #4 -> 6 - Chapter 10 & 11  */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What is the result of f(5) for the Fibonacci-style recursive function defined as: f(n) = f(n - 1) + f(n - 2), with f(1) = 1 and f(2) = 1?",
        {"1",   // 0 == A
         "11",  // 1 == B
         "8",   // 2 == C
         "5"},  // 3 == D
        3,      // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #2 */
    {"Which is NOT a major element of a C program?",
        {"External variable declarations",  // 0 == A
         "Preprocessing directives",        // 1 == B
         "Memory map templates",            // 2 == C
         "Function definitions"},           // 3 == D
        2,                                  // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #3 */
    {"Where should #include directives appear in a well-organized C program?",
        {"After the main()",             // 0 == A
         "After external declarations",  // 1 == B
         "After function definitions",   // 2 == C
         "At the beginning"},            // 3 == D
        3,                               // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #4 */
    {"Which of the following describes local variable scope?",
        {"Function scope",  // 0 == A
         "Global scope",    // 1 == B
         "Block scope",     // 2 == C
         "File scope"},     // 3 == D
        2,                  // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #5 */
    {"What is the scope of a function parameter",
        {"Block scope",     // 0 == A
         "Loop scope",      // 1 == B
         "File scope",      // 2 == C
         "Program scope"},  // 3 == D
        0,                  // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #6 */
    {"What is the output of storage.c with a local counter inside fn()?",
        {"0, 1, 2, 3, 4"    // 0 == A
         "1, 1, 1, 1, 1",   // 1 == B
         "5, 5, 5, 5, 5",   // 2 == C
         "1, 2, 3, 4, 5"},  // 3 == D
        1,                  // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #7 */
    {"What is the disadvantage of using global variables?",
        {"Easier parameter passing",     // 0 == A
         "Harder to reuse functions",    // 1 == B
         "Faster execution",             // 2 == C
         "Improved memory management"},  // 3 == D
        1,                               // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #8 */
    {"Why should variable i be local in a program?",
        {"To allow recursion",           // 0 == A
         "To avoid unintended sharing",  // 1 == B
         "To reduce memory use",         // 2 == C
         "To avoid syntax errors"},      // 3 == D
        1,                               // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #9 */
    {"Which symbol is used to declare pointer variables in C?",
        {"ptr",   // 0 == A
         "&",     // 1 == B
         "*",     // 2 == C
         "ref"},  // 3 == D
        2,        // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #10 */
    {"What does \%p in printf print?",
        {"Pointer value",      // 0 == A
         "Dereferenced data",  // 1 == B
         "Pointer address",    // 2 == C
         "Character"},         // 3 == D
        2,                     // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #11 */
    {"What happens if you use an uninitialized pointer?",
        {"Compilation error",    // 0 == A
         "Runtime warning",      // 1 == B
         "It works fine",        // 2 == C
         "Undefined behavior"},  // 3 == D
        3,                       // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #12 */
    {"What operator is used to access the value a pointer points to?",
        {"*",    // 0 == A
         "#",    // 1 == B
         "\%",   // 2 == C
         "->"},  // 3 == D
        0,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #13 */
    {"What operator gets the address of a variable?",
        {"#",   // 0 == A
         "&",   // 1 == B
         "~",   // 2 == C
         "*"},  // 3 == D
        1,      // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #14 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #15 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #16 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #17 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #18 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #19 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},
    
    /* QUESTION #20 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #21 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #22 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},
    
    /* QUESTION #23 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #24 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #25 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #26 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #27 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #28 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #29 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #30 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},
};
#define NQ ((int)(sizeof quiz / sizeof quiz[0]))

/* ---------- helpers ---------- */
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

    printf("\nWelcome to Summer C: 2025 COP-3514 Quiz #5 -- Chapter 10 & 11 Multiple Choice Review (enter Q/q to quit)\n\n");

    int correct_count = 0;
    int correct_bank[NQ] = {0}; // 1 if correct, 0 if not

    for (int qn = 0; qn < NQ; ++qn) {
        const Question *q = &quiz[qs_ordr[qn]];

        int aorder[4] = {0, 1, 2, 3};
        shuffle_int_array(aorder, 4);

        int correct_pos = 0;
        for (int k = 0; k < 4; ++k)
            if (aorder[k] == q->correct) {
                correct_pos = k;
                break;
            }

        printf("\nQ%d: %s\n", qn + 1, q->prompt);
        for (int k = 0; k < 4; ++k)
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
