/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 22 Quiz Bank
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

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #7 -> 8 - Chapter 22  */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What does buffering in file I/O primarily help with in C programming?",
        {"Enhancing speed by reducing disk access",  // 0 == A
         "Sorting data before saving",               // 1 == B
         "Converting binary to text",                // 2 == C
         "Compressing data before writing"},         // 3 == D
        0,                                           // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #2 */
    {"When does the automatic buffer flush occur in C's file handling?",
        {"When the buffer is full or the file is closed",  // 0 == A
         "After each byte is read",                        // 1 == B
         "When explicitly flushed using flush only",       // 2 == C
         "When fclose is called only"},                    // 3 == D
        0,                                                 // Answer = (0 == A)
        "HINT:"},

    /* QUESTION #3 */
    {"What is the return type of fopen()?",
        {"int",     // 0 == A
         "char*",   // 1 == B
         "void*",   // 2 == C
         "FILE*"},  // 3 == D
        3,          // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #4 */
    {"What will fopen(\"file.txt\", \"r\") return if the file doesn't exist?",
        {"\"file.txt\"",  // 0 == A
         "0",             // 1 == B
         "NULL",          // 2 == C
         "-1"},           // 3 == D
        2,                // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #5 */
    {"What does the \"a\" mode fopen() do?",
        {"Opens for writing and truncates",  // 0 == A
         "Opens in binary mode",             // 1 == B
         "Opens for appending",              // 2 == C
         "Opens for reading only"},          // 3 == D
        2,                                   // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #6 */
    {"What must be checked immediately after calling fopen()?",
        {"Whether return value is NULL",    // Whether return value is NULL
         "Return value is greater than 0",  // Return value is greater than 0
         "File permissions",                // File permissions
         "File contents"},                  // File contents
        0,                                  // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #7 */
    {"What does the following code do?\n\n FILE *f = fopen(\"a.txt\", \"r\");",
        {"Creates a.txt",             // 0 == A
         "Writes to a.txt",           // 1 == B
         "Appends to a.txt",          // 2 == C
         "Reads file if it exists"},  // 3 == D
        3,                            // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #8 */
    {"What is EOF typically used for in file operations?",
        {"To signal an error or end-of-file",  // 0 == A
         "To end a line",                      // 1 == B
         "To indicate file closed",            // 2 == C
         "To terminate strings"},              // 3 == D
        0,                                     // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #9 */
    {"What is the correct signature of fgets() for reading from files?",
        {"char* fgets(FILE*, char*, int)",  // 0 == A
         "int fgets(char*, FILE*, int)",    // 1 == B
         "char* fgets(char*, int, FILE*)",  // 2 == C
         "char fgets(int, char*, FILE*)"},  // 3 == D
        2,                                  // Answer = (2 == C)
        "HINT: "},
        
    /* QUESTION #10 */
    {"Which function closes an opened file?",
        {"endfile()",    // 0 == A
         "closefile()",  // 1 == B
         "fclose()",     // 2 == C
         "fend()"},      // 3 == D
        2,               // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #11 */
    {"What happens if you forget to call fclose()?",     
        {"The system closes it automatically",           // 0 == A
         "Nothing happens",                              // 1 == B
         "File remains open and data may not be saved",  // 2 == C
         "Compilation fails"},                           // 3 == D
        2,                                               // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #12 */
    {"Which function is ideal for writing a string to a file?",
        {"fgets()",     // 0 == A
         "fputs()",     // 1 == B
         "write()",     // 2 == C
         "fprintf()"},  // 3 == D
        1,              // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #13 */
    {"Why is FILE* used instead of int in file operations?",
        {"To hide complexity",                                      // 0 == A
         "Because it saves memory",                                 // 1 == B
         "Because int cannot return EOF",                           // 2 == C
         "Because FILE* is the only return type allowed by ANSI"},  // 3 == D
        0,                                                          // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #*/
    {"",
        {"",
         "",
         "",
         ""},
        ,
        ""},

    /* QUESTION #*/
    {"",
        {"",
         "",
         "",
         ""},
        ,
        ""},

    /* QUESTION #*/
    {"",
        {"",
         "",
         "",
         ""},
        ,
        ""},

    /* QUESTION #*/
    {"",
        {"",
         "",
         "",
         ""},
        ,
        ""},

    /* QUESTION #*/
    {"",
        {"",
         "",
         "",
         ""},
        ,
        ""},

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

    printf("\nWelcome to Summer C: 2025 COP-3514 Quiz #8 -- Chapter 22 Multiple Choice Review (enter Q/q to quit)\n\n");

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
