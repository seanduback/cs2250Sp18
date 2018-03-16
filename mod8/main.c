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
void OutputWithoutWhitespace(char userString[], char userStringNowhite[]);
// Main Function
int main()
{
    char userString[STRSIZE];
    char userStringNoWhite[STRSIZE];

    //Prompt the user to enter a string and output it
    printf("Enter a sentence or phrase:\n\n");
    fgets(userString, STRSIZE, stdin);
    printf("You entered: %s\n\n", userString);

    //Call GetNumOfCharacters()
    printf("Number of characters: %d\n", GetNumOfCharacters(userString));

    OutputWithoutWhitespace(userString, userStringNoWhite);
 printf("String with no whitespace: %s\n", userStringNoWhite);
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
        if ( isalnum(userString[i] ))
        {
            count = count + 1 ;
        }
        if (userString[i] == ' ')
        {
            count = count + 1 ;
        }
        if ( ispunct(userString[i] ))
        {
            count = count + 1 ;
        }

    }
    return count;
}
// Remove white space
void OutputWithoutWhitespace(char userString[],char userStringNoWhite[])
{
    int i,j = 0;
    for ( i = 0; userString[i] != 0; ++i)
    {
       if (userString[i] != ' ')
        {
            userStringNoWhite[j] = userString[i];
            j ++;
        }
       userStringNoWhite[j] = 0; 
    }
    return;
}




