/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 8 Quiz Bank
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

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #3 -> 5 - Chapter 8  */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What does int a[10]; do in C?",
        {"Allocates memory dynamically for 10 variables",  // 0 == A
         "Declares an array of 10 integers",               // 1 == B
         "Declares an integer with value 10",              // 2 == C
         "Initializes 10 arrays with default values"},     // 3 == D
        1,                                                 // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #2 */
    {"Why is #define N 10 often used when declaring arrays?",
        {"It allows easy updates to array size",    // 0 == A
         "It makes code easier to debug",           // 1 == B
         "It automatically initializes the array",  // 2 == C
         "It improves runtime performance"},        // 3 == D
        0,                                              // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #3 */
    {"Which of these is a valid way to initialize an array?",
        {"array a = [1, 2, 3];",  // 0 == A
         "int a[] = (1, 2, 3);",  // 1 == B
         "int a = {1, 2, 3};",    // 2 == C
         "int a[] = 10;"},        // 3 == D
        1,                        // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #4 */
    {"What happens if you access an array index outside its declared size in C?",
        {"The program stops automatically",    // 0 == A
         "It gives a compile-time error",      // 1 == B
         "It results in undefined behavior",   // 2 == C
         "It results in undefined behavior"},  // 3 == D
        3,                                     // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #5 */
    {"What is the index of the first element in a C array?",
        {"1",                          // 0 == A
         "Depends on the array type",  // 1 == B
         "0",                          // 2 == C
         "-1"},                        // 3 == D
        3,                             // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #6 */
    {"What is stored in an array if it's only partially initialized?",
        {"Previous values in memory",        // 0 == A
         "Random values",                    // 1 == B
         "Remaining elements are set to 0",  // 2 == C
         "Compile-time error"},              // 3 == D
        2,                                   // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #7 */
    {"What type of loop is commonly used to traverse an array?",
        {"for loop",       // 0 == A
         "do-while loop",  // 1 == B
         "switch loop",    // 2 == C
         "while loop"},    // 3 == D
        0,                 // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #8 */
    {"What happens when you assign a value to a[5] in a 5-element array?",
        {"It stores at the last element",  // 0 == A
         "It returns 0",                   // 1 == B
         "It gives a warning",             // 2 == C
         "It causes undefined behavior"},  // 3 == D
        3,                                 // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #9 */
    {"What is the correct syntax to read values into an array?",
        {"scanf(\"\%d\", &a);",     // 0 == A
         "scanf(a[i]);",            // 1 == B
         "scanf(\"\%d\", &a[i]);",  // 2 == C
         "scanf(\"\%d\", &a);"},    // 3 == D
        2,                          // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #10 */
    {"What is the maximum index in int b[100]; ?",
        {"99",   // 0 == A
         "100",  // 1 == B
         "101",  // 2 == C
         "98"},  // 3 == D
        0,       // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #11 */
    {"How are array elements stored in memory in C?",
        {"Alternating",   // 0 == A
         "Reversed",      // 1 == B
         "Contiguously",  // 2 == C
         "Randomly"},     // 3 == D
        2,                // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #12 */
    {"Which of the following is NOT allowed?",
        {"int a[] = (1, 2);",  // 0 == A
         "int x[10];",         // 1 == B
         "int b[0];",          // 2 == C
         "x[2] = 5;"},         // 3 == D
        2,                     // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #13 */
    {"Can arrays be returned directly from a function in C?",
        {"Yes, using structs only",           // 0 == A
         "No, arrays are constants",          // 1 == B
         "No, but you can return a pointer",  // 2 == C
         "Yes, as arrays"},                   // 3 == D
        2,                                    // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #14 */
    {"Which operator is used to access array elements?",
        {"[] (brackets)",  // 0 == A
         ". (dot)",        // 1 == B
         "&",              // 2 == C
         "->"},            // 3 == D
        0,                 // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #15 */
    {"What does the following do? int a[2] = {5};",
        {"Causes an error",           // 0 == A
         "Skips initialization",      // 1 == B
         "Initializes all to 5",      // 2 == C
         "Sets a[0] = 5, a[1] = 0"},  // 3 == D
        3,                            // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #16 */
    {"How are 2D arrays declared in C?",
        {"int a = [3][4];",  // 0 == A
         "array a(3, 4);",   // 1 == B
         "int a [3][4];",    // 2 == C
         "int a[3, 4];"},    // 3 == D
        2,                   // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #17 */
    {"What is the row-major order in C?",
        {"Row-wise storage",     // 0 == A
         "Reverse storage",      // 1 == B
         "Column-wise storage",  // 2 == C
         "Bitwise mapping"},     // 3 == D
        0,                       // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #18 */
    {"Can a 2D array be partially initialized?",
        {"No",                                    // 0 == A
         "Yes, and rest stay uninitialized",      // 1 == B
         "Yes, and remaining elements become 0",  // 2 == C
         "Only for first row"},                   // 3 == D
        2,                                        // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #19 */
    {"How many elements are in int x[][3] = {{1, 2, 3}, {4, 5, 6}}; ?",
        {"0",                                 // 0 == A
         "9",                                 // 1 == B
         "3",                                 // 2 == C
         "2 rows, 3 columns -> 6 elements"},  // 3 == D
        3,                                    // Answer = (3 == D)
        "HINT: "},
    
    /* QUESTION #20 */
    {"What is the output of the following code?\n\nint a[] = {1, 2, 3};\nprintf(\"\%d\", a[1]);",
        {"Garbage value",  // 0 == A
         "0",              // 1 == B
         "2",              // 2 == C
         "1"},             // 3 == D
        2,                 // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #21 */
    {"What will sizeof(a) return in this code?\n\nint a[5];\nAssume int is 4 bytes",
        {"4",    // 0 == A
         "8",    // 1 == B
         "10",   // 2 == C
         "20"},  // 3 == D
        3,       // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #22 */
    {"How can you initialize all values of an integer array to zero?",
        {"int a[5] = 0;",         // 0 == A
         "int a[] = {1, 1, 1};",  // 1 == B
         "int a[5] = {0};",       // 2 == C
         "int a = {0};"},         // 3 == D
        2,                        // Answer = (2 == C)
        "HINT: "},
    
    /* QUESTION #23 */
    {"What's the correct way to loop through an array a[5]?",
        {"for (i = 0; i <= 5; i++)",   // 0 == A
         "for (i = 0; i < 5; i++)",    // 1 == B
         "for (i = 1; i < 5; i++)",    // 2 == C
         "for (i = 1; i <= 5; i++)"},  // 3 == D
        1,                             // Answer = (1 == B)
        "HINT: "},

    /* QUESTION #24 */
    {"What is printed by this code?\n\nint arr[] = {4, 5, 6};\nprintf(\"\%d\", arr[3]);",
        {"5",                       // 0 == A
         "4",                       // 1 == B
         "Garbage value or crash",  // 2 == C
         "6"},                      // 3 == D
        2,                          // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #25 */
    {"Which of these is valid syntax to pass an array to a function?",
        {"All of the above",         // 0 == A
         "void foo(int* arr);",      // 1 == B
         "void foo(int arr[]);",     // 2 == C
         "void foo(int arr[10]);"},  // 3 == D
        0,                           // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #26 */
    {"Can you assign arrays directly in C like arr1 = arr2; ?",
        {"Yes",                               // 0 == A
         "Only for character arrays",         // 1 == B
         "No, must copy element-by-element",  // 2 == C
         "Only for static arrays"},           // 3 == D
        2,                                    // Answer = (2 == C)
        "HINT: "},

    /* QUESTION #27 */
    {"How do you declare a 2D array of 3 rows and 4 columns?",
        {"int a[12];",     // 0 == A
         "array[3, 4];",   // 1 == B
         "int a[4][3];",   // 2 == C
         "int a[3][4];"},  // 3 == D
        3,                 // Answer = (3 == D)
        "HINT: "},

    /* QUESTION #28 */
    {"How are arrays passed to functions?",
        {"By reference (pointers)",  // 0 == A
         "Not allowed",              // 1 == B
         "By value",                 // 2 == C
         "By address copy"},         // 3 == D
        0,                           // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #29 */
    {"What is printed by the following code?\n\nint a[3] = {1, 2, 3};\nint *p = a;\nprintf(\"\%d\", *(p + 2));",
        {"3",       // 0 == A
         "1",       // 1 == B
         "2",       // 2 == C
         "Error"},  // 3 == D
        0,          // Answer = (0 == A)
        "HINT: "},

    /* QUESTION #30 */
    {"Which function can copy arrays safely in C?",
        {"alloca()",  // 0 == A
         "strcpy()",  // 1 == B
         "memcpy()",  // 2 == C
         "asign()"},  // 3 == D
        2,            // Answer = (2 == C)
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

    printf("\nWelcome to Summer C: 2025 COP-3514 Quiz #4 -- Chapter 8 Multiple Choice Review (enter Q/q to quit)\n\n");

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
