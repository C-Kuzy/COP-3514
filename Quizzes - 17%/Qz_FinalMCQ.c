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

    /* QUESTION #2 */ 
    {"What does the following program open 'source.txt' to do?\n\n#include <stdio.h>\nint main() {\n  FILE *fp;\n\n  fp = fopen('source.txt', 'w')\n  return 0;\n}", 
            {"For reading",                                                                            // 0 == A
             "For reading and writing",                                                                // 1 == B
             "For writing and does not open the file if 'source.txt' doesn't exist (prompts error)",   // 2 == C
             "For writing and creating a new file 'source.txt' if 'source.txt' doesn't exist"},        // 3 == D
             3,                                                                                        // Answer = (3 == D)
             "\"w\" creates/truncates the file and opens it for writing."},

    /* QUESTION #3 */ 
    {"What statement is correct for reading a row of data?\n'course_id' is a string variable,'student_id' is an int variable, and 'status' is a string variable.\n\nfscanf(pFile, '\%s \%d \%s', _________________________);", 
            {"&course_id, &student_id, &status",   // 0 == A
             "&course_id, student_id, &status",    // 1 == B
             "course_id, student_id, status",      // 2 == C 
             "course_id, &student_id, status"},    // 3 == D
            3,                                     // Answer = (3 == D) 
            "Arrays decay to pointers automatically; the int still needs &."},
