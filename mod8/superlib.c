/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:38:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "superlib.h"
#include <ctype.h>
// Function Definitions
void StrSpaceToHyphen(char modString[], char sep)
{
    int i = 0;
    for ( i = 0; i < strlen(modString); ++i)
    {
        if (modString[i] == ' ')
        {
            modString[i] = sep;
        }
    }
    return;
}
// Task1
int StrCountDigits(char modString[])
{
    int i = 0; 
    int count = 0;
    for (i = 0; i < strlen(modString); i ++)
    {
        if ( isdigit(modString[i] ))
        {
            count = count + 1 ;
        }
    }
    return count;
}



