/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  Capture full strings including spaces
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:35:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants
const int STRSIZE = 128;

// Function Prototypes

// Main Function
int main()
{
    char fullName[STRSIZE];
    printf("Please enter your full name: ");
    fgets(fullName, STRSIZE, stdin);
    // frin string.h use strlen fpr string length
    for ( int i = 0; i < strlen(fullName); i ++)
    {
        printf("%c", fullName[i]);
    }

   // scanf("%s", fullName);
    printf("\nHi [%s]\n", fullName);

    return 0;
}
// Function Definitions


