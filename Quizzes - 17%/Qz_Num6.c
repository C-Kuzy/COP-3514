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
        "HINT: Think about how string literals are stored in memory at compile time."},

    /* QUESTION #2 */
    {"What type does a string literal like \"abc\" decay to when used in an expression or passed to a function in C?",
        {"char *",   // 0 == A
         "int *",    // 1 == B
         "char[]",   // 2 == C
         "string"},  // 3 == D
        0,           // Answer = (0 == A)
        "HINT: Arrays in C often become something else when used as function arguments."},

    /* QUESTION #3 */
    {"How many bytes are set aside for the string \"abc\" in memory?",
        {"5",  // 0 == A
         "It depends on the compiler",  // 1 == B
         "8",   // 2 == C
         "4"},  // 3 == D
        3,        // Answer = (3 == D)
        "HINT: Don't forget the special character at the end of every string."},

    /* QUESTION #4 */
    {"What character is used to mark the end of a string in C?",
        {"\\0",   // 0 == A
         "\\n",   // 1 == B
         "\\t",   // 2 == C
         "\\e"},  // 3 == D
        0,        // Answer = (0 == A)
        "HINT: This character signals the end of a string in memory."},

    /* QUESTION #5 */
    {"Which of the following creates a null pointer to a string?",
        {"char s[] = \"NULL\";",  // 0 == A
         "char *s = NULL",        // 1 == B
         "char s[] = \"\"",       // 2 == C
         "char *s = \"\\n\""},    // 3 == D
        1,                        // Answer = (1 == B)
        "HINT: A null pointer means it doesn't point to any valid memory location."},

    /* QUESTION #6 */
    {"Which of the following correctly defines an empty string (a null string containing only '0')?",
        {"char s[] = \"\"",      // 0 == A
         "char *s = NULL;",      // 1 == B
         "char *s = \"\n\"",     // 2 == C
         "char s[] = \"NULL\""}, // 3 == D
        0,                       // Answer = (0 == A)
        "HINT: An empty string still has a special character at the end."},

    /* QUESTION #7 */
    {"What will the following code do?\n\nchar *p = \"abc\";\n*p = 'z';",
        {"Change 'a' to 'z'",         // 0 == A
         "Compile but do nothing",    // 1 == B
         "Cause undefined behavior",  // 2 == C
         "Produce a warning"},        // 3 == D
        2,                            // Answer = (2 == C)
        "HINT: Modifying string literals can be risky in C."},

    /* QUESTION #8 */
    {"What does this declaration define: char date1[8] = \"June 15\" ?",
        {"A char pointer",                             // 0 == A
         "A string literal",                           // 1 == B
         "An incomplete array",                        // 2 == C
         "A character array with a null terminator"},  // 3 == D
        3,                                             // Answer = (3 == D)
        "HINT: The array size matches the string length plus something extra."},

    /* QUESTION #9 */
    {"What size must a character array have to hold an 80 character string?",
        {"79",   // 0 == A
         "80",   // 1 == B
         "83",   // 2 == C
         "81"},  // 3 == D
        3,       // Answer = (3 == D)
        "HINT: Remember to leave space for the end-of-string marker."},

    /* QUESTION #10 */
    {"Why is it dangerous to define a char array as a char date3[7] = \"June 15\"; ?",
        {"Cannot store the null character",  // 0 == A
         "Invalid array declaration",        // 1 == B
         "Too much memory",                  // 2 == C
         "Won't compile"},                   // 3 == D
        0,                                   // Answer = (0 == A)
        "HINT: Every string in C must have room for a special character at the end."},

    /* QUESTION #11 */
    {"Which of the following is legal for declaring a string?",
        {"string date = \"July\";",          // 0 == A
         "char date[] = {'July'};",          // 1 == B
         "char *date = {'J','u','l','y'};",  // 2 == C
         "char date[] = \"July 4\";"},       // 3 == D
        3,                                   // Answer = (3 == D)
        "HINT: Pay attention to the type and initializer used for string declarations."},

    /* QUESTION #12 */
    {"What is the major difference between char *date = \"June 15\"; and char date[] = \"June 15\";",
        {"Both are pointers",                        // 0 == A
         "One is mutable, one is not",               // 1 == B
         "They both point to different data types",  // 2 == C
         "Only one has a null terminator"},          // 3 == D
        1,                                           // Answer = (1 == B)
        "HINT: Consider which one allows you to change the string contents."},

    /* QUESTION #13 */
    {"What is the output of printf(\"\%s\", str); if str[] = \"fun\"?",
        {"fun",      // 0 == A
         "\"FUN\"",  // 1 == B
         "f",        // 2 == C
         "str"},     // 3 == D
        0,           // Answer = (0 == A)
        "HINT: The format specifier prints the entire string up to a certain character."},

    /* QUESTION #14 */
    {"What causes scanf(\"\%s\", str); to stop reading?",
        {"A whitespace",  // 0 == A
         "A comma",       // 1 == B
         "An integer",    // 2 == C
         "A period"},     // 3 == D
        0,                // Answer = (0 == A)
        "HINT: This character separates words in standard input."},

    /* QUESTION #15 */
    {"What issue occurs if you don't use bounds with scanf(\"\%s\", str); ?",
        {"Nothing",           // 0 == A
         "Syntax error",      // 1 == B
         "Logical error",     // 2 == C
         "Buffer overflow"},  // 3 == D
        3,                    // Answer = (3 == D)
        "HINT: Inputting more characters than the array can hold can cause this problem."},

    /* QUESTION #16 */
    {"What does scanf(\"\%20s\", str); do differently than scanf(\"\%s\", str); ?",
        {"Reads until null",          // 0 == A
         "Reads only 20 characters",  // 1 == B
         "Stops after a newline",     // 2 == C
         "Writes 20 spaces"},         // 3 == D
        1,                            // Answer = (1 == B)
        "HINT: The number in the format string limits how much is read."},

    /* QUESTION #17 */
    {"if sentence[21] is defined as char sentence[SENT_LEN+1], how many characters can it store?",
        {"19",         // 0 == A
         "Unlimited",  // 1 == B
         "21",         // 2 == C
         "20"},        // 3 == D
        3,             // Answer = (3 == D)
        "HINT: The extra space is for something special at the end of the string."},

    /* QUESTION #18 */
    {"When entering: To C, or not to C, how much will scanf(\"\%s\", str); capture?",
        {"The full sentence",  // 0 == A
         "Only To",            // 1 == B
         "Nothing",            // 2 == C
         "Only To C"},         // 3 == D
        1,                     // Answer = (1 == B)
        "HINT: This function stops reading at the first whitespace."},

    /* QUESTION #19 */
    {"Which user-defined function from the following stops at the first newline and discards the rest of the line?\n\nint i;\nfor (i = 1; i < argc; i++)\n  printf(\"\%s\\n\", argv[i]);",
        {"read_line()",  // 0 == A
         "scanf()",      // 1 == B
         "getline()",    // 2 == C
         "gets()"},      // 3 == D
        0,               // Answer = (0 == A)
        "HINT: This function is often written to safely read a line of input."},
    
    /* QUESTION #20 */
    {"Which POSIX function reads an entire line from standard input, stopping at the newline?",
        {"read_line()",  // 0 == A
         "getline()",    // 1 == B
         "scanf()",      // 2 == C
         "gets()"},      // 3 == D
        1,               // Answer = (1 == B)
        "HINT: This function is available on Unix-like systems and handles lines of any length."},

    /* QUESTION #21 */
    {"What is the significance of #define STR_LEN 10 in main()?",
        {"Makes a null character",  // 0 == A
         "Sets string value",       // 1 == B
         "Counts newlines",         // 2 == C
         "Sets max characters"},    // 3 == D
        3,                          // Answer = (3 == D)
        "HINT: This constant is used to limit the size of arrays or input."},

    /* QUESTION #22 */
    {"What's the result of using gets() for string input?",
        {"Possible overflow",    // 0 == A
         "No effect",            // 1 == B
         "Safe input",           // 2 == C
         "Ignores whitespace"},  // 3 == D
        0,                       // Answer = (A == 0)
        "HINT: This function does not check how much data is read into the buffer."},
    
    /* QUESTION #23 */
    {"How many characters are stored in char name[] = \"Bob\"; ?",
        {"5",              // 0 == A
         "Depends on OS",  // 1 == B
         "4",              // 2 == C
         "3"},             // 3 == D
        2,                 // Answer = (2 == C)
        "HINT: Don't forget to count the special character at the end."},

    /* QUESTION #24 */
    {"What does char *p = \"abc\"; point to?",
        {"Null character",        // 0 == A
         "Second character",      // 1 == B
         "Array address",         // 2 == C
         "First character 'a'"},  // 3 == D
        3,                        // Answer = (3 == D)
        "HINT: The pointer starts at the beginning of the string literal."},

    /* QUESTION #25 */
    {"Which line is invalid?",
        {"char ch[] = \"cd\";",  // 0 == A
         "char *ch = \"ab\";",   // 1 == B
         "char *ch = 'x';",      // 2 == C
         "char ch = 89;"},       // 3 == D
        2,                       // Answer = (2 == C)
        "HINT: Pay attention to the difference between single and double quotes in declarations."},

    /* QUESTION #26 */
    {"What happens if a string isn't null-terminated?",
        {"It causes garbage or crash",  // 0 == A
         "Nothing",                     // 1 == B
         "It prints blank",             // 2 == C
         "Stops at the first letter"},  // 3 == D
        0,                              // Answer = (0 == A)
        "HINT: Functions that print or process strings rely on a special character to know where to stop."},

    /* QUESTION #27 */
    {"Which string operation causes undefined behavior?",
        {"printf(\"\%s\", str);",                  // 0 == A
         "strcpy(dest, src);",                     // 1 == B
         "*p = 'z'; where p points to a literal",  // 2 == C
         "strlen(str);"},                          // 3 == D
        2,                                         // Answer = (2 == C)
        "HINT: Modifying string literals is not allowed in C."},

    /* QUESTION #28 */
    {"Which of the following correctly accesses the 3rd character in a string str?",
        {"*(str + 2)",  // 0 == A
         "str[3]",      // 1 == B
         "str + 2",     // 2 == C
         "*str[2]"},    // 3 == D
        0,              // Answer = (0 == A)
        "HINT: Remember how pointer arithmetic and array indexing work together."},

    /* QUESTION #29 */
    {"Which is the safest way to prevent buffer overflow using scanf?",
        {"Use fgets()",                               // 0 == A
         "Avoid input functions",                     // 1 == B
         "Use scanf(\"\%ns\", str); with n defined",  // 2 == C
         "Use gets()"},                               // 3 == D
        2,                                            // Answer = (2 == C)
        "HINT: Limiting the number of characters read helps prevent overwriting memory."},

    /* QUESTION #30 */
    {"Which function version reads characters one by one using pointer notation?",
        {"while ((ch = getchar()) != '\\n')",  // 0 == A
         "str[i++] = ch;",                     // 1 == B
         "for (p = s; *p != '\\0'; p++)",      // 2 == C
         "scanf(\"\%s\", str)"},               // 3 == D
        2,                                     // Answer = (2 == C)
        "HINT: This loop uses a pointer to move through each character in the string."},
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
