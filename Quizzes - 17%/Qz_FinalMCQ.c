/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Final Exam Multiple Choice Answer Bank
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define MX_Options 4


/* ---------------------------- Question Bank Structure ---------------------------- */
typedef struct {
    const char *prompt;               // Refers to Displaying Question Prompt
    const char *choices[MX_Options];  // Refers to displaying answer choices A-D 
    int correct;                      // Searches through answer choices and selects the correct answer
    const char *why;                  // Got the Question wrong? There's feedback for you!
} Question;

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP-3514 -> Modules -> Final-Exam-Practice-Test-3-Review -> Multiple-choice-questions-after-midterm-2.pptx */
static const Question quiz[] = {
    
    /* QUESTION #1 */ 
    {"What does the following program open 'source.txt' to do?\n\n#include <stdio.h>\nint main() {\n  FILE *fp;\n\n  fp = fopen('source.txt', 'r')\n  return 0;\n}",
            {"For reading",                                         // 0 == A
             "For reading and writing",                             // 1 == B
             "For creating a new file 'source.txt' for reading",    // 2 == C
             "For creating a new file 'source.txt' for writing"},   // 3 == D
            0,                                                      // Answer = (0 == A)
            "Mode \"r\" opens an *existing* file read‑only."},
