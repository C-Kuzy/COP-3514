/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 4/5 Quiz Bank
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
    int correct;                      // Searches through answer choices and selects the correct answer
    const char *why;                  // Got the Question wrong? There's feedback for you!
} Question;

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #2 -> 2 - Chapter 4 & 5 */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What is an lvalue in C programming?",
        {"An error message",                     // 0 == A
         "A label name",                         // 1 == B
         "An object stored in computer memory",  // 2 == C
         "A literal constant"},                  // 3 == D
        2,                                       // Answer = (2 == C)
        "HINT: Think about what can appear on the left side of an assignment."},

    /* QUESTION #2 */
    {"What does the statement \"count++\" do?",
        {"Decrements 'count' by 1",   // 0 == A
         "Increments 'count' by 1",   // 1 == B
         "Sets 'count' to 0",         // 2 == C
         "Multiplies 'count' by 2"},  // 3 == D
        1,                            // Answer = (1 == B)  
        "HINT: Consider what the double plus operator does to a variable."},

    /* QUESTION #3 */
    {"Which of the following is a correct use of assignment chaining?",
        {"i + j + k = 0;",     // 0 == A
         "i = j = k = 0;",     // 1 == B
         "i == j == k == 0;",  // 2 == C
         "i = j == k = 0;"},   // 3 == D
        1,                     // Answer = (1 == B)
        "HINT: Assignment chaining lets you set several variables to the same value in one statement."},

    /* QUESTION #4 */
    {"What is the output of the following statement?",
        {"32 5",   // 0 == A
         "32 4",   // 1 == B
         "40 5",   // 2 == C
         "40 4"},  // 3 == D
        0,         // Answer = (0 == A)
        "HINT: Pay attention to the order in which operations are performed and values are updated."},

    /* QUESTION #5 */
    {"Which form of increment returns the incremented value immediately?",
        {"++x",   // 0 == A
         "x--",   // 1 == B
         "x++",   // 2 == C
         "--x"},  // 3 == D
        0,        // Answer = (0 == A)
        "HINT: Consider whether the increment happens before or after the value is used."},

    /* QUESTION #6 */
    {"In a \"switch\" statement, what data types can the controlling expression be?",
        {"string and float",  // 0 == A
         "array",             // 1 == B
         "float and double",  // 2 == C
         "int, char, enum"},  // 3 == D
        3,                    // Answer = (3 == D)
        "HINT: Only certain types are allowed for switch control; think about which types are discrete values."}, 

    /* QUESTION #7 */
    {"What is the output if grade = 3\n\n switch (grade) {\n  case 4: printf(\"Excellent\");\n  case 3: printf(\"Good\");\n  case 2: printf(\"Average\");\n  case 1: printf(\"Poor\");\n  case 0: printf(\"Failing\");\n  default: printf(\"Illegal grade\");\n}\n\n",
        {"GoodAveragePoorFailingIllegal grade",
         "Illegal grade",
         "GoodAverage",
         "Good"},
        0,
        "HINT: Notice if there are any break statements and how control flows through the cases."},

    /* QUESTION #8 */
    {"Which Unix command is used to move or rename a file?",
        {"mv",  // 0 == A
         "cp",  // 1 == B
         "cd",  // 2 == C
         "rm"}, // 3 == D
        0,      // Answer = (0 == A)
        "HINT: This command is used for both moving and renaming files or directories."},

    /* QUESTION #9 */
    {"What does \"rm-i\" do?",
        {"Moves files",                      // 0 == A
         "Removes files with confirmation",  // 1 == B
         "Copies files",                     // 2 == C
         "Renames files"},                   // 3 == D
        1,                                   // Answer = (1 == B)
        "HINT: The '-i' option in Unix commands often means interactive or asks for confirmation."},

    /* QUESTION #10 */
    {"How can you clear the terminal screen?",
        {"rm screen",  // 0 == A
         "Ctrl + l",   // 1 == B 
         "clear + l",  // 2 == C
         "Ctrl + c"},  // 3 == D
        1,             // Answer = (1 == B)
        "HINT: There is a keyboard shortcut that refreshes your view in many terminals."},

    /* QUESTION #11 */
    {"Which relational operator has lower precedence than \"!=\" ?",
        {"=<", // 0 == A
         "==", // 1 == B
         "<",  // 2 == C
         ">"}, // 3 == D
        1,     // Answer = (1 == B)
        "HINT: Precedence determines the order in which operators are evaluated in expressions."},

    /* QUESTION #12 */
    {"What is the output of...\n\ni = 3;\n j = 2;\nk = 1;\nprintf(\"\%d\")",
        {"0",       // 0 == A
         "1",       // 1 == B
         "true",    // 2 == C
         "false"},  // 3 == D
        1,          // Answer = (1 == B)
        "HINT: Check which variable is being printed and what its value is at that moment."},

    /* QUESTION #13 */
    {"Which operator is unary?",
        {">=",   // 0 == A
         "!",    // 1 == B
         "&&",   // 2 == C
         "||"},  // 3 == D
        1,       // Answer = (1 == B)
        "HINT: This type of operator works with just one operand, not two."},

    /* QUESTION #14 */
    {"Which of these tests if a value is between i and k?",
        {"i == j < k",       // 0 == A
         "i < j < k",        // 1 == B
         "i > j || j < k",   // 2 == C
         "i < j && j < k"},  // 3 == D
        3,                   // Answer = (3 == D)
        "HINT: You need to check two conditions at the same time for this."},

    /* QUESTION #15 */
    {"Which of the following if statements assigns 0 to i and skips the block?",
        {"if (i++)",      // 0 == A
         "if (i == 0)",   // 1 == B
         "if (i = 0)",    // 2 == C
         "if (i != 0)"},  // 3 == D
        2,                // Answer = (2 == C)
        "HINT: Watch out for the difference between assignment and comparison in conditions."},

    /* QUESTION #16 */
    {"Which keyword ends a case in a switch?",
        {"stop",    // 0 == A
         "break",   // 1 == B
         "return",  // 2 == C
         "end"},    // 3 == D
        2,          // Answer = (2 == C)
        "HINT: This keyword is used to exit a block and continue after the switch."},

    /* QUESTION #17 */
    {"What happens if a switch case is missing a break?",
        {"The program exits the switch",      // 0 == A
         "A syntax error occurs",             // 1 == B
         "It stops the switch",               // 2 == C
         "It continues into the next case"},  // 3 == D
        3,                                    // Answer = (3 == D)
        "HINT: Consider what happens when there is no instruction to stop after a case."},

    /* QUESTION #18 */
    {"Which header file provides bool type in C99?",
        {"stdbool.h",  // 0 == A
         "stdlib.h",   // 1 == B
         "stdio.h",    // 2 == C
         "ctype.h"},   // 3 == D
        1,             // Answer = (1 == B)
        "HINT: This header was added to the C language standard to support true/false values."},

    /* QUESTION #19 */
    {"Which of these represents the correct form if for multiple statements?",
        {"if expression (statements)",      // 0 == A
         "if (expression): statements",     // 1 == B
         "if (expression) { statements }",  // 2 == C
         "if expression { statements }"},   // 3 == D
        2,                                  // Answer = (2 == C)
        "HINT: In C, blocks of code are grouped using a specific type of bracket."},

    /* QUESTION #20 */
    {"Which of these statements is true about scanf and format strings?",
        {"Scanf uses default values for missing inputs",                                  // 0 == A
         "Scanf always reads all input, even if it's incorrect",                          // 1 == B
         "Scanf  expects input to match non-whitespace characters in the format string",  // 2 == C
         "Scanf expects input to match non-whitespace characters in the format string"},  // 3 == D
        3,                                                                                // Answer = (3 == D)
        "HINT: Pay attention to how scanf matches what you type to the format you specify."}
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

    printf("\nWelcome to Summer C: 2025 COP-3514 Quiz #1 -- Chapter 4 & 5 Multiple Choice Review (enter Q/q to quit)\n\n");

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
