#include "squareSolver.h"
#include "in.h"
#include "out.h"
#include "OneTest.h"
#include "struct.h"
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
#include <unistd.h>



//int x = 2;
//int *y = &x;
//0x05524 => 2
//0x06823 => 0x05524
//x -> 2
//&x ->


/*!
    \author NKD
    \version 1.7
    \date 22.08.25 - 23.08.25
    \warning Do not confuse & && *
*/

//argc, argv, getopts()

//-t, -s, -i

int main(int argc, char *argv[])
{
    int k = 1;

    struct coef num = {.a = NAN, .b = NAN, .c = NAN};

    struct res ans = {.x1 = NAN, .x2 = NAN, .c_root = 0};

    printf ("This is solution of square\n");

    int opt = 0;

    char *opts = "sti";

    if(argc == 1) 
    {
        printf("getopt test\n");
        printf("opts -s - square_solver\n");
        printf("opts -t - run_test\n");
        printf("opts -i - choose square_solver or run_test\n");
        return 0;
    }

    while((opt = getopt(argc, argv, opts)) != -1) 
    {
        switch(opt) {
            case 's':
                in(&num);
                break;
            case 't':
                /*while (opt != 't')
                    {
                        CleanBuffer();
                        printf ("Try again\n");
                        printf ("Enter s if you want to solve equation\nOR\n");
                        printf ("Enter t if you want to run tests\n");

                    }*/
                printf ("UnitTest\n");
                RunTest();
                exit(1); 
                break;
            case 'i':
                k = option();
                if (k == 0) in(&num);
                break;
        }
    }

    printf("> a = %lg, b = %lg, c = %lg\n", num.a, num.b, num.c);

    ans.c_root = SquareSolve(&num, &ans);

    out (ans);

    return 0;
}
