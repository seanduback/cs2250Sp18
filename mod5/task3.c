/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:12 AM
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
const int ROW = 10;
const int COL = 10;
// Function Prototypes

// Main Function
int main()
{
     
    for(int r = 1; r <= ROW; r ++)
    {
        for(int c =1; c <= COL; c ++ )
        {
            printf("[%3d] ", r * c);
        }
        printf("\n");
        // value of c? NO. out of scope
        // printf("r[%d], c[%d]\n", r, c); 
    }//end of row
    // what value of c and r? No. out of scope
    

    return 0;
}
// Function Definitions


