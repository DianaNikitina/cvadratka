//! @file 

#include "squareSolver.h"
#include "struct.h"
#include "parseopt.h"
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
#include <unistd.h>

/*!
	\brief inizialization struct, option 
	\author NKD
	\version 1.0
	\date 22.08.25 - 30.08.25
	\warning do not inizialization null adress struct
*/

int main(int argc, char *argv[])
{

    struct coef num = {.a = NAN, .b = NAN, .c = NAN};

    struct res ans = {.x1 = NAN, .x2 = NAN, .c_root = 0};

    printf ("This is solution of square\n");

    parseopt(argc, argv);

    return 0;
}



