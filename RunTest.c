//! @file 
#include <stdio.h>
#include "OneTest.h"
#include <stdlib.h>
#include <math.h>

/*!
	\brief tests coef+roots+number roots 
	\author NKD
	\version 1.0
	\date 22.08.25 - 30.08.25
*/


void RunTest()
{
    FILE *fp = fopen("coef.txt", "r");
    int i = 0, passed = 0;

    for (i = 0; i < 6; i++) 
    {
        struct coef tests1 = {.a = NAN, .b = NAN, .c = NAN};

        struct res tests2 = {.x1 = NAN, .x2 = NAN, .c_root = 0};

        while  (fscanf(fp, "%lg, %lg, %lg, %lg, %lg, %d", &tests1.a, &tests1.b, &tests1.c, &tests2.x1, &tests2.x2, &tests2.c_root) != 6)
        {
            printf ("Invalid file");
            exit(1);
        }

        passed += OneTest (tests1, tests2);

    }

    printf("%d", passed);

    fclose (fp);

    //int size = sizeof (tests1)/sizeof (tests1[0]);

}