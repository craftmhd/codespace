#include <stdio.h>
#include <cs50.h>

int main()
{
   string answer = get_string("what's your name? ");
   string last = get_string("whats up bitch... :))))?");
   printf("say, %s %s \n", answer, last);
}