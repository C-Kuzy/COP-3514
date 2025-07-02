/*
 Author: C-Kuzy
 Description: Midterm Free Response Questions Overview...

    Question #1: Write a function to pull Vowels/Consonants from an arrays and print them

    Question #2: Write a function that pulls the Minimum/Smallest and Maximum/Largest value from arrays

    Question #3: Create a function that removes whitespace from a given segment/line of text

    Question #4: Create a array that is responsible for sorting even and odd numbers

    Question #5: FOCUS ON being able to identify and explain what is wrong within the print arry reverse order

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdint.h>

 // QUESTION #1
const uint8_t isVowel[256] = {
    ['a'] = 1, ['e'] = 1, ['i'] = 1, ['o'] = 1, ['u'] = 1,
    ['A'] = 1, ['E'] = 1, ['I'] = 1, ['O'] = 1, ['U'] = 1,
};

void vowel(char str[]);

void vowel(char str[]) {
    int vowels = 0;
    int j = 0;
    char vsOnly[strlen(str)];
    int vCounter = 0;
    char csOnly[strlen(str)];
    int cCounter = 0;

    for (; str[j] != '\0'; j++) {
        uint8_t temp = isVowel[str[j]];
        vowels += temp;
        if (temp == 1) {
            vsOnly[vCounter] = str[j];
            vCounter++;
        }
        else {
            csOnly[cCounter] = str[j];
            cCounter++;
        }
    }
    printf("\nThe vowels are: %d", vowels);
    printf("\nThe vowels only array is: %.*s", vowels, vsOnly);
    printf("\nThe consonants are: %d", j - vowels);
    printf("\nThe consonants only array is: %.*s", j - vowels, csOnly);
}

 // QUESTION #2 
void large_and_small (int str[], int len) {

    int largest = str[0];
    int smallest = str[0];

    for (int i = 0; i < len; i++) {
        int num = str[i];
        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }
}

 // QUESTION #3
// int read_line(char str[], int n);
// int remove_whitespace(char str[]);

// int main(void) {
//     char input[100];

//     printf("Enter a line: ");
//     read_line(input, 100);
//     printf("You entered: \"%s\"\n", input);

//     remove_whitespace(input);
//     printf("Your input without whitespaces: \"%s\"", input);
//     vowel(input);

//     return 0;
// }

// int read_line(char str[], int n) {
//     int ch, i = 0;

//     while (isspace(ch = getchar()))
//         ; // skip initial whitespace

//     str[i++] = ch;

//     while ((ch = getchar()) != '\n') {
//         if (i < n - 1) // leave space for null terminator
//             str[i++] = ch;
//     }
//     str[i] = '\0'; // terminate the string
//     return i;
// }


 // Question #3
int remove_whitespace(char str[]) {
    int charRemoved = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            continue;

        charRemoved++;
        for (int j = i; str[j] != '\0'; j++)
            str[j] = str[j + 1];
    }
    return strlen(str) - charRemoved;
}

 // Question #4
void EvenOddFunction(int Array[], int size, int EvenArray[], int OddArray[]) {

}



 // QUESTION #5
void reverse(int a[], int n) 
{
    int start = 0, end = n-1;
    while (start < end) 
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
