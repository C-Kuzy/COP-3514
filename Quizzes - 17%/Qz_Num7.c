/*
 Author: C-Kuzy
 Description: 2025 Summer C Semester: COP-3514 Chapter 22 Quiz Bank
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

/* REFERENCE QUESTIONS FOR Multiple Choice: Canvas -> COP 3514 -> Modules -> Week #7 -> 8 - Chapter 22  */
static const Question quiz[] = {

    /* QUESTION #1 */
    {"What does buffering in file I/O primarily help with in C programming?",
        {"Enhancing speed by reducing disk access",  // 0 == A
         "Sorting data before saving",               // 1 == B
         "Converting binary to text",                // 2 == C
         "Compressing data before writing"},         // 3 == D
        0,                                           // Answer = (0 == A)
        "HINT: Think about why data is temporarily held before being written to disk."},

    /* QUESTION #2 */
    {"When does the automatic buffer flush occur in C's file handling?",
        {"When the buffer is full or the file is closed",  // 0 == A
         "After each byte is read",                        // 1 == B
         "When explicitly flushed using flush only",       // 2 == C
         "When fclose is called only"},                    // 3 == D
        0,                                                 // Answer = (0 == A)
        "HINT: Consider what triggers the system to write buffered data to the file."},

    /* QUESTION #3 */
    {"What is the return type of fopen()?",
        {"int",     // 0 == A
         "char*",   // 1 == B
         "void*",   // 2 == C
         "FILE*"},  // 3 == D
        3,          // Answer = (3 == D)
        "HINT: This type is used to represent a file stream in C."},

    /* QUESTION #4 */
    {"What will fopen(\"file.txt\", \"r\") return if the file doesn't exist?",
        {"\"file.txt\"",  // 0 == A
         "0",             // 1 == B
         "NULL",          // 2 == C
         "-1"},           // 3 == D
        2,                // Answer = (2 == C)
        "HINT: Check what indicates failure for pointer-returning functions."},

    /* QUESTION #5 */
    {"What does the \"a\" mode fopen() do?",
        {"Opens for writing and truncates",  // 0 == A
         "Opens in binary mode",             // 1 == B
         "Opens for appending",              // 2 == C
         "Opens for reading only"},          // 3 == D
        2,                                   // Answer = (2 == C)
        "HINT: This mode is used to add data to the end of a file."},

    /* QUESTION #6 */
    {"What must be checked immediately after calling fopen()?",
        {"Whether return value is NULL",    // Whether return value is NULL
         "Return value is greater than 0",  // Return value is greater than 0
         "File permissions",                // File permissions
         "File contents"},                  // File contents
        0,                                  // Answer = (0 == A)
        "HINT: Always verify if the file was opened successfully before using it."},

    /* QUESTION #7 */
    {"What does the following code do?\n\n FILE *f = fopen(\"a.txt\", \"r\");",
        {"Creates a.txt",             // 0 == A
         "Writes to a.txt",           // 1 == B
         "Appends to a.txt",          // 2 == C
         "Reads file if it exists"},  // 3 == D
        3,                            // Answer = (3 == D)
        "HINT: The mode string determines what operations are allowed on the file."},

    /* QUESTION #8 */
    {"What is EOF typically used for in file operations?",
        {"To signal an error or end-of-file",  // 0 == A
         "To end a line",                      // 1 == B
         "To indicate file closed",            // 2 == C
         "To terminate strings"},              // 3 == D
        0,                                     // Answer = (0 == A)
        "HINT: This value is checked to know when no more data can be read."},

    /* QUESTION #9 */
    {"What is the correct signature of fgets() for reading from files?",
        {"char* fgets(FILE*, char*, int)",  // 0 == A
         "int fgets(char*, FILE*, int)",    // 1 == B
         "char* fgets(char*, int, FILE*)",  // 2 == C
         "char fgets(int, char*, FILE*)"},  // 3 == D
        2,                                  // Answer = (2 == C)
        "HINT: Pay attention to the order and types of parameters."},
        
    /* QUESTION #10 */
    {"Which function closes an opened file?",
        {"endfile()",    // 0 == A
         "closefile()",  // 1 == B
         "fclose()",     // 2 == C
         "fend()"},      // 3 == D
        2,               // Answer = (2 == C)
        "HINT: The function name starts with 'f' and ends with 'close'."},

    /* QUESTION #11 */
    {"What happens if you forget to call fclose()?",     
        {"The system closes it automatically",           // 0 == A
         "Nothing happens",                              // 1 == B
         "File remains open and data may not be saved",  // 2 == C
         "Compilation fails"},                           // 3 == D
        2,                                               // Answer = (2 == C)
        "HINT: Data may not be written to disk if the file isn't properly closed."},

    /* QUESTION #12 */
    {"Which function is ideal for writing a string to a file?",
        {"fgets()",     // 0 == A
         "fputs()",     // 1 == B
         "write()",     // 2 == C
         "fprintf()"},  // 3 == D
        1,              // Answer = (1 == B)
        "HINT: This function is specifically for outputting strings to a file."},

    /* QUESTION #13 */
    {"Why is FILE* used instead of int in file operations?",
        {"To hide complexity",                                      // 0 == A
         "Because it saves memory",                                 // 1 == B
         "Because int cannot return EOF",                           // 2 == C
         "Because FILE* is the only return type allowed by ANSI"},  // 3 == D
        0,                                                          // Answer = (0 == A)
        "HINT: The FILE structure manages details about the file stream for you."},

    /* QUESTION #14 */
    {"For safe and robust string input from files (when dealing with unpredictable user input), what is a good reason to use fgets() over scanf() when reading from a file?",
        {"It prevents overflow",  // 0 == A
         "It skips whitespace",   // 1 == B
         "It's faster",           // 2 == C
         "It returns int"},       // 3 == D
        0,                        // Answer = (0 == A)
        "HINT: This function lets you specify the maximum number of characters to read."},

    /* QUESTION #15 */
    {"What happens if you fopen() in write mode and the file exists?",
        {"The file is deleted",       // 0 == A
         "The file is appended",      // 1 == B
         "The file is renamed",       // 2 == C
         "The file is overwritten"},  // 3 == D
        3,                            // Answer = (3 == D)
        "HINT: Opening a file in write mode will affect its previous contents."},

    /* QUESTION #16 */
    {"What function is used to set the file position back to the beginning of a file?",
        {"freset",   // 0 == A
         "rewind",   // 1 == B
         "restart",  // 2 == C
         "fseek"},   // 3 == D
        1,           // Answer = (1 == B)
        "HINT: This function's name suggests starting over from the beginning."},

    /* QUESTION #17 */
    {"Which of the following best describes the behavior of fgets() when the destination array is too small?",
        {"fgets will crash",                           // 0 == A
         "fgets will truncate and stop reading",       // 1 == B
         "fgets will automatically resize the array",  // 2 == C
         "fgets will skip the rest of the line"},      // 3 == D
        1,                                             // Answer = (1 == B)
        "HINT: Only as much as fits in the array will be read."},

    /* QUESTION #18 */
    {"What happens if fscanf(fp, \"\%d\%d\", &a, &b) only matches one value?",
        {"The function returns 1",                    // 0 == A
         "fscanf skips the line",                     // 1 == B
         "The program crashes",                       // 2 == C
         "The second variable is initialized to 0"},  // 3 == D
        0,                                            // Answer = (0 == A)
        "HINT: The return value tells you how many items were successfully read."},

    /* QUESTION #19 */
    {"What is the correct usage of \%[^\\n] in fscanf?",
        {"Matches all characters but newlines",  // 0 == A
         "Matches any digits",                   // 1 == B
         "Matches everything after a newline",   // 2 == C
         "Matches whitespace"},                  // 3 == D
        0,                                       // Answer = (0 == A)
        "HINT: The caret (^) in the format string means 'not'."},

    /* QUESTION #20 */
    {"What format specifier should be used to read a CSV line, excluding commas?",
        {"\%[^,]",    // 0 == A
         "\%]^\\n",   // 1 == B
         "\%c",       // 2 == C
         "\%[a-z]"},  // 3 == D
        0,            // Answer = (0 == A)
        "HINT: Use a format that reads up to, but not including, a specific character."},

    /* QUESTION #21 */
    {"What does fscanf(fp, \"\%s\%d\", name, &score) expect as input?",
        {"A single number",          // 0 == A
         "A string and an integer",  // 1 == B
         "Only one string",          // 2 == C
         "A name and float"},        // 3 == D
        1,                           // Answer = (1 == B)
        "HINT: The format string specifies two types of input."},

    /* QUESTION #22 */
    {"Which is not a reason for fscanf() to return fewer items than requested?",
        {"File is corrupted",  // 0 == A
         "File is binary",     // 1 == B
         "Reached EOF",        // 2 == C
         "Matching failure"},  // 3 == D
        1,                     // Answer = (1 == B)
        "HINT: Consider what might prevent fscanf from reading the expected data."},

    /* QUESTION #23 */
    {"What happens if fprintf is passed a NULL pointer?",
        {"Creates the file automatically", // 0 == A
         "Causes a segmentation fault",    // 1 == B
         "Writes to stderr",               // 2 == C
         "Writes to stdout"},              // 3 == D
        1,                                 // Answer = (1 == B)
        "HINT: Passing an invalid file pointer can cause a crash."},

    /* QUESTION #24 */
    {"What does fscanf return if all inputs match correctly?",
        {"Number of matched inputs",   // 0 == A
         "Nothing",                    // 1 == B
         "Number of characters",       // 2 == C
         "EOF"},                       // 3 == D
        0,                             // Answer = (0 == A)
        "HINT: The return value tells you how many assignments were successful."},

    /* QUESTION #25 */
    {"What stream does printf write to by default?",
        {"stderr",      // 0 == A
         "The screen",  // 1 == B
         "stdout",      // 2 == C
         "a file"},     // 3 == D
        2,              // Answer = (2 == C)
        "HINT: Standard output is the usual destination for printf."},

    /* QUESTION #26 */
    {"Which function would most likely help sort input from a file?",
        {"fprintf",          // 0 == A
         "fscanf",           // 1 == B
         "rewind",           // 2 == C
         "selection_sort",}  // 3 == D
        3,                   // Answer = (3 == D)
        "HINT: Sorting is typically done with a dedicated algorithm."},

    /* QUESTION #27 */
    {"What type of file format is typically used with comma separators?",
        {"JSON",  // 0 == A
         "CSV",   // 1 == B
         "TXT",   // 2 == C
         "XML",}  // 3 == D
        1,        // Answer = (1 == B)
        "HINT: This format is commonly used for spreadsheets and databases."},

    /* QUESTION #28 */
    {"What must be done before sorting file data in memory?",
        {"Use rewind",
         "Print each value",
         "Parse and store in an array",
         "Use fclose",}
        2,
        "HINT: You need to have the data in a structure you can sort."},
        
    /* QUESTION #29 */
    {"What is the output destination for fprintf by default?",
        {"stdout",              // 0 == A
         "stderr",              // 1 == B
         "The specified file",  // 2 == C
         "Console",}            // 3 == D
        2,                      // Answer = (2 == C)
        "HINT: This function writes to the file pointer you provide."},

    /* QUESTION #30 */
    {"What is the equivalent of printf when writing to a file?",
        {"fprint",   // 0 == A
         "fprintf",  // 1 == B
         "putf",     // 2 == C
         "fopen",}   // 3 == D
        1,           // Answer = (1 == B)
        "HINT: The name is similar to printf but starts with an 'f' for file."},
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

    printf("\nWelcome to Summer C: 2025 COP-3514 Quiz #7 -- Chapter 22 Multiple Choice Review (enter Q/q to quit)\n\n");

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
