/*
 * =====================================================================================
 *
 *       Filename:  hwMod5_Seats.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/10/2018 01:48:38 PM
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
int main(void) {
       int numRows = 2;
          int numCols = 3;
int i = 0;
   char j;
    
      for( i = 1; i <= numRows; i++)
         {
                
                   for(j='A';j<'A'+numCols;j++)
                             {
                                       printf("%d%c ",i , j);
                                             }
                      }

   printf("\n");

      return 0;
}
// Function Definitions


