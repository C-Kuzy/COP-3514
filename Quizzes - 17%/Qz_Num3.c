/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 7 Quiz Bank
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define MX_Options 4

/* ---------------------------- Question Bank Structure ---------------------------- */
typedef struct {
    const char *prompt;               // Refers to Displaying Question Prompt
    const char *choices[MX_Options];  // Refers to displaying answer choices A-E 
    int correct;                      // Initializes a correct response!
    const char *why;                  // Got the Question wrong? There's feedback for you!
} Question;

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #3 -> 4 - Chapter 7  */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What is the correct format specifier for printing an unsigned int?",
        {"\%d",   // 0 == A
         "\%u",   // 1 == B
         "\%ld",  // 2 == C
         "\%i"},  // 3 == D
        1,        // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #2 */
    {"Which type conversion is the safest to prevent data loss",
        {"Converting float to int",      // 0 == A
         "Converting char to int",       // 1 == B
         "Converting int to long",       // 2 == C
         "Converting double to float"},  // 3 == D
        2,                               // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #3 */
    {"Which format specifier is used to print a long int?",
        {"\%hd",  // 0 == A
         "\%ld",  // 1 == B
         "\%f",   // 2 == C
         "\%d"},  // 3 == D
        1,        // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #4 */
    {"Free Question: What is Unsigned int equivalent to?",
        {"long int",      // 0 == A
         "unsigned int",  // 1 == B
         "int",           // 2 == C
         "short int"},    // 3 == D
        1,                // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #5 */
    {"What is integer overflow",
        {"An error in scanf",                               // 0 == A
         "A variable is too large to store in memory",      // 1 == B
         "An arithmetic result is too large to represent",  // 2 == C
         "The program crashes"},                            // 3 == D
        2,                                                  // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #6 */
    {"What is the correct way to prevent overflow when multiplying two ints?",
        {"i = j * (long)j;",    // 0 == A
         "i = j * j",           // 1 == B
         "i = (long) j * j;",   // 2 == C
         "i = (long)(j * j);"}, // 3 == D
        2,                      // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #7 */
    {"Which cast will convert an int to double in division?",
        {"(float)dividend / divisor",    // 0 == A
         "(long)dividend / divisor",     // 1 == B
         "(int)dividend / divisor",      // 2 == C
         "(double)dividend / divisor"},  // 3 == D
        3,                               // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #8 */
    {"Which floating type in C offers the highest level of precision?",
        {"double",       // 0 == A
         "long double",  // 1 == B
         "extended",     // 2 == C
         "float"},       // 3 == D
        1,               // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #9 */
    {"How do you specify a float constant explicitly?",
        {"3.14F",   // 0 == A
         "3.14",    // 1 == B
         "F3.14",   // 2 == C
         "3.14L"},  // 3 == D
        0,          // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #10 */
    {"What does the typedef \"typedef int Bool;\" do?",
        {"Creates a type alias for int",  // 0 == A
         "Changes bool's size",           // 1 == B
         "Makes a new integer type",      // 2 == C
         "Defines a macro"},              // 3 == D
        0,                                // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #11 */
    {"Which header defines types like size_t?",
        {"limits.h",                             // 0 == A
         "string.h",                             // 1 == B
         "stdio.h",                              // 2 == C
         "typedefs in the C standard library"},  // 3 == D
        3,                                       // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #12 */
    {"What is the ASCII value of 'A'?",
        {"48",   // 0 == A
         "65",   // 1 == B
         "32",   // 2 == C
         "97"},  // 3 == D
        1,       // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #13 */
    {"Which of these reads a single character using scanf?",
        {"scanf(\"\%s\", \&ch);",   // 0 == A
         "scanf(\"\%d\", \&ch);",   // 1 == B
         "scanf(\"\%f\", \&ch);",   // 2 == C
         "scanf(\"\%c\", \&ch);"},  // 3 == D
        3,                          // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #14 */
    {"How does getchar() differ from scanf()?",
        {"It returns a char",                             // 0 == A
         "It skips white space",                          // 1 == B
         "It reads one character, including whitespace",  // 2 == C
         "It reads an entire line"},                      // 3 == D
        2,                                                // Answer = (2 == B)
        "HINT: "},

    /* QUESTION #15 */
    {"Which loop skips characters until a newline using getchar()?",
        {"do { ch = getchar(); } while (ch == '\\n');",   // 0 == A
         "while (ch != '');",                             // 1 == B
         "do { ch = getchar(); } while (ch == '');",      // 2 == C
         "do { ch = getchar(); } while (ch != '\\n');"},  // 3 == D
        3,                                                // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #16 */
    {"What is the purpose of toupper(ch)?",
        {"Tests if a character is alphabet",  // 0 == A
         "Converts a number to character",    // 1 == B
         "Converts character to uppercase",   // 2 == C
         "Converts character to lowercase"},  // 3 == D
        2,                                    // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #17 */
    {"Which header must be included to use toupper()",
        {"string.h",   // 0 == A
         "stdio.h",    // 1 == B
         "stdbool.h",  // 2 == C
         "ctype.h"},   // 3 == D
        3,             // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #18 */
    {"Which format specifier is used to print a float value?",
        {"\%ld",  // 0 == A
         "\%c",   // 1 == B
         "\%f",   // 2 == C
         "\%d"},  // 3 == D
        2,        // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #19 */
    {"Which of the following is a character constant?",
        {"A",        // 0 == A
         "'A'",      // 1 == B
         "\"A\"",    // 2 == C
         "char A"},  // 3 == D
        1,           // Answer = (1 == B)
        "HINT: "},
    
    /* QUESTION #20 */
    {"What is the output of the following?:\n\nchar ch = 'b';\nch = ch + 3;",
        {"'k'",   // 0 == A
         "'d'",   // 1 == B
         "'u'",   // 2 == C
         "'e'"},  // 3 == D
        3,        // Answer = (3 == D)
        "HINT: "},

#define NQ ((int)(sizeof quiz / sizeof quiz[0]))

/* ---------- helpers ---------- */
static void shuffle_int_array(int *a, int n) {
    for (int i = n - 1; i > 0; --i) {
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

    printf("\nWelcome to Summer C: 2025 COP-3514 Quiz #3 -- Chapter 7 Multiple Choice Review (enter Q/q to quit)\n\n");

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
