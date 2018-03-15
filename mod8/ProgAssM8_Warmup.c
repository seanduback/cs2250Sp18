/*
 * =====================================================================================
 *
 *       Filename:  ProgAssM8_Warmup.c
 *
 *    Description:  Programming Assignment M8 warmup
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:43:23 AM
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
#include <ctype.h>

// Constants
const int STRSIZE = 128;
// Function Prototypes
int GetNumOfCharacters(char userString[]);
void OutputWithoutWhitespace(char userString[]);
// Main Function
int main()
{
    char userString[STRSIZE];
    printf("Enter a sentence or a phrase:\n");
    fgets(userString, STRSIZE, stdin);
    printf("You entered: %s\n", userString);
    printf("Number of characters: %d\n", GetNumOfCharacters(userString));
    OutputWithoutWhitespace(userString);
    return 0;
}
// Function Definitions
// Output the number of alpha characters 
int GetNumOfCharacters(char userString[])
{
    int i = 0; 
    int count = 0;
    for (i = 0; i < strlen(userString); i ++)
    {
        if ( isalpha(userString[i] ))
        {
            count = count + 1 ;
        }
    }
    return count;
}
// Remove white space
void OutputWithoutWhitespace(char userString[])
{
    int i = 0;
    for ( i = 0; i < strlen(userString); ++i)
    {
        if (userString[i] == ' ')
        {
            userString[i] = userString[i+1];
        }
    }
    printf("%s\n", userString);
    return;
}




