#include <stdio.h>
int counter = 0;
void fn();

int main()
{
    int i;
    printf ("Program storage starting\n");
    for (i = 0; i < 5; i++)
    {
        fn();
    }
    printf ("Normal terminination\n");
    return 0;
}

void fn()
{
    counter++;
    printf ("This function has been called %d times\n", counter);
}