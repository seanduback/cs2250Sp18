/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9: ");
    scanf("%c", &num);
    if(num == '0')
    {
        printf("You've entered 0\n");
    }
    else
    {
        printf("You entered non-zero [%c]\n", num);
    }
    if( isalpha(num) != 0 ) // A-Z and a-z
    {
        printf("It is alpha\n");

    }
    else if(isdigit(num) != 0)
    {
        printf("Its a digit");
    }
    else
    {
        printf("You are [%c]\n", num);
    }

    return 0;
}
// Function Definitions


