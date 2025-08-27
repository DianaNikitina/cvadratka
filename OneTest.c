#include "squareSolver.h"

#include "delta.h"

#include "struct.h"

#include <math.h>

#define INF_ROOT -1
#define NO_ROOT 0
#define ONE_ROOT 1
#define TWO_ROOT 2


int OneTest (struct coef num, struct res ans)
{
    int c = 0, k = 0;
    struct res ans1 = {.x1 = NAN, .x2 = NAN, .c_root = 0};
    ans1.c_root = SquareSolve (&num, &ans1);

    switch (ans.c_root)
    {
        case INF_ROOT:
            c = (ans1.c_root == -1) ? 0 : 1;
            break;

        case NO_ROOT:
            c = (ans1.c_root == 0) ? 0 : 1;
            break;

        case ONE_ROOT: 
            c = ((ans1.c_root == 1) && ((delta(ans.x1 - ans1.x1))||(delta(ans.x2 - ans1.x2)))) ? 0 : 1;
            break;

        case TWO_ROOT: 
           c = ((ans1.c_root == 2) && (((delta(ans.x1 - ans1.x1)) && (((delta(ans.x2 - ans1.x2)))))||((delta(ans.x1 - ans1.x2)) && (delta(ans.x2 - ans1.x1))))) ? 0 : 1;
            break;

        default:
            break;

    }

    return c;
}

