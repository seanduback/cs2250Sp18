/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:40:54 AM
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

// Constants

// Function Prototypes

// Main Function
int main()
{
    char qbfn[50] = "";
    char qbln[50] = "";

    printf("Select a QB, ");
    printf("and I'll tell you the number of Super bowl wins: \n");
    printf("Tom Brady\n");
    printf("Peyton Manning\n");
    printf("Eli Manning\n");
    printf("None\n");
    // take input
    scanf("%s", qbfn); //requires 1 input
    //
    if( strcmp(qbfn, "None") == 0)
    {
        printf("No Super Bowls\n");
    }
    else
    {
        scanf("%s", qbln); //requires 1 input
        printf("Hi %s %s\n", qbfn, qbln);
    }
    return 0;
}
// Function Definitions


