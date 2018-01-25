/*
 * =====================================================================================
 *
 *       Filename:  rand.c
 *
 *    Description:  Learn how to use random numbers
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //for rand() function
#include <time.h>   //for srand() function: set your random seed

// Constants

// Function Prototypes

// Main Function
int main()
{
    //Set your random seed
    srand((int)time(0));
    printf(" A random num[%d]\n", rand()%100);
    printf(" A random num[%d]\n", rand()%100);
    printf(" A random num[%d]\n", rand()%100);
    printf(" A random num[%d]\n", rand()%100);
    printf(" A random num[%d]\n", rand()%100);

    return 0;
}

// Function Definitions


