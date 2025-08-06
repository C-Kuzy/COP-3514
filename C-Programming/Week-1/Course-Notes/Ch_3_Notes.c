/*
 Author: C-Kuzy
 Summer Semester Lecture #2 & #3
 Description: Chapter 3 Formatted Input/Outputs
*/

    // THE UNIX/LINUX DIRECTORIES BASICS & Commands

        / // Known as the root
        . // Known as the current directory
        .. // Known as the parent directory
        ~ // Your home directory
        ls // List the contents of the current directory
            ls -l // uses long format
        mkdir directory // used to create a directory
        cd directory // Change directory to the directory or cd .. return to the parent directory
        exit // Terminate current terminal session
        chmod +x: // add execute permissions to all users

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
        
        int height = 15; // The inital value of a variable may be included in its declaration: 
        int height = 15, length = 3, width = 7 // Any number of variables can be initialized within the same declaration
                // The concept here is that each variable requires initialization, aka defining a value (= 15, = 3, or = 7)

        // Remember, when initializing a variable, most are automatically set to zero when it executes, but some are not default at zero
        // A variable which does not have a default value or been assigned a value is considered uninitialized, resulting in an unpredictable result
                // TO CHECK FOR UNINITIALIZED VARIABLE WARNINGS: "-Wall" within the command line/terminal

        // REMINDER! To print float or double variables, use %f to display decimal value digits
        printf("Exact Height: %.4f in\n", height) // To choose how many decimal values, follow the example
    
    // READING INPUT

        // What is scanf() and how does it actually work for us?
            // scanf() will read inputs according to a specific format we define or call
            // It ignores all white-space characters, for example: spaces, tabs, & new-lines
            scanf("%d%f%ld%c", &i, &o, &p, &ch); // You can read out multiple numbers if you would like according to the example

        scanf() // scanf is a type of reading input within C's library's to use our printf() function
                // it requires a format string to specify the appearance of the input data we want

                scanf(%d, &i) // example follows calling an integer and storing it temporarily to the value "i"
                        // Using "&" aka. address operator is usually required when using a scanf() call as it provides the memory address of our variable

        // Note that it is required to use scanf() for double values since we will primarily be dealing with long values
            // this means that we need to use %lf, as it tells scanf to look for input values within the double format

    // MACRO DEFINITION

        // When it comes to defining names for constant values, we can include them at the top to make the program more clear for those not aware of our values
        #define PENNY 1 // Known as Macro Definitions, we can use the following example which defines a penny as 1 unit or 1 cent

        // When we compile a program, the preprocessor is responsible for replacing each macro by the value it's representing
        total_amnt = total_amnt + num_pennies * PENNY; // Before preprocessing occurs
        total_amnt = total_amnt + num_pennies * 1 // After preprocessing
        
        #define EXCHANGE_RATE (1.07 * 1.07) // Macro values can also be written as expressions like the following example
            // If the macro contains operators, its necessary to use parentheses to enclose the calculation
            // It is common to use either strictly uppercase or a mix of uppercase and lowercase letters to name the value


// still in development