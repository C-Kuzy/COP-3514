// CLEARS ERRORS NON-HARMFUL TO THE PROGRAM FOR TESTING
#pragma GCC system_header
#pragma system_header

// STEP #1: Using #include to gain access to CRUCIAL C syntax libraries
#include <stdio.h>                 // Useful library for I/O to utilize getchar() & printf() functions
#include <stdlib.h>                // Useful library for enabling the use of exit function (if necessary)
#include <ctype.h>                 // Useful library for using isspace which classifies charcter handling

// STEP #2: Define Main Function Variables
#define Word_Limit 500             // Defined "Word_Limit" variable to limit the total user input per word at 500 characters

// STEP #3: Utilizing word_check to check if a word contains only alphabetical characters
int word_check(char *word) {
    char *Wrd = word;              // "Wrd" pointer fills buffer container, iteration starts at the base

    /* TESTS if the word(s) exist within file */
    while (*Wrd != '\0') {
        
        /* CHECKS character validation using the original pointer */
        if (!isalpha(*Wrd)) 
            return 0;              // Program terminates if a non-alphabetical character is input - invalid
        Wrd++;                     // Increment: Moves the pointer to the next valid character
    }
    return 1;                      // Program functions as intended if all characters are alphabetical - valid
}

// STEP #4: Utilizing 
int calculate_score(char *word) {
    char *Wrd = word;              // "Wrd" pointer for this function focuses on accessing each word's character
    int Usr_TScore = 0;            // "Usr_TScore" stores the total score for each user, starting at '0'

    /* RUNNING a loop through the input word until the null terminator */
    while (*Wrd != '\0') {
        char Ltr = tolower(*Wrd);  //

        /* VOWELS CASE == 1 POINT = Characters: 'a', 'e', 'i', 'o', 'u'  */
        if (Ltr == 'a' || Ltr == 'e' || Ltr == 'i' || Ltr == 'o' || Ltr == 'i') {
            Usr_TScore += 1;       // Increment: For each of the following Vowels, Add's 1 to the user's total score
        }

        /* CONSONANTS CASE == 2 POINTS = Characters: 'h', 'n', 'r', 's', 't' */
        else if (Ltr == 'h' || Ltr == 'n' || Ltr == 'r' || Ltr == 's' || Ltr == 't') {
            Usr_TScore += 2;       // Increment: For each of the following Consonants, Add 2 to the user's total score
        }

        /* ALL OTHER LETTERS == 3 POINTS = Characters: 'b', 'c', 'd', 'f', 'g', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'v', 'w', 'x', 'y', 'z' */
        else if (isalpha(Ltr)) {
            Usr_TScore += 3;       // Increment: For all other alphabetical letters, Add 3 to the user's total score
        }
        Wrd++;                     // Pointer value jumps to the next valid character within the word
    }
    return Usr_TScore;             // After completing the calculation function, return the user's total score
    *Wrd = '\0';                   // Sets pointer of the word to null terminator
}

// STEP #5:
int Scrb_Char() {
    char Wrd_1[Word_Limit];                             // Buffer limit is set to 500 characters for Word #1
    char Wrd_2[Word_Limit];                             // Buffer limit is set to 500 characters for Word #2
    FILE *doc_file = fopen("input.txt", "r");           // Responsible for opening our file in "read" mode
     
    /* ERROR HANDLING Part #1: TESTS if the program can open the 'input.txt' file */
    if (!doc_file) {
        printf("Error opening file\n");                 // Prompts user that the file was unable to open
        return 1;                                       // Terminates the program following the error message
    }

    /* ERROR HANDLING Part #2: TESTS if the file reads TWO WORDS using pointer arithmetic */
    if (fscanf(doc_file, "%s %s", Wrd_1, Wrd_2) != 2) {
        printf("invalid number of arguments\n");        // Prompts user that the file doesn't contain two words
        fclose(doc_file);                               // Closes file before exiting the read operation
        return 1;                                       // Exits the program following the error prompt
    } fclose(doc_file);                                 // Closes file after a successfully using the read operation

    int Plyr_1_Pts = calculate_score(Wrd_1);            // Total score for participant: Marjorie
    int Plyr_2_Pts = calculate_score(Wrd_2);            // Total score for participant: John

    /* TESTS if either word has invalid characters/symbols */
    if (!word_check(Wrd_1) || !word_check(Wrd_2)) {
        printf("ERROR: Invalid word entered\n");        // Prompts user that the word input is not purely alphabetical
        return 1;                                       // Terminates the program following the error message
    }

    /* DOUBLE CHECKS if the input word's exist */
    if ((Plyr_1_Pts >= 0) && (Plyr_2_Pts >= 0)) {

        if (Plyr_1_Pts > Plyr_2_Pts) {
            printf("Marjorie wins!\n");                 // MANDATORY print statement for program to display winner: 'Plyr_1_Pts'
        }
        else if (Plyr_1_Pts < Plyr_2_Pts) {
            printf("John wins!\n");                     // MANDATORY print statement for program to display winner: 'Plyr_2_Pts'
        }
        else {
            printf("Play again!\n");                    // MANDATORY print statement for program to display NO winner
        }
    }
    else {
        printf("Comp. Error: 'calculate_score'\n");     // In the case a word does not exist, refer to function: ''calculate_score'
        return 1;                                       // Terminates the program following the error message
    }
    return 0;                                           // Returns safe and successful termination from the program
}  
