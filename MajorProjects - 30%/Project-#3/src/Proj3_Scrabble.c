/*
 Name: Connor Kouznetsov
 U-Number: U30979013
 Description: Project #2: This program is responsible for creating a more complex version of the household 
                          game known as Scrabble. The goal is to read two words from a file named "input.txt" 
                          which will then follow the game's specified rules to calculate each user's score to 
                          determine a winner. Refer to the following example below to understand the goal...
                         
    1. WHAT THE PROGRAM SHOULD ACHIEVE:

            - Example User Prompted Input(s):

                    Possible Input #1: happy sad
                    Possible Input #2: be bee
                    Possible Input #3: test apple
                    Possible Input #4: good nope
                    Possible Input #5: testing score

            - Example User Output(s):

                    Possible Output #1: Marjorie wins!
                    Possible Output #2: John wins!
                    Possible Output #3: Play again!
                    Possible Output #4: Play again!
                    Possible Output #5: Marjorie wins!

    2. BASIC REQUIREMENTS OF THE PROGRAM:

                #1: Name the project "project2_task2.c" & include your Name, U-Number, & Description

                #2: CANNOT use C library function "<string.h>" for string interpretation

                #3: Assume that we are using buffer's to store the text input from the test files

                #4: MUST USE THE FOLLOWING: int calculate_score(char *word)

                #5: OUTPUT MUST PROMPT ONE OF THE FOLLOWING: 

                        - #1: "Marjorie wins!"
                        - #2: "John wins!"
                        - #3: "Play again!"

                #6: MUST TEST FOR ERROR HANDLING: 

                        - #1: If the program cannot open "input.txt", it must print: "Error opening file"
                        - #2: If the file does not contain exactly two words, print: "invalid number of arguments"

                #7: Ensure NOT to use array subscripting, while eliminating counter variables in loop iterations and [] operators
*/

#include "../submission/Scrble_Gme.h"
/* Program entry point for the main function */
int main() { return Scrb_Char(); }
