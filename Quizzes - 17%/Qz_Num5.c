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
        "HINT: Try writing out the sequence for a few values to see the pattern."},

    /* QUESTION #2 */
    {"Which is NOT a major element of a C program?",
        {"External variable declarations",  // 0 == A
         "Preprocessing directives",        // 1 == B
         "Memory map templates",            // 2 == C
         "Function definitions"},           // 3 == D
        2,                                  // Answer = (2 == C)
        "HINT: Consider which items are actually part of C syntax and structure."},

    /* QUESTION #3 */
    {"Where should #include directives appear in a well-organized C program?",
        {"After the main()",             // 0 == A
         "After external declarations",  // 1 == B
         "After function definitions",   // 2 == C
         "At the beginning"},            // 3 == D
        3,                               // Answer = (3 == D)
        "HINT: Think about what needs to be processed before any code is compiled."},

    /* QUESTION #4 */
    {"Which of the following describes local variable scope?",
        {"Function scope",  // 0 == A
         "Global scope",    // 1 == B
         "Block scope",     // 2 == C
         "File scope"},     // 3 == D
        2,                  // Answer = (2 == C)
        "HINT: Consider where a variable is accessible if declared inside curly braces."},

    /* QUESTION #5 */
    {"What is the scope of a function parameter",
        {"Block scope",     // 0 == A
         "Loop scope",      // 1 == B
         "File scope",      // 2 == C
         "Program scope"},  // 3 == D
        0,                  // Answer = (0 == A)
        "HINT: Think about where parameters can be used within a function."},

    /* QUESTION #6 */
    {"What is the output of storage.c with a local counter inside fn()?",
        {"0, 1, 2, 3, 4"    // 0 == A
         "1, 1, 1, 1, 1",   // 1 == B
         "5, 5, 5, 5, 5",   // 2 == C
         "1, 2, 3, 4, 5"},  // 3 == D
        1,                  // Answer = (1 == B)
        "HINT: Consider how local variables behave each time a function is called."},

    /* QUESTION #7 */
    {"What is the disadvantage of using global variables?",
        {"Easier parameter passing",     // 0 == A
         "Harder to reuse functions",    // 1 == B
         "Faster execution",             // 2 == C
         "Improved memory management"},  // 3 == D
        1,                               // Answer = (1 == B)
        "HINT: Think about how global variables affect modularity and code reuse."},

    /* QUESTION #8 */
    {"Why should variable i be local in a program?",
        {"To allow recursion",           // 0 == A
         "To avoid unintended sharing",  // 1 == B
         "To reduce memory use",         // 2 == C
         "To avoid syntax errors"},      // 3 == D
        1,                               // Answer = (1 == B)
        "HINT: Consider what happens if multiple functions use the same variable name."},

    /* QUESTION #9 */
    {"Which symbol is used to declare pointer variables in C?",
        {"ptr",   // 0 == A
         "&",     // 1 == B
         "*",     // 2 == C
         "ref"},  // 3 == D
        2,        // Answer = (2 == C)
        "HINT: Look for the symbol that appears in pointer declarations and dereferencing."},

    /* QUESTION #10 */
    {"What does \%p in printf print?",
        {"Pointer value",      // 0 == A
         "Dereferenced data",  // 1 == B
         "Pointer address",    // 2 == C
         "Character"},         // 3 == D
        2,                     // Answer = (2 == C)
        "HINT: This format specifier is used for displaying memory locations."},

    /* QUESTION #11 */
    {"What happens if you use an uninitialized pointer?",
        {"Compilation error",    // 0 == A
         "Runtime warning",      // 1 == B
         "It works fine",        // 2 == C
         "Undefined behavior"},  // 3 == D
        3,                       // Answer = (3 == D)
        "HINT: Consider what happens when a pointer doesn't point to a valid address."},

    /* QUESTION #12 */
    {"What operator is used to access the value a pointer points to?",
        {"*",    // 0 == A
         "#",    // 1 == B
         "\%",   // 2 == C
         "->"},  // 3 == D
        0,       // Answer = (0 == A)
        "HINT: This operator is used for dereferencing pointers."},

    /* QUESTION #13 */
    {"What operator gets the address of a variable?",
        {"#",   // 0 == A
         "&",   // 1 == B
         "~",   // 2 == C
         "*"},  // 3 == D
        1,      // Answer = (1 == B)
        "HINT: This operator is used to obtain the memory location of a variable."},

    /* QUESTION #14 */
    {"If p points to i, what does *p = 2 do?",
        {"Throws an error",  // 0 == A
         "Sets &i to 2",     // 1 == B
         "Sets i to 2",      // 2 == C
         "Sets p to 2"},     // 3 == D
        2,                   // Answer = (2 == C)
        "HINT: Think about what happens when you assign a value to what a pointer references."},

    /* QUESTION #15 */
    {"Which assignment is illegal if i is int and p and q are int pointers?",
        {"p = i;",     // 0 == A
         "p = &i;",    // 1 == B
         "p = q;",     // 2 == C
         "p = *&q;"},  // 3 == D
        0,             // Answer = (0 == A)
        "HINT: Consider the types involved in each assignment."},

    /* QUESTION #16 */
    {"What is the output of the scope exercise?\n\nint i;\nvoid f(int i) {\n  i = 1;\n}\n\nvoid g(void) {\n  int i = 2;\n  if (i > 0) {\n    int i;\n     i = 3;\n  }\n  i = 4;\n}\n\nvoid h(void) {\n  i = 5;\n}",
        {"6 3 2 3",   // 0 == A
         "2 2 2 2",   // 1 == B
         "2 3 2 3",   // 2 == C
         "6 2 2 2"},  // 3 == D
        0,            // Answer = (0 == A)
        "HINT: Pay attention to how variable shadowing affects values in different scopes."},

    /* QUESTION #17 */
    {"Which of the following is a valid pointer declaration?",
        {"int p*;",  // 0 == A
         "*int p;",  // 1 == B
         "p *int;",  // 2 == C
         "int *p"},  // 3 == D
        3,           // Answer = (3 == D)
        "HINT: The placement of the asterisk is important in pointer declarations."},

    /* QUESTION #18 */
    {"What type of memory is automatically deallocated at the end of a function?",
        {"Automatic",   // 0 == A
         "Global",      // 1 == B
         "File-Scope",  // 2 == C
         "Static"},     // 3 == D
        0,              // Answer = (0 == A)
        "HINT: This type of memory is associated with local variables."},

    /* QUESTION #19 */
    {"What does a block scope mean for a variable?",
        {"It is visible only within it's block",  // 0 == A
         "It overrides the main scope",           // 1 == B
         "It is available everywhere",            // 2 == C
         "It is global unless static"},           // 3 == D
        0,                                        // Answer = (0 == A)
        "HINT: Consider where curly braces start and end a variable's visibility."},
    
    /* QUESTION #20 */
    {"What happens when a variable declared inside a block has the same name as an external variable?",
        {"An error occurs",                               // 0 == A
         "The internal variable hides the external one",  // 1 == B
         "The external one overrides",                    // 2 == C
         "They share the same value"},                    // 3 == D
        1,                                                // Answer = (1 == B)
        "HINT: Think about which variable is accessed inside the block."},

    /* QUESTION #21 */
    {"Why are global variables risky in multi-function programs?",
        {"They must be passed explicitly",        // 0 == A
         "They aren't visible to all functions",  // 1 == B
         "They consume too much memory",          // 2 == C
         "Bugs are harder to trace"},             // 3 == D
        3,                                        // Answer = (3 == D)
        "HINT: Consider how changes to global variables can affect debugging."},

    /* QUESTION #22 */
    {"Which keyword do you use to create a pointer to a double?",
        {"*double",          // 0 == A
         "ref double",       // 1 == B
         "pointer<double>",  // 2 == C
         "double x;"},       // 3 == D
        0,                   // Answer = (0 == A)
        "HINT: The symbol used for pointers is the same for all types."},
    
    /* QUESTION #23 */
    {"Why is it generally better to use parameters instead of global variables for communication between functions?",
        {"It improves reusability and clarity",  // 0 == A
         "It increases compilation speed",       // 1 == B
         "It prevents pointer errors",           // 2 == C
         "It saves memory"},                     // 3 == D
        0,                                       // Answer = (0 == A)
        "HINT: Think about how functions can be reused in different contexts."},

    /* QUESTION #24 */
    {"What would be the correct way to declare multiple pointer variables to int?",
        {"\"int *p; int *q;\" or \"int *p, *q;\"",  // 0 == A
         "\"int p, *q;\" or \"int p; int *q;\"",    // 1 == B
         "\"int *p, q;\" or \"int *p; int q;\"",    // 2 == C
         "\"int* p, q;\" or \"int p; int q;\""},    // 3 == D
        0,                                          // Answer = (0 == A)
        "HINT: Each pointer variable needs its own asterisk."},

    /* QUESTION #25 */
    {"Which of the following is a good reason to avoid global variables in large programs?",
        {"They lead to hidden dependencies",   // 0 == A
         "They can't be declared in headers",  // 1 == B
         "They always use more memory",        // 2 == C
         "They make the code run slower"},     // 3 == D
        0,                                     // Answer = (0 == A)
        "HINT: Consider how global variables can affect program structure and maintenance."},

    /* QUESTION #26 */
    {"What is the scope of a variable declared inside an if block?",
        {"Until program termination",                            // 0 == A
         "File scope",                                           // 1 == B
         "The entire function",                                  // 2 == C
         "From it's declaration to the end of the block only"},  // 3 == D
        3,                                                       // Answer = (3 == D)
        "HINT: The variable is only accessible within the curly braces where it was declared."},

    /* QUESTION #27 */
    {"Which of the following accurately describes the default behavior of a local variable in C?",
        {"It retains its value between function calls",       // 0 == A
         "It is re-initialized on every call and discarded",  // 1 == B
         "It must be passed by reference",                    // 2 == C
         "It is stored in ROM"},                              // 3 == D
        1,                                                    // Answer = (1 == B)
        "HINT: Local variables do not keep their values after a function ends."},

    /* QUESTION #28 */
    {"What is the main purpose of using pointer variables in C?",
        {"To make global variables more accessible",         // 0 == A
         "To access arrays only",                            // 1 == B
         "To simplify loops",                                // 2 == C
         "To work with memory addresses and dynamic data"},  // 3 == D
        3,                                                   // Answer = (3 == D)
        "HINT: Pointers allow you to manipulate memory directly."},

    /* QUESTION #29 */
    {"What is printed?\n\nint main() {\n  int b = 4, *q;\n  q = &b;\n  *q = 9;\n  printf(\"\%d \%d\", b, *q);\n  return 0;\n}",
        {"9 4",  // 0 == A
         "9 9",  // 1 == B
         "4 4",  // 2 == C
         "4 9"}, // 3 == D
        1,       // Answer = (1 == B)
        "HINT: Changing the value through a pointer affects the original variable."},

    /* QUESTION #30 */
    {"Given the array int a[] = {3, 5, 7};, what does *(a + 1) evaluate to?",
        {"Address of a[1]", // 0 == A
         "5",               // 1 == B
         "3",               // 2 == C
         "a[0]"},           // 3 == D
        1,                  // Answer = (1 == B)
        "HINT: Pointer arithmetic lets you access elements by offset from the start."},
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
