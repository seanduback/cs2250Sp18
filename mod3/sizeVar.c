/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  Check variable size in bytes
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:59:59 AM
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
    int num = 1;
    unsigned int unum = 1;
    printf("The size of int is [%ld]\n", sizeof(num));
    printf("The size of uint is [%ld]\n", sizeof(unum));
    // sizeof: returns the size of variable in bytes
    num = num * 10000;
    unum = unum * 10000;
    printf("Num = [%d], uNum = [%u]\n", num, unum);
    num *= 10000; 
    unum *= 10000; 
    //compound operator
    printf("Num = [%d], uNum = [%u]\n", num, unum);
    num *= 10000; 
    unum *= 10000; 
    //compound operator
    printf("Num = [%d], uNum = [%u]\n", num, unum);
    //What is the range of an int?
    //2^32 = 4394000000 = i combinations
    //Range: -(i / 2) to +(i / 2 - 1)
    return 0;
}
// Function Definitions

 
