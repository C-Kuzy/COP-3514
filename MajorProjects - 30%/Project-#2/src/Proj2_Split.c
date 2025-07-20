/*
 Name: Connor Kouznetsov
 U-Number: U30979013
 Description: Project #2: This program is responsible for splitting a user's two-word string
                          into two separate strings containing a single word each. Refer to
                          the following example below to understand the goal better...


    1. WHAT THE PROGRAM SHOULD ACHIEVE:

            - Example User Prompted Input(s):

                    Possible Input #1: "Word1 Word2"
                    Possible Input #2: "National                     League"
                    Possible Input #3: "   Good        Morning"
                    Possible Input #4: " Second    First  "

            - Example User Output(s):

                    Expected Output #1:

                            Enter input:Word1 Word2
                            Word #1: Word1
                            Word #2: Word2

                    Expected Output #2:

                            Enter input:National                     League
                            Word #1: National
                            Word #2: League

                    Expected Output #3:

                            Enter input:   Good        Morning
                            Word #1: Good
                            Word #2: Morning

                    Expected Output #4:

                            Enter input: Second    First
                            Word #1: Second
                            Word #2: First


    2. BASIC REQUIREMENTS OF THE PROGRAM:

                #1: Name the project "project2_task1.c" & include your Name, U-Number, & Description

                #2: CANNOT use C library function "<string.h>" for string interpretation

                #3: Assume that the Usr_Inpt is no more than 1000 'space' characters

                #4: MUST USE THE FOLLOWING: read_line (pointer version), "void" and "split" functions

                #5: Ensure NOT to use array subscripting, while eliminating counter variables in loop iterations and [] operators

*/

#include "../submission/String_Split.h"
/* Program entry point for the main function */
int main() { return Str_Splt(); }
