/*
 * =====================================================================================
 *
 *       Filename:  switch.c
 *
 *    Description:  Test switch statments
 *    Note: Only works on integers, single char
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

// Main Function
int main()
{
    int pos = 0;
    printf("What is your position:\n");
    scanf("%d", &pos);
    switch(pos)
    {
        case 1:     // if (pos == 1)

            printf("You are %d gold medal.\n", pos);
            break;  //Leave the switch block

        case 2:     // if (pos == 2)

            printf("You are %d silver medal.\n", pos);
            break;

        case 3:     // if (pos == 3)

            printf("You are %d bronze medal.\n", pos);
            break;

        case 14:
        case 28:
        case 36:
            printf("You are %d plastic medal.\n", pos);
            break;


        default:    // else

            printf("You are %d place. Sorry no medal.\n", pos);

    }// end of switch

    printf("Adios amigo.\n");


    return 0;
}
// Function Definitions


