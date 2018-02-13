/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  learning arrays
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:45:28 AM
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
const int LEN = 4;
// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];
    ar[0] = 33; // first member
    ar[1] = 22; // second member
    ar[2] = 66; // third member
    ar[3] = 99; // fourth member
    printf("First value %d\n", ar[0]);
    printf("Fourth vaule %d\n", ar[3]);
    //Initializer the full array
    for(int i = 0; i < LEN; i++)
    {
        // initialize numbers divisible by 3 to 0
        // else set it to -99
        if ( (i % 3) == 0)
        {
           ar[i] = 0;        }
        else
        {
        ar[i] = -99; // initialize to 99
        }
    }
    
    // Iterate over the full array 
    for(int i = 0; i < LEN; i++)
    {
        printf("The %d value is %d\n", i + 1, ar[i]);
    }



    return 0;
}
// Function Definitions


