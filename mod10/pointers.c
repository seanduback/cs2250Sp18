/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  Quick review of ponters
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:43:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int i =7;
    //int pa[2]; //statically allocated
    int* pi = NULL; // pointer of int

    //pi = &i;
    //printf("i[%d] value that points to pi[%d]\n", i, *pi);
    printf("Enter number of elements: \n");
    scanf("%i", &i);
    // define array with input
    // use malloc: Takes one argument Number of bytes
    // To get number of bytes of a type use: sizeof(type)
    // type* pointer = (type*)malloc(sizeof(type))
    // when you are done
    // free(memory or address, pointer)
    //
    // Pointer to an array of intergers
    pi = (int*) malloc(i*sizeof(int)); 
    for(int j = 0; j < i; j ++)
    {
       printf("pi[%d] = %d\n", j , pi[j]);

    }
    // Return your memory
    free(pi);

    return 0;
}
// Function Definitions


