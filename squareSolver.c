
#include <math.h>

#include <assert.h>

#include "delta.h"

#include "struct.h"


int SquareSolve(struct coef *num, struct res *ans)
{

    double a = num->a, b = num->b, c = num->c;
    double x1 = ans->x1, x2 = ans->x2;

    assert (!delta(x1));
    assert (!delta(x2));

    double D = b*b - 4*a*c;
    if (delta(a) && delta(b) && delta(c))
        return -1;
    else
        if ((D < 0) || (delta(a) && delta(b) && !delta(c)))
            return 0;
        else
            if (delta(a) && !delta(b) && !delta(c))
            {
                x1 = -c/b;
                ans->x1 = x1;
                return 1;
            }
            else
                if ((delta(a) && !delta(b) && delta(c))||(!delta(a) && delta(b) && delta(c)))
                {
                    x1 = 0;
                    ans->x1 = x1;
                    return 1;
                }
                else
                    {
                        x1 = (-b + sqrt(D))/(2*a);
                        ans->x1 = x1;
                        x2 = (-b - sqrt(D))/(2*a);
                        ans->x2 = x2;
                        return 2;
                    }

}