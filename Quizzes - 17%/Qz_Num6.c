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

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #5 -> 7 - Chapter 13  */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What is the actual type of a string literal like \"abc\" when declared in C?",
        {"int *",    // 0 == A
         "char *",   // 1 == B
         "string",   // 2 == C
         "char[]"},  // 3 == D
        3,           // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #2 */
    {"What type does a string literal like \"abc\" decay to when used in an expression or passed to a function in C?",
        {"char *",   // 0 == A
         "int *",    // 1 == B
         "char[]",   // 2 == C
         "string"},  // 3 == D
        0,           // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #3 */
    {"How many bytes are set aside for the string \"abc\" in memory?",
        {"5",  // 0 == A
         "It depends on the compiler",  // 1 == B
         "8",   // 2 == C
         "4"},  // 3 == D
        3,        // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #4 */
    {"What character is used to mark the end of a string in C?",
        {"\\0",   // 0 == A
         "\\n",   // 1 == B
         "\\t",   // 2 == C
         "\\e"},  // 3 == D
        0,        // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #5 */
    {"Which of the following creates a null pointer to a string?",
        {"char s[] = \"NULL\";",  // 0 == A
         "char *s = NULL",        // 1 == B
         "char s[] = \"\"",       // 2 == C
         "char *s = \"\\n\""}     // 3 == D
        1,                        // Answer = (1 == B)
        "HINT: i.e., not pointing to any string!"},

    /* QUESTION #6 */
    {"Which of the following correctly defines an empty string (a null string containing only '\0')?",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #7 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #8 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #9 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #10 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #11 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #12 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
        "HINT: "},

    /* QUESTION #13 */
    {"",
        {"", // 0 == A
         "", // 1 == B
         "", // 2 == C
         ""}, // 3 == D
        ,      // Answer = ( == )
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

    printf("\nWelcome to Summer C: 2025 COP-3514 Quiz #7 -- Chapter 13 Multiple Choice Review (enter Q/q to quit)\n\n");

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
