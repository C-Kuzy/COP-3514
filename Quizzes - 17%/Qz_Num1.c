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
struct {
    const char *prompt;               // Refers to Displaying Question Prompt
    const char *choices[MX_Options];  // Refers to displaying answer choices A-E 
    int correct;                      // Searches through answer choices and selects the correct answer
    const char *why;                  // Got the Question wrong? There's feedback for you!
} Question;

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #2 -> 2 - Chapter 4 & 5 */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What is an lvalue in C programming?\n",
        {"An error message",                     // 0 == A
         "A label name",                         // 1 == B
         "An object stored in computer memory",  // 2 == C
         "A literal constant"},                  // 3 == D
        2,                                       // Answer = (2 == C)
        ""},

    /* QUESTION #2 */
    {"What does the statement 'count++' do?\n",
        {"Decrements 'count' by 1",   // 0 == A
         "Increments 'count' by 1",   // 1 == B
         "Sets 'count' to 0",         // 2 == C
         "Multiplies 'count' by 2"},  // 3 == D
        1,                            // Answer = (1 == B)  
        ""},

    /* QUESTION #3 */
    {"Which of the following is a correct use of assignment chaining?\n",
        {"i + j + k = 0;",     // 0 == A
         "i = j = k = 0;",     // 1 == B
         "i == j == k == 0;",  // 2 == C
         "i = j == k = 0;"},   // 3 == D
        1,                     // Answer = (1 == B)
        ""},

    /* QUESTION #4 */
    {"What is the output of the following statement?\n\n",
        {"32 5",   // 0 == A
         "32 4",   // 1 == B
         "40 5",   // 2 == C
         "40 4"},  // 3 == D
        0,         // Answer = (0 == A)
        ""},

    /* QUESTION #5 */
    {"Which form of increment returns the incremented value immediately?\n",
        {"++x",   //
         "x--",   //
         "x++",   //
         "--x"},  //
        0,        //
        ""},

    /* QUESTION #6 */
    {"In a 'switch' statement, what data types can the controlling expression be?\n",
        {""}}

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


#define NQ ((int) )
