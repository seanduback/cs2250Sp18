/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  Dynamically allocated memory
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:41:12 AM
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
    int num;
    int * sa = NULL;
    printf("How many numbers do you need?\n");
    scanf("%d", &num);
    //malloc takes number of bytes
    //%lu for long unsigned
    printf("int is [%lu] bytes\n", sizeof(int));
    printf("int array of [%d] is [%lu] bytes\n", num, num * sizeof(int));
    //malloc(<#bytes>)
    //cast address to pointer type (*<type>)
    sa = (int*) malloc(num * sizeof(int));
    //init array
    for (int i =0; i < num; i++) {
        sa[i] = i + 10;
    }
    //Display the array
    for (int i =0; i < num; i++) {
   printf("%d element is [%d]\n", i, sa[i]); 
    }
    
    free(sa);
    return 0;
}
// Function Definitions


