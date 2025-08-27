#include <stdio.h>


void own_assert(int value)
{
    if (!(value))
    {
        printf ("Assertion fail");
        exit(1);
    }
}