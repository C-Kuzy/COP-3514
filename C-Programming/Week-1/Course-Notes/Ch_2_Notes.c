/*
 Author: C-Kuzy
 Summer Semester Lecture #1
 Description: Chapter 2 C Fundamentals!
*/

 // Example Program: Printing Hello World

        #include <stdio.h>

        int main(void) {

        printf("Hello World!\n");
        return 0;
        }
   
    // Ensure when saving a file that you use ".c" as the extension

 // The General Form of Simple C language programs

        // directives
        int main(void) {

            // statements
            return 0; // This ends the main function
        }

 // Understand Compiling and Linking

        // In order to make a program execute, theres a total of three steps necessary:
            /*
            1. Preprocessing: The preprocessor obeys commands that begin with # (known as directives)
            2. Compiling: A compiler then translates the program into machine instructions (object code)
            3. Linking: A linker combines the object code produced by the compiler with any additional code needed to yield a complete executable program
            */

 // Basics on the GCC Compiler
 
        // GCC (GNU Compiler Collection) is a very popular C compiler (i use it)
        // GCC is supplied with Linux; however, it is available for many other platforms as well
            // An example of compiling a C file: "gcc helloWorld.c"

 // After using GCC

        // Once compiling and linking, gcc leaves the executable program by creating an a.out file by default
        // If you would like to customize the name, we can use the -o option, which changes the name of the file that contains our executable program.
            // An example of running the link: ./a.out or your -o option: ./hello

 // Directives we can use

        // Commands we use start with "#" such as #define or #include and are only one line long
        // Directives do not require semicolons or special markers
        // When using specific C or C++ libraries they must be contained within the following "<>"

        #include <stdio.h> // The use of <stdio.h> is a header that contains the C standard I/O

 // Main Function

        // our "main" function is both mandatory and special for C and C++ files
        // "main" returns a status code (0 indicates normal program termination)
            // If the program has no "return" statement at the end of the main function you can expect that the compiler you use will produce the following warning message:
                // "warning: control reaches end of non-void function"
            
                int main() {
                return 0; // How to set up main function 
            } 

 // Working with Printing String Statements

        // the "printf" function displays a string literal
            // Use double quotes "" for strings
            // printf doesn't automatically create a newline when finishing printing

        // To make printf create a newline (ensure \n is within quotations)
            // an example printf("Hello to the World!\n");

 // What types of comments are there?
            
        // Block Comments: /* Sample Text */
            // Block comments work over multiple lines
        // Line Comments: // Sample Text
            // Line comments end at the end of each line

        // Block vs Line comments... Which are better?
            // Line comments are safer because you won't have to worry about the comment accidentally consuming part of a program
            
