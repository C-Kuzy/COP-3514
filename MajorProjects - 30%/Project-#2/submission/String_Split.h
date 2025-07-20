// CLEARS WARNINGS NON-HARMFUL TO THE PROGRAM FOR TESTING
#pragma GCC system_header
#pragma system_header

// STEP #1: Using #include to gain access to CRUCIAL C syntax libraries
#include <stdio.h>          // Useful library for I/O to utilize getchar() & printf() functions
#include <ctype.h>          // Useful library for using isspace which classifies charcter handling

// STEP #2: Define Main Function Variables
#define Usr_Limit 1000      // Defined "Usr_Limit" variable to limit the total user input at 1000 characters
#define Word_Limit 500      // Defined "Word_Limit" variable to limit the total user input per word at 500 characters

// STEP #3: Utilizing read_line pointer function to create a buffer
int read_line(char *z, int Mx_Char_Len) {
    int ch;                 // Contains each character read from input
    char *itext = z;        // "itext" pointer fills buffer container, starting at our base "z"

    /* TEST for Null Assignment & Negative Input String Length (Ensure "Mx_Char_Len is positive) */
    if (z == NULL || Mx_Char_Len <= 0) {
        printf("Invalid Input: Test Terminated, Goodbye!\n"); // Prompts user with error message, terminating the program
        return 0;                                             // Terminates the program early on with an invalid user input
    }

    /* TEST for reading characters UNTIL "newline" and "End of File" occur */
    while ((ch = getchar()) != '\n' && ch != EOF) {

        /* Responsible for storing characters within the buffer container area (subtracts the null space) */
        if (itext - z < Mx_Char_Len - 1) {
            *itext = ch;    // Directly stores the character within the buffer container
            itext++;        // Increment: Moves the pointer to the next valid character
        }
    }
    *itext = '\0';          // Sets/Adds null terminator at the end of the user input string
    return itext - z;       // Returns the max length of characters stored from the user input
}

// STEP #4: Utilizing split function within a void to carry out loop repetition
void split(char *input, char *word1, char *word2) {
    char *Usr_Inpt = input;     // Reassign pointer variable name input: *Usr_Inpt
    char *w1 = word1;           // Reassign pointer variable name word1: *w1
    char *w2 = word2;           // Reassign pointer variable name word2: *w2
    int fnd_1st = 0;            // Prior to completion of Word #1, value stays at zero to continue

    /* TEST and check for non-null user input prior to loop functionality */
    if (Usr_Inpt != NULL) {

        /* Initiate loop while the user input is non-null */
        while (*Usr_Inpt != '\0') {
            if (!fnd_1st && !isspace(*Usr_Inpt)) {
                *w1++ = *Usr_Inpt;     // Increment: Character value (letter) is added to "Word #1"
            } 
            else if (fnd_1st && !isspace(*Usr_Inpt)) {
                *w2++ = *Usr_Inpt;     // Increment: Character value (letter) is added to "Word #2"
            } 
            else if (!fnd_1st && isspace(*Usr_Inpt) && w1 != word1) {
                fnd_1st = 1;           // Terminates at the end of the first "Word", moves to store the second "Word"
            }
            Usr_Inpt++;                // Increment: Add's to the current character value, moving onto next valid user character input
        }
        *w1 = '\0';                    // Sets pointer of Word #1 to null
        *w2 = '\0';                    // Sets pointer of Word #2 to null
    }
}

// STEP #4: Develop main function to carry out Input/Output prompting; also, feeding into "project2_task1.c" the """Main Parent File"""
int Str_Splt(void) {
    char Usr_Inpt[Usr_Limit];          // Creates buffer limit at a total of 1000 characters
    char Wrd_1[Word_Limit];            // Buffer limit is set to 500 character for Word #1
    char Wrd_2[Word_Limit];            // Buffer limit is shared 500 characters for Word #2

    printf("Enter input:");            // MANDATORY print statement for the program to prompt an input statement to the user
    read_line(Usr_Inpt, Usr_Limit);    // Utilizes "read_line" function to access the Usr_Inpt to determine if it surpasses 1000 characters
    split(Usr_Inpt, Wrd_1, Wrd_2);     // Prompts the function "split" to split the users input into two separate words

    printf("Word #1: %s\n", Wrd_1);    // Takes first word from string argument using %s to display the result stored
    printf("Word #2: %s\n", Wrd_2);    // Takes second word from string argument using %s to display the result stored

    return 0;                          // Returns safe and successful termination from the program
}