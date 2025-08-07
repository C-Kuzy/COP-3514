/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 6 Quiz Bank
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

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #2 -> 3 - Chapter 6  */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What Unix text editor is guaranteed to be available on most systems?\n",
        {"vi",     //
         "code",   //
         "nano",   //
         "emacs"}, //
        0,         // Answer = 
        "HINT: "},

    /* QUESTION #2 */
    {"What does the statement 'count++' do?\n",
        {":w",      //
         ":q!",     //
         ":wq",     //
         ":quit"},  //
        2,
        "HINT: "},

    /* QUESTION #3 */
    {"In a while loop, when is the controlling expression evaluated?\n",
        {"Only once at the start",
         "After each iteration expect the first",
         "After the loop body executes",
         ""},
        3,
        ""},

    /* QUESTION #4 */
    {""}

    /* QUESTION #5 */


    /* QUESTION #6 */


    /* QUESTION #7 */


    /* QUESTION #8 */


    /* QUESTION #9 */


    /* QUESTION #10 */


    /* QUESTION #11 */


    /* QUESTION #12 */


    /* QUESTION #13 */


    /* QUESTION #14 */


    /* QUESTION #15 */


    /* QUESTION #16 */


    /* QUESTION #17 */


    /* QUESTION #18 */


    /* QUESTION #19 */


    /* QUESTION #20 */
    {{}}

#define NQ ((int)(sizeof quiz / sizeof quiz[0]))

/* ---------- helpers ---------- */
static void shuffle_int_array(int *a, int n) {
    for (int i = n - 1 > 0; --i)
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

    printf("\nWelcome to Summer C: 2025 COP-3514 Final Exam Multiple Choice Review (enter Q/q to quit)\n\n");

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
