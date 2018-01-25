/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Us index notation to access string members
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:43 AM
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
    //1) Define two strings
    //2) Get First name info
    //3) Get last name info
    //4) Display initials
    char fName[20];
    char lName[20];
    printf("Please enter your first name:\n");
    scanf("%s", fName);
    printf("Please enter your last name:\n");
    scanf("%s", lName);
    printf("Hello %s %s.\n", fName, lName);
    printf("Your initials are %c,%c.\n", fName[0], lName[0]);


    return 0;
}
// Function Definitions


