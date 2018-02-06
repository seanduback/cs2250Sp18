/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Prompt for positive number, stay in loop until on is entered 
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:17 AM
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
    int num = -1;
while(num < 0)
{
    printf("Enter a positive number >= 0\n");
    scanf("%d", &num);
}
printf("Thank you!\n");
    return 0;
}
// Function Definitions


