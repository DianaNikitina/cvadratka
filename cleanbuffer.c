//! @file 

#include <stdio.h>

/*!
	\brief clean buffer 
	\author NKD
	\version 1.0
	\date 22.08.25 - 30.08.25
*/
void CleanBuffer()
{
    while (getchar() != '\n'){}
}