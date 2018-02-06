/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Make a multiplication table
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:53:44 AM
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
const int MIN = 1;
const int MAX = 10;
// Function Prototypes

// Main Function
int main()
{
    int row = MIN;
    int col = MAX;
    int num;

    //Row
    while(row <= MAX)
    {
        col = MIN;
        while (col <= MAX)
        {
            num = col * row;
            printf("%d ", num);
            col += 1;
        }
            row += 1;
            printf("\n");
        
    }
    return 0;
}
// Function Definitions


