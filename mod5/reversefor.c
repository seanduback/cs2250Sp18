/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  count down for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:55:25 AM
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
    char name [] = "Waldo Weber";

    printf("Hi [%s] you are [%lu] bytes long.\n", name, sizeof(name));
    // print name in reverse order
    // print 1 char at a time
    for( int c = 0; c < sizeof(name); c++)
    {
        printf("[%c]\n", name[c]);
    }

    for(int i= 10; i >0; i--)
    {
        printf("i [%d}\n", i);
    }
    return 0;
}
// Function Definitions


