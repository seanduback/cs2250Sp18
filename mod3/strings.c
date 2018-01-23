/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  First Use of Strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:38 AM
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
    char name[11]; // allocate 20 chars + NULL char
    printf("Enter your name:\n");
    // If you use and array, for ex: string,
    // DO NOT use the & address operator
    // 2) The input ends with a space
    scanf("%s", name);
    printf("Your name is: %s\n", name);

    return 0;
}
// Function Definitions


