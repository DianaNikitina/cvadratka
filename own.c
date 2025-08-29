//! @file 
#include <stdio.h>
#include <stdlib.h>

/*!
	\brief my assert 
	\author NKD
	\version 1.0
	\date 22.08.25 - 30.08.25
	\warning include stdlib
*/


void own_assert(int value)
{
    if (!(value))
    {
        printf ("Assertion fail");
        exit(1);
    }
}