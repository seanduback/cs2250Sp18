/*
 * =====================================================================================
 *
 *       Filename:  hwPA_M6_warmup.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/18/2018 08:25:35 PM
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
const int NUM_PEOPLE = 5;
// Function Prototypes

// Main Function
int main()
{
    double weight[NUM_PEOPLE];
    int i;
    double total = 0;
    double max =0 ;
    for(i = 0; i < NUM_PEOPLE; ++i)
    {
        printf("Enter weight %d:\n", i + 1);
        scanf("%lf", &weight[i]);
    }

    printf("You entered:");
    for(i = 0; i < NUM_PEOPLE; ++i)
    {
        printf(" %lf", weight[i]);
        total += weight[i];
        if(weight[i] > max)
        {
            max = weight[i];
        }
    }
    printf(" \n");
    printf("\nTotal weight: %lf\n", total);
    printf("Average weight: %lf\n", total/NUM_PEOPLE);
    printf("Max weight: %lf\n", max);

    return 0;
}
// Function Definitions


