//! @file 

#include <stdio.h>
#include "RunTest.h"
#include "struct.h"
#include "cleanbuffer.h"

/*!
	\brief input data
	\author NKD
	\version 1.0
	\date 22.08.25 - 30.08.25
	\warning do not forget cleanbuffer
*/


void in (struct coef *num)
{

    printf ("Enter coefficient a: ");
    while (scanf ("%lg", &num->a) == 0)
    {
        CleanBuffer();
        printf ("Try again\n");
        printf ("Enter coefficient a: ");
    }

    printf ("Enter coefficient b: ");
    while (scanf ("%lg", &num->b) == 0)
    {
        CleanBuffer();
        printf ("Try again\n");
        printf ("Enter coefficient b: ");
    }

    printf ("Enter coefficient c: ");
    while (scanf ("%lg", &num->c) == 0)
    {
        CleanBuffer();
        printf ("Try again\n");
        printf ("Enter coefficient c: ");
    }
}

