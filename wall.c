#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int A = get_int("FUCK U? \n");
    for (int i = 0; i < A; i++)
    {
        for (int r = 0; r < A; r++)
        printf("#");
        printf("\n");
    }
}
