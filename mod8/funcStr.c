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
#include "superlib.h"

// Function Prototypes
void StrSpaceToHyphen(char modString[], char sep);
int StrCountDigits(char modString[]);
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
    printf("There are [%d] digits\n", StrCountDigits(userStr)); 

    return 0;
}
// Function Definitions


