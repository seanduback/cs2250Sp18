/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Practice while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:52:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const int low = 1;
const int max = 20;

// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    unsigned int fact = 1;
    printf("Please enter a number from %d-%d\n", low, max);
    printf(" and I will give you the factorial\n");
    scanf("%d", &num);
    if(num >= low && num <= max)
    {
        printf("Calculating Factorial\n");
        while(num > 0)
        {
            // Do your work here
            fact = fact * num;
            printf("Num = [%d]\n", num);
            num -= 1;

        }

    }
    else
    {
        printf("You did not follow the instructions\n");
    }
    printf("Done Your fact is [%u] \n", fact);

    return 0;
}
// Function Definitions


