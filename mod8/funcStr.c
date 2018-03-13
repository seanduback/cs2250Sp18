/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:04:53 AM
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
const int INPUT_STR_SIZE =50; // Input string size

// Function Prototypes
void StrSpaceToHyphen(char modString[], char sep);
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE]; // Input string from user
    //prompt the user from input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);
    // Call function to modify user defined string
    StrSpaceToHyphen(userStr, ':');

    printf("String with hypens: %s\n", userStr);


    return 0;
}
// Function Definitions
void StrSpaceToHyphen(char modString[], char sep)
{
    int i = 0;
    for ( i = 0; i < strlen(modString); ++i)
    {
        if (modString[i] == ' ')
        {
            modString[i] = sep;
        }
    }
    return;
}


