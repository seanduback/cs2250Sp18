/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description:  infinite while loop
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:23:48 AM
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
    int num = 2;
    int age = 21;
    while(num)
    {
        printf("Num [%d]\n", num);
        num--;
    }
    // This loop requires a break statement 
    while(1)
    {
        if(age == 0)
        {
            printf("Thank you\n");
            break;// out of the loop
        }
        printf("Your age is [%d}\n", age);
        age--;
    }
    printf("Done\n");

    return 0;
}
// Function Definitions


