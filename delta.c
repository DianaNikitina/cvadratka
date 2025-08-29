//! @file 

/*!
	\brief compare type double with null
	\author NKD
	\version 1.100 (?)
	\date 22.08.25 - 30.08.25
	\warning eps!!
*/
#include <math.h>

const double EPS = 1e-9;

int delta(double vallue)
{
    return (fabs(vallue) < EPS);
}