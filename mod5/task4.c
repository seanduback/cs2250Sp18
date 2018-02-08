/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  print first 20 even numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:08:58 AM
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
    int num = 0;
    int maxNum = 20;
    int counter = 0;
    while(num <= maxNum)
    {
        //print even numbers 
        //skip odd numbers
        //when 20 even numbers, break loop
        printf("[%d]\n", num);
        num = num + 2;

    }
    num = 0;
    maxNum = 0;
    while(1)
    {
      if( ( num % 2 ) == 0)
      {
          printf("Even number [%d]\n", num);
      }
      else
      {
          printf("\tSkip odd number[%d]\n", num);
          num ++;
          continue;
      }
      num ++;
      counter ++;
        if (counter == 20)
        {
            break;
        }
    }// end of while loop
    return 0;
}
// Function Definitions


