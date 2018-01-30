/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Practice using branches
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:29:57 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int pos = 0;
    printf("What is your position:\n");
    scanf("%d", &pos);
    // 1) If pos = 1 => gold medal
    // 2) If pos = 2 => silver medal
    // 3) If pos = 1 => bronze medal
    // 4) If pos = 1 => no medal
    if(pos == 1)
    {
        printf("You are %d gold medal.\n", pos);
    }

    else if(pos == 2)
    {
        printf("You are %d silver medal.\n", pos);
    }


    else if(pos == 3)
    {
        printf("You are %d bronze medal.\n", pos);
    }


    else
    {
        printf("You are %d place. Sorry no medal.\n", pos);
    }

    return 0;
}
// Function Definitions


