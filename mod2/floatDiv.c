/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description: Learn about float and int divison
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:00 AM
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
    int age = 25;
    int grade = 303;
    double result;
    int iresult;

    //We need to cast the int to doubles
    result = (double)grade / (double)age;
    iresult = (double)grade / (double)age;
    printf("result = %lf\n", result);
    result = (double)grade / (double)age;
    printf("result = %lf\n", (double)iresult);
    // Print a double as an integer
    result = (double)grade / (double)age;
    printf("result = %d\n", (int)result);

    return 0;
}
// Function Definitions


