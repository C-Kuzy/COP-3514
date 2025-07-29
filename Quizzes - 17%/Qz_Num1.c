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
         "A label name",                         //
         "An object stored in computer memory",  //
         "A literal constant"},                  //  
        2,
        ""},

    /* QUESTION #2 */
    {"What does the statement 'count++' do?\n",
        {"Decrements 'count' by 1",   //
         "Increments 'count' by 1",   //
         "Sets 'count' to 0",         //
         "Multiplies 'count' by 2"},  //
        1,                                       
        ""},

    /* QUESTION #3 */
    {"Which of the following is a correct use of assignment chaining?\n",
        {"i + j + k = 0;",     //
         "i = j = k = 0;",     //
         "i == j == k == 0;",  //
         "i = j == k = 0;"},   //
        1,                     //
        ""},

    /* QUESTION #4 */
    {"What is the output of the following statement?\n\n",
        {"32 5",   //
         "32 4",   //
         "40 5",   //
         "40 4"},  //
        0,         //
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
