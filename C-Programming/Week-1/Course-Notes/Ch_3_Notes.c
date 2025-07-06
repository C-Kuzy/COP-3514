/*
 Author: C-Kuzy
 Summer Semester Lecture #2 & #3
 Description: Chapter 3 Formatted Input/Outputs
*/

    // What are Identifiers?

    // Identifiers are variables, functions, macros, and other entities we use as they contain letters, digits, and underscores (cannot start with a digit)
        // Examples:              times100          |          you_are_cool         |             power_of_3            |            _better

        // It is common practice to avoid using identifiers that begin with an underscore to avoid confusion with other variables or functions
        // Since C is case sensitive: There is a noticeable difference between lower and uppercase letters used in identifiers
        // Many programmers are mostly using lower-case letters for identifiers but I use upper-case letters to begin the identifier, it is good for personal preference

    // Variables & Types 

        // We need to be able to store data temporarily during the program's execution. These storage locations are known as variables
            // They must have what's known as a "type". Which in C, there are a variety of types, some examples we deal with are int and double 
                int // represents decimal integers as we can also use long int for large numbers... ex: 256
                double // represents as a floating integer value that consists of decimals... ex: 219.225

    // Printing Variable Values

        printf // Is used to display the current value of a variable
            printf("Height: %d\n", height); // used to display the current value of an initialized height variable
                // Know there is no limit to the number of variables which we can call using printf
                // Note that compilers are not required to check if a specific conversion specification is appropriate
                    // This means that if an incorrect specification is used, the program will produce pointless information

    // Initialization of Variables  
              
