/*
 * =====================================================================================
 *
 *       Filename:  ProgAssM8_Authoring.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2018 02:48:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Constants
const int STRSIZE = 500;
// Function Prototypes
int GetNumOfNonWSCharacters(char userString[]);
void PrintMenu(char userChoice);
// Main Function
int main()
{
    char userString[STRSIZE];

    printf("Enter a sample text:\n");
    fgets(userString, STRSIZE, stdin);
    printf("\nYou entered: %s\n", userString);
    return 0;
}
// Function Definitions

// Output the number of alpha characters 
int GetNumOfNonWSCharacters(char userString[])
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
//User menu
void PrintMenu(char userChoice)
{
    return;
}

