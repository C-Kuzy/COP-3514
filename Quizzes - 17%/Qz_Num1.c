/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 4/5 Quiz Bank
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#define MX_Options 5

/* ---------------------------- Question Bank Structure ---------------------------- */
struct {
    const char *prompt;               // Refers to Displaying Question Prompt
    const char *choices[MX_Options];  // Refers to displaying answer choices A-E 
    int correct;                      // Searches through 
    const char *why;                  // Got the Question wrong? There's feedback for you!
} Question;

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> 1 - Pre-Test */
static const Question quiz[] = {

    /* QUESTION #1 */

    /* QUESTION #2 */

    /* QUESTION #3 */

    /* QUESTION #4 */

#define NQ ((int))
