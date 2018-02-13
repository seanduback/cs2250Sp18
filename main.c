/*
 * =====================================================================================
 *
 *       Filename:  hwMod5_Arrow2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/10/2018 02:52:58 PM
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

    printf("Enter arrow base height:\n");
    scanf("%d",&arrowBaseHeight);

    printf("Enter arrow base width:\n");
    scanf("%d",&arrowBaseWidth);

    printf("Enter arrow head width:\n");
    scanf("%d",&arrowHeadWidth);
    printf("\n");

    for( i = 0; i < arrowBaseHeight; i ++)
    {
        for (j = 0; j < arrowBaseWidth; j ++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 0; i < arrowHeadWidth; i ++)
    {
        for(j = 0; j <arrowHeadWidth -i; j++)
    {
            printf("*");
    }
        printf("\n");
    }  

return 0;
}
// Function Definitions


