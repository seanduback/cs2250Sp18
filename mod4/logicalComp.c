/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  Range of values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:35:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>    //Boolean variables
// Main Function
int main()
{
    // Logic commands; AND &&, OR  , NOT !
    int grade;
    bool success = true;

    //1) Ask user for in value
    printf("Enter your grade:\n");
    scanf("%d", &grade);
    //2) If 100 <= value <= 90, then print 'A'
    if(grade >= 90 && grade <= 100)
    {
        printf("You got and A!\n");
    }
    //3) If 89 <= value <= 80, then print 'B'
    else if(grade >= 80 && grade <= 89)
    {
        printf("You got and B!\n");
    }
    //4) If 79 <= value <= 70, then print 'C'
    else if(grade >= 70 && grade <= 79)
    {
        printf("You got and C!\n");
    }
    //5) If 69 <= value, then print 'E'
    else 
    {
        printf("You got and E. Sorry buddy, take the class again.\n");
        success = false;
    }
    // Test for TRUE or FALSE
    if(success)
    {
        printf("Congratulations!\n");
    }
    else 
    {
        printf("See you next semester.\n");
    }
    return 0;
}
// Function Definitions


