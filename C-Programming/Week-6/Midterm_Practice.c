/*
 Author: C-Kuzy
 Description: The following file contains all 5
*/

/* Prompt:
Write a function that reads in a line of input from the stdin.
Your function MUST:
- Skip all leading white space
- Store at most `n` characters, not including the null character, into
`str`
- Append the null character to `str`
- Must return the number of character stored
Use the following signature:
- int readLine(char str[], int n)
Hint:
- The isspace function returns true if a character is whitespace
otherwise it returns false.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

int read_line(char str[], int n);
int remove_whitespace(char str[]);
void vowel(char str[]);

int main(void)
{
    char input[100];
    printf("Enter a line: ");
    read_line(input, 100);
    printf("You entered: \"%s\"\n", input);
    remove_whitespace(input);
    printf("Your input without whitespaces: \"%s\"", input);
    vowel(input);
    return 0;
}

int remove_whitespace(char str[])
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]))
        {
            continue;
        }
        str[j++] = str[i];
    }
    str[j] = '\0';
}

void vowel(char str[]) {
    int vowels = 0;
    int consonants = 0;
    int ii = 0;
    char arrayVowels[25] = {};
    char arrayConsonnats[25] = {};
    for (; ii < str[ii] != '\0'; ii++)
    {
        if (str[ii] == 'a' || str[ii] == 'e' || str[ii] == 'i' || str[ii] == 'u' ||
            str[ii] == 'o')
        {
            arrayVowels[vowels] = str[ii];
            vowels++;
        }
        else
        {
            arrayConsonnats[consonants] = str[ii];
            consonants++;
        }
    }
    arrayVowels[vowels] = '\0';
    arrayConsonnats[consonants] = '\0';
    printf("\n Number of vowels: %d \n Number of consonants: %d \n", vowels,
           consonants);
    printf("\nVowels are: %s", arrayVowels);
    printf("\nConsonants are: %s", arrayConsonnats);
}
int read_line(char str[], int n)
{
    int ch, i = 0;
    while (isspace(ch = getchar()))
        ; // skip initial whitespace
    str[i++] = ch;
    while ((ch = getchar()) != '\n')
    {
        if (i < n - 1) // leave space for null terminator
            str[i++] = ch;
    }
    str[i] = '\0'; // terminate the string
    return i;
}
