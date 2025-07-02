#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

/* Constant definitions */
#define MAX_CHOICES 4
#define MAX_QUESTION_LEN 256
#define MAX_CHOICE_LEN 128

/* Question structure */
typedef struct {
    char question[MAX_QUESTION_LEN];
    char choices[MAX_CHOICES][MAX_CHOICE_LEN];
    int correct;
} Question;

/**
 * Shuffles an array of integers randomly
 * @param array The array to shuffle
 * @param n The size of the array
 */
void shuffle_int(int *array, int n) {
    for (int i = n - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}

/**
 * Shuffles an array of questions randomly
 * @param qs The array of questions to shuffle
 * @param n The number of questions
 */
void shuffle_questions(Question *qs, int n) {
    for (int i = n - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        Question tmp = qs[i];
        qs[i] = qs[j];
        qs[j] = tmp;
    }
}

/**
 * Runs a quiz with given questions
 * @param questions Array of questions
 * @param num Number of questions
 */
void run_quiz(Question *questions, int num) {
    shuffle_questions(questions, num);
    int score = 0;

    for (int i = 0; i < num; ++i) {
        Question *q = &questions[i];
        int order[MAX_CHOICES] = {0, 1, 2, 3};
        shuffle_int(order, MAX_CHOICES);

        printf("\nQuestion %d: %s\n", i + 1, q->question);
        for (int j = 0; j < MAX_CHOICES; ++j)
            printf("  %c) %s\n", 'A' + j, q->choices[order[j]]);

        char c;
        printf("Your answer: ");
        do {
            c = toupper(getchar());
        } while (c < 'A' || c > 'D');

        while (getchar() != '\n')
            ;

        int ans = order[c - 'A'];
        if (ans == q->correct) {
            printf("Correct!\n");
            ++score;
        }
        else {
            printf("Wrong. Correct answer: %c\n", 'A' + q->correct);
        }

        // Ask to continue after every 5 questions
        if ((i + 1) % 5 == 0 && i != num - 1) {
            char cont;
            printf("Answered %d, Score %d. Continue? (y/n): ", i + 1, score);
            do {
                cont = tolower(getchar());
            } while (cont != 'y' && cont != 'n');

            while (getchar() != '\n')
                ;

            if (cont == 'n')
                break;
        }
    }

    printf("\nFinal score: %d/%d\n", score, num);
}

/**
 * Main function - entry point of the program
 */
int main() {
    // Initialize random seed
    srand((unsigned)time(NULL));

    /* Quiz 1: Chapters 4 & 5 */
    Question quiz1[] = {
        {"What is an lvalue in C?", {"An object stored in computer memory", "A label name", "A literal constant", "An error message"}, 0},
        {"What does the statement count++ do?", {"Multiplies count by 2", "Sets count to 0", "Decreases count by 1", "Increments count by 1"}, 3},
        {"Which of the following is a correct use of assignment chaining?", {"i + j + k = 0;", "i = j = k = 0;", "i = j == k = 0;", "i == j == k == 0;"}, 1},
        {"What is the output of i = 8; j = 4; i *= j++; printf(\"%d %d\", i, j);?", {"40 4", "32 5", "40 5", "32 4"}, 1},
        {"Which form of increment returns the incremented value immediately?", {"--x", "++x", "x--", "x++"}, 1},
        {"In a switch statement, what data types can the controlling expression be?", {"int, char, enum", "float and double", "array", "string and float"}, 0},
        {"What is the output if grade = 3; switch(grade) { case 4: printf(\"Excellent\");\n case 3: printf(\"Good\"); case 2: printf(\"Average\"); case 1: printf(\"Poor\");\n case 0: printf(\"Failing\"); default: printf(\"Illegal grade\"); }\n", {"GoodAveragePoorFailingIllegal grade", "GoodAverage", "Good", "Illegal grade"}, 0},
        {"Which Unix command is used to move or rename a file?", {"cp", "cd", "rm", "mv"}, 3},
        {"What does rm -i do?", {"Renames files", "Removes files with confirmation", "Moves files", "Copies files"}, 1},
        {"How can you clear the terminal screen?", {"rm screen", "clear + l", "Ctrl + c", "Ctrl + l"}, 3},
        {"Which relational operator has lower precedence than !=?", {"==", "=<", ">", "<"}, 0},
        {"What is the output of i=3; j=2; k=1; printf(\"%d\", i<j==j<k);?", {"0", "1", "true", "false"}, 1},
        {"Which operator is unary?", {"||", "!", "&&", ">="}, 1},
        {"Which of these tests if a value is between i and k?", {"i<j && j<k", "i==j<k", "i>j || j<k", "i<j<k"}, 0},
        {"Which if assigns 0 to i and skips the block?", {"if(i!=0)", "if(i=0)", "if(i==0)", "if(i++)"}, 1},
        {"Which keyword ends a case in a switch?", {"end", "return", "stop", "break"}, 3},
        {"What happens if a switch case is missing a break?", {"It continues into the next case", "The program exits the switch", "It stops the switch", "A syntax error occurs"}, 0},
        {"Which header file provides bool in C99?", {"stdio.h", "stdlib.h", "ctype.h", "stdbool.h"}, 3},
        {"Correct form of if for multiple statements?", {"if expression{statements}", "if(expression){statements}", "if expression(statements)", "if(expression):statements"}, 1},
        {"True about scanf and format strings?", {"Scanf ignores mismatches", "Scanf expects non-whitespace to match", "Scanf always reads all", "Scanf uses defaults"}, 1}};
    int n1 = sizeof(quiz1) / sizeof(quiz1[0]);

    /* Quiz 2: Chapter 6 */
    Question quiz2[] = {
        {"What Unix text editor is guaranteed on most systems?", {"nano", "code", "emacs", "vi"}, 3},
        {"Which command in vi saves and quits?", {":w", ":q!", ":quit", ":wq"}, 3},
        {"In a while loop, when is the controlling expression evaluated?", {"Only once at the start", "After the loop body executes", "After each iteration except the first", "Before the loop body executes"}, 3},
        {"What happens when a while condition is always true?", {"Syntax error", "Infinite loop", "Executes once", "Won't execute"}, 1},
        {"True about do-while loop?", {"Cannot contain break", "Expression must be true", "Expression tested before body", "Body executes at least once"}, 3},
        {"Output of for(n=9; n!=0; n--) printf(\"%d \", n--);?", {"9 8 7 6 5 4 3 2 1", "9 7 5 3 1", "8 6 4 2", "None of the above"}, 1},
        {"Operator separating expressions in for?", {"&", ",", ";", ":"}, 1},
        {"Command to delete a line in vi?", {"yy", "dd", "p", "u"}, 1},
        {"Best loop for counting iterations?", {"for", "switch", "do-while", "while"}, 0},
        {"Keyword exits innermost loop/switch?", {"stop", "return", "break", "continue"}, 2},
        {"Keyword skips to next iteration?", {"pass", "goto", "break", "continue"}, 3},
        {"Output of sum=0; for(i=0;i<3;i++){ if(i%2==1) break; sum+=i; }?", {"5", "1", "3", "0"}, 3},
        {"Output of sum=0; for(i=0;i<3;i++){ if(i%2==1) continue; sum+=i; }?", {"2", "3", "0", "1"}, 0},
        {"What is a null statement?", {"Statement with no op", "Empty ;", "Incomplete decl", "Only label"}, 2},
        {"Meaning of for(;;)?", {"Exit immediately", "Count to 10", "Fixed times", "Infinite loop"}, 3},
        {"Output i=3; while(i>0); { printf(\"%d \", i); --i; }?", {"3 2 1 0", "3 2 1", "Does not compile", "Infinite loop"}, 3},
        {"Command pastes copied line in vi?", {"rm", "yy", "p", "dd"}, 2},
        {"Loop construct guarantees body runs once?", {"switch", "for", "while", "do-while"}, 3},
        {"Undo last action in vi?", {":back", "ctrl+z", ":undo", "u"}, 3},
        {"Command to copy a line in vi?", {"mv", "dd", ":wq", "yy"}, 3}};
    int n2 = sizeof(quiz2) / sizeof(quiz2[0]);

    /* Quiz 3: Chapter 7 */
    Question quiz3[] = {
        {"Correct format specifier for unsigned int?", {"%ld", "%u", "%d", "%i"}, 1},
        {"Safest type conversion to prevent data loss?", {"int->long", "char->int", "float->int", "double->float"}, 0},
        {"Format specifier for long int?", {"%hd", "%f", "%d", "%ld"}, 3},
        {"unsigned int is?", {"short int", "unsigned int", "int", "long int"}, 1},
        {"What is integer overflow?", {"Var too large", "Program crashes", "Result too large", "Scanf error"}, 2},
        {"Prevent overflow when multiplying ints?", {"i = j * (long)j", "i = j * j", "i = (long)(j * j)", "i = (long) j * j"}, 3},
        {"Cast to convert int to double?", {"(long)dividend/divisor", "(int)dividend/divisor", "(float)dividend/divisor", "(double)dividend/divisor"}, 3},
        {"Highest precision floating type?", {"double", "float", "long double", "extended"}, 2},
        {"Specify float constant explicitly?", {"F3.14", "3.14L", "3.14F", "3.14"}, 2},
        {"typedef int Bool; does?", {"Defines macro", "New integer type", "Alias for int", "Changes bool size"}, 2},
        {"Header for size_t?", {"stdio.h", "stdlib.h", "limits.h", "string.h"}, 1},
        {"ASCII value of 'A'?", {"65", "48", "97", "32"}, 0},
        {"Read single char with scanf?", {"scanf(\"%c\", &ch)", "scanf(\"%f\", &ch)", "scanf(\"%d\", &ch)", "scanf(\"%s\", &ch)"}, 0},
        {"getchar() vs scanf?", {"Skips whitespace", "Reads one char including whitespace", "Reads line", "Returns char"}, 1},
        {"Loop to skip until newline?", {"do { ch = getchar(); } while (ch == ' ')", "do { ch = getchar(); } while (ch != '\n')", "while (ch != ' ')", "do { ch = getchar(); } while (ch == '\n')"}, 1},
        {"Purpose of toupper(ch)?", {"Test alphabet", "To lowercase", "To uppercase", "Num->char"}, 2},
        {"Header for toupper?", {"ctype.h", "stdbool.h", "string.h", "stdio.h"}, 0},
        {"Specifier for float?", {"%c", "%ld", "%f", "%d"}, 2},
        {"Which is char constant?", {"A", "char A", "\"A\"", "'A'"}, 3},
        {"Output of 'b' + 3?", {"'e'", "'d'", "'u'", "'k'"}, 0}};
    int n3 = sizeof(quiz3) / sizeof(quiz3[0]);

    /* Quiz 4: Chapter 8 */
    Question quiz4[] = {
        {"What does int a[10]; do in C?", {"Declares array of 10 ints", "Initializes 10 arrays", "Declares int value 10", "Allocates memory dynamically"}, 0},
        {"Why use #define N 10?", {"Improves performance", "Easier debug", "Auto init", "Easy size updates"}, 3},
        {"Valid array init?", {"int a[]=10;", "array a=[1,2,3];", "int a[]={1,2,3};", "int a={1,2,3};"}, 2},
        {"Access outside index?", {"Wraps to 0", "Compile error", "Undefined behavior", "Stops program"}, 2},
        {"Index of first element?", {"1", "0", "Depends", "-1"}, 1},
        {"Partial init stores?", {"Prev memory", "Rest zero", "Compile error", "Random"}, 1},
        {"Loop to traverse array?", {"while", "for", "do-while", "switch"}, 1},
        {"Assign to a[5]?", {"Stores last", "Returns 0", "Warns", "Undefined behavior"}, 3},
        {"scanf array syntax?", {"scanf(\"%d\", &a)", "scanf(\"%d\", &a[i])", "scanf(\"%d\", a)", "scanf(a[i])"}, 1},
        {"Max index b[100]?", {"100", "99", "98", "101"}, 1},
        {"Storage order?", {"Random", "Contiguous", "Alternating", "Reversed"}, 1},
        {"NOT allowed?", {"x[2]=5;", "int b[0];", "int x[10];", "int a[]={1,2};"}, 1},
        {"Return arrays?", {"Yes via structs", "No constants", "Return pointer", "Yes as arrays"}, 2},
        {"Access operator?", {"[]", "&", ".", "->"}, 0},
        {"int a[2]={5}; does?", {"Skip init", "a[0]=5,a[1]=0", "All=5", "Error"}, 1},
        {"Declare 2D array?", {"int a[3,4];", "int a=[3][4];", "int a[3][4];", "array a(3,4);"}, 2},
        {"Row-major?", {"Bitwise", "Column", "Reverse", "Row-wise"}, 3},
        {"2D partial init?", {"Yes uninit", "Yes zero", "No", "Only first"}, 1},
        {"Elements in x[][3]={{1,2,3},{4,5,6}}?", {"3", "0", "9", "6"}, 3},
        {"Output printf(\"%d\", a[1])?", {"2", "0", "1", "Garbage"}, 0},
        {"sizeof a[5]?", {"20", "4", "8", "10"}, 0},
        {"Init all zero?", {"int a[5]={0};", "int a[5]=0;", "int a[]={1,1,1};", "int a={0};"}, 0},
        {"Loop a[5]?", {"for(i=1;i<=5;i++)", "for(i=0;i<=5;i++)", "for(i=1;i<5;i++)", "for(i=0;i<5;i++)"}, 3},
        {"Print arr[]={4,5,6}; arr[3]?", {"4", "5", "6", "Garbage"}, 3},
        {"Pass array syntax?", {"void foo(int*);", "All of above", "void foo(int[]);", "void foo(int[10]);"}, 1},
        {"Assign arr1=arr2?", {"Only static", "Yes", "No copy", "Only char"}, 2},
        {"Declare 3x4?", {"int a[12];", "int a[4][3];", "int a[3][4];", "array[3,4];"}, 2},
        {"Pass arrays?", {"Address copy", "By value", "Not allowed", "By reference"}, 3},
        {"Print *(p+2)?", {"2", "3", "Error", "1"}, 1},
        {"Copy arrays safely?", {"strcpy()", "memcpy()", "alloca()", "assign()"}, 1}};
    int n4 = sizeof(quiz4) / sizeof(quiz4[0]);

    /* Quiz 5: Chapters 10 & 11 */
    Question quiz5[] = {
        {"What is the result of f(5) for the Fibonacci-style recursive function defined as: f(n) = f(n-1) + f(n-2), with f(1) = 1 and f(2) = 1?", {"8", "11", "5", "1"}, 2},
        {"Which is NOT a major element of a C program?", {"Memory map templates", "Preprocessing directives", "Function definitions", "External variable declarations"}, 0},
        {"Where should #include directives appear in a well-organized C program?", {"After external declarations", "After the main()", "After function definitions", "At the beginning"}, 3},
        {"Which of the following describes local variable scope?", {"Function scope", "Global scope", "File scope", "Block scope"}, 3},
        {"What is the scope of a function parameter?", {"Block scope", "Program scope", "File scope", "Loop scope"}, 0},
        {"What is the output of storage.c with a local counter inside fn()?", {"1, 1, 1, 1, 1", "1, 2, 3, 4, 5", "5, 5, 5, 5, 5", "0, 1, 2, 3, 4"}, 0},
        {"What is the disadvantage of using global variables?", {"Easier parameter passing", "Faster execution", "Harder to reuse functions", "Improved memory management"}, 2},
        {"Why should variable i be local in Slide 21?", {"To avoid syntax errors", "To avoid unintended sharing between loops", "To allow recursion", "To reduce memory use"}, 1},
        {"Which symbol is used to declare pointer variables in C?", {"&", "ref", "ptr", "*"}, 3},
        {"What does '%p' in printf print?", {"Dereferenced data", "Pointer address", "Character", "Pointer value"}, 1},
        {"What happens if you use an uninitialized pointer?", {"Runtime warning", "Compilation error", "Undefined behavior", "It works fine"}, 2},
        {"What operator is used to access the value a pointer points to?", {"%", "*", "#", "->"}, 1},
        {"What operator gets the address of a variable?", {"&", "#", "~", "*"}, 0},
        {"If p points to i, what does *p = 2 do?", {"Sets &i to 2", "Sets i to 2", "Throws error", "Sets p to 2"}, 1},
        {"Which assignment is illegal if i is int and p and q are int pointers?", {"p = i;", "p = q;", "p = &i;", "p = *&q;"}, 0},
        {"What is the output of the scope exercise in Slide 28?", {"2 2 2 2", "6 3 2 3", "2 3 2 3", "6 2 2 2"}, 1},
        {"Which of the following is a valid pointer declaration?", {"p *int;", "int *p;", "int p*;", "*int p;"}, 1},
        {"What type of memory is automatically deallocated at the end of a function?", {"Global", "Automatic", "File-scope", "Static"}, 1},
        {"What does a block scope mean for a variable?", {"It is available everywhere", "It overrides the main scope", "It is visible only within its block", "It is global unless static"}, 2},
        {"What happens when a variable declared inside a block has the same name as an external variable?", {"The external one overrides", "The internal variable hides the external one", "They share the same value", "An error occurs"}, 1},
        {"Why are global variables risky in multi-function programs?", {"They aren't visible to all functions", "They must be passed explicitly", "Bugs are harder to trace", "They consume too much memory"}, 2},
        {"Which keyword do you use to create a pointer to a double?", {"pointer<double>", "*double", "double x;", "ref double"}, 1},
        {"Why is it generally better to use parameters instead of global variables for communication between functions?", {"It saves memory", "It prevents pointer errors", "It increases compilation speed", "It improves reusability and clarity"}, 3},
        {"What would be the correct way to declare multiple pointer variables to int?", {"int* p, q;", "int *p; int *q;", "int *p, q;", "int *p, *q;"}, 3},
        {"Which of the following is a good reason to avoid global variables in large programs?", {"They always use more memory", "They make the code run slower", "They lead to hidden dependencies", "They can't be declared in headers"}, 2},
        {"What is the scope of a variable declared inside an if block?", {"File scope", "Until program termination", "The entire function", "From its declaration to the end of the block only"}, 3},
        {"Which of the following accurately describes the default behavior of a local variable in C?", {"It retains its value between function calls", "It is stored in ROM", "It must be passed by reference", "It is re-initialized on every call and discarded after"}, 3},
        {"What is the main purpose of using pointer variables in C?", {"To simplify loops", "To make global variables more accessible", "To work with memory addresses and dynamic data", "To access arrays only"}, 2},
        {"What is printed? int main() { int b = 4, *q; q = &b; *q = 9; printf(\"%d %d\", b, *q); return 0; }", {"9 9", "4 9", "4 4", "9 4"}, 0},
        {"Given int a[] = {3, 5, 7};, what does *(a + 1) evaluate to?", {"Address of a[1]", "3", "a[0]", "5"}, 3}};
    int n5 = sizeof(quiz5) / sizeof(quiz5[0]);

    /* Quiz 6: Chapter 13 */
    Question quiz6[] = {
        {"What is the actual type of a string literal like \"abc\" when declared in C?", {"int *", "char *", "char[]", "string"}, 2},
        {"What type does a string literal like \"abc\" decay to when used in an expression or passed to a function in C?", {"string", "int *", "char *", "char[]"}, 2},
        {"How many bytes are set aside for the string \"abc\" in memory?", {"5", "8", "4", "It depends on the compiler"}, 2},
        {"What character is used to mark the end of a string in C?", {"\t", "\e", "\n", "\0"}, 3},
        {"Which of the following creates a null pointer to a string?", {"char *s = \"\\n\";", "char *s = NULL;", "char s[] = \"NULL\";", "char s[] = \"\";"}, 1},
        {"Which of the following correctly defines an empty string?", {"char *s = NULL;", "char s[] = \"NULL\";", "char s[] = \"\";", "char *s = \"\\n\";"}, 2},
        {"What will the following code do? char *p = \"abc\"; *p = 'z';", {"Produce a warning", "Cause undefined behavior", "Change 'a' to 'z'", "Compile but do nothing"}, 1},
        {"What does this declaration define: char date1[8] = \"June 15\";", {"An incomplete array", "A character array with a null terminator", "A string literal", "A char pointer"}, 1},
        {"What size must a character array have to hold an 80-character string?", {"81", "80", "83", "79"}, 0},
        {"Why is it dangerous to define a char array as char date3[7] = \"June 15\";?", {"Cannot store the null character", "Invalid array declaration", "Too much memory", "Won't compile"}, 0},
        {"Which of the following is legal for declaring a string?", {"string date = \"July\";", "char *date = {'J','u','l','y'};", "char date[] = {'July'};", "char date[] = \"July 4\";"}, 3},
        {"What is the major difference between char *date = \"June 15\"; and char date[] = \"June 15\";?", {"They both point to different data types", "Only one has a null terminator", "One is mutable, one is not", "Both are pointers"}, 2},
        {"What is the output of printf(\"%s\", str); if str[] = \"fun\"?", {"FUN", "f", "fun", "str"}, 2},
        {"What causes scanf(\"%s\", str); to stop reading?", {"A whitespace", "A comma", "An integer", "A period"}, 0},
        {"What issue occurs if you don't use bounds with scanf(\"%s\", str);?", {"Buffer overflow", "Logical error", "Syntax error", "Nothing"}, 0},
        {"What does scanf(\"%20s\", str); do differently than scanf(\"%s\", str);?", {"Writes 20 spaces", "Stops after a newline", "Reads until null", "Reads only 20 characters"}, 3},
        {"If sentence[21] is defined as char sentence[SENT_LEN+1], how many characters can it store?", {"Unlimited", "19", "21", "20"}, 3},
        {"When entering: To C, or not to C, how much will scanf(\"%s\", str); capture?", {"The full sentence", "Nothing", "Only To C", "Only To"}, 3},
        {"Which user-defined function from Slide 33 stops at the first newline and discards the rest of the line?", {"read_line()", "scanf()", "gets()", "getline()"}, 0},
        {"Which POSIX function reads an entire line from standard input, stopping at the newline?", {"getline()", "read_line()", "scanf()", "gets()"}, 0},
        {"What is the significance of #define STR_LEN 10 in main()?", {"Makes a null character", "Sets string value", "Counts newlines", "Sets max characters"}, 3},
        {"What's the result of using gets() for string input?", {"Safe input", "Ignores whitespace", "No effect", "Possible overflow"}, 3},
        {"How many characters are stored in char name[] = \"Bob\";?", {"3", "5", "Depends on OS", "4"}, 3},
        {"What does char *p = \"abc\"; point to?", {"Null character", "First character 'a'", "Second character", "Array address"}, 1},
        {"Which line is invalid?", {"char ch = 89;", "char ch[] = \"cd\";", "char *ch = \"ab\";", "char *ch = 'x';"}, 3},
        {"What happens if a string isn't null-terminated?", {"It causes garbage or crash", "Nothing", "Stops at the first letter", "Prints blank"}, 0},
        {"Which string operation causes undefined behavior?", {"printf(\"%s\", str);", "strlen(str);", "strcpy(dest, src);", "*p = 'z'; where p points to a literal"}, 3},
        {"Which of the following correctly accesses the 3rd character in a string str?", {"*(str + 2)", "*str[2]", "str + 2", "str[3]"}, 0},
        {"Which is the safest way to prevent buffer overflow using scanf?", {"Avoid input functions", "Use scanf(\"%ns\", str); with n defined", "Use fgets()", "Use gets()"}, 1},
        {"Which function version reads characters one by one using pointer notation?", {"for (p = s; *p != '\0'; p++)", "while ((ch = getchar()) != '\n')", "str[i++] = ch;", "scanf(\"%s\", str)"}, 0}};
    int n6 = sizeof(quiz6) / sizeof(quiz6[0]);

    /* Display menu and run the selected quiz */
    printf("Select a quiz to run:\n"
           "1) Ch.4 & 5\n"
           "2) Ch.6\n"
           "3) Ch.7\n"
           "4) Ch.8\n"
           "5) Ch.10 & 11\n"
           "6) Ch.13\n"
           "Enter choice 1-6: ");

    int choice;
    if (scanf("%d", &choice) != 1)
        return 0;

    /* Clear input buffer */
    while (getchar() != '\n')
        ;

    /* Run the selected quiz */
    switch (choice) {
    case 1:
        run_quiz(quiz1, n1);
        break;
    case 2:
        run_quiz(quiz2, n2);
        break;
    case 3:
        run_quiz(quiz3, n3);
        break;
    case 4:
        run_quiz(quiz4, n4);
        break;
    case 5:
        run_quiz(quiz5, n5);
        break;
    case 6:
        run_quiz(quiz6, n6);
        break;
    default:
        printf("Invalid selection.\n");
    }

    return 0;
}