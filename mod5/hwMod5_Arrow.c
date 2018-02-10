/*
 * =====================================================================================
 *
 *       Filename:  hwMod5_Arrow.c
 *
 *    Description:  Homework 4.14 Ch 4 Program: Drawing a half arrow 
 *
 *        Version:  1.0
 *        Created:  02/10/2018 02:45:41 PM
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
    int arrowBaseHeight = 0;
    int arrowBaseWidth = 0;
    int arrowHeadWidth = 0;
    int i, j;

    printf("Enter arrow base height: ");
    scanf("%d",&arrowBaseHeight);

    printf("Enter arrow base width: ");
    scanf("%d",&arrowBaseWidth);

    printf("Enter arrow head width: ");
    scanf("%d",&arrowHeadWidth);

    for ( i = 0; i < arrowBaseHeight; i++)
    {
        for( j = 0; j <arrowBaseWidth; j++)
        {
            printf("*");
            printf("\n");
        }
        for(j = 0; j <arrowHeadWidth - i; j++)
        {
            printf("*");
            printf("\n");
        }
    }

    return 0;
}
// Function Definitions


