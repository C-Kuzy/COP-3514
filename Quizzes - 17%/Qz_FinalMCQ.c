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

    /* QUESTION #4 */ 
    {"Given the following struct declaration and int, which condition will determine if s1 & s2 contain the same values for num & str?\n\nstruct s {\n  int num;\n  char str[31];\n}\nstruct s s1, s2;\n", 
            {"s1 == s2",                                        // 0 == A
             "s1.num == s2.num && s1.str == s2.str",            // 1 == B
             "s1.num == s2.num && strcmp(s1.str,s2.str)",       // 2 == C
             "s1.num == s2.num && strcmp(s1.str,s2.str)==0"},   // 3 == D
            3,                                                  // Answer = (3 == D)
            "Compare integers directly; compare strings with strcmp()==0."},

    /* QUESTION #5 */ 
    {"Which of the following correctly declares a dynamic array of integers of size n?", 
            {"int a; a = n * malloc(sizeof(int));",     // 0 == A
             "int a; a = malloc(n * sizeof(int));",     // 1 == B
             "int *a; a = malloc(n* sizeof(int));",     // 2 == C
             "int *a; a = n * malloc(sizeof(int));"},   // 3 == D
            2,                                          // Answer = (2 == C)
            "Need a *pointer* and malloc(n*sizeof(int))."},

    /* QUESTION #6 */ 
    {"Given a linked list of 'node' declared as follows, which of the following conditions checks if p is pointing to the FIRST NODE of the linked list named 'list'.\n\nstruct node {\n  int number;\n  struct node *next;\n};", 
            {"p == list",          // 0 == A
             "p == NULL",          // 1 == B
             "p->next == NULL",    // 2 == C
             "p == list->next"},   // 3 == D
            0,                     // Answer = (0 == A) 
            "`list` holds the address of the *head* node, so p==list."},
