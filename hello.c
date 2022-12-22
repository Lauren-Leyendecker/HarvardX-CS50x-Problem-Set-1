#include <stdio.h>
#include <cs50.h>

// Asks the user for their name and then prints out "hello, <user name>"
int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}