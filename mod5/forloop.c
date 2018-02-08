/*
 * =====================================================================================
 *
 *       Filename:  forloop.c
 *
 *    Description:  for loop practice
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:30 AM
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
    //for loop
    //1) Init your condition
    //2} Do you work
    //3) Update condition
    // If still true, continue work 
    // ELSE finish loop
    int rounds = 3;

    while(rounds != 0)
        {
            printf("Hello there while\n");
            rounds -= 1;
        }
    // for loop version 
    rounds = 4;
    for(int r = 0; r < rounds; r++)
        {
            printf("Hello there for\n");
        }
    printf("round [%d]\n", rounds);
    printf("round [%d]\n", rounds++);
    printf("round [%d]\n", rounds);

    return 0;
}
// Function Definitions


