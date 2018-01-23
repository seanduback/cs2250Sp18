/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:54:09 AM
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
const double gravity = 9.8; //m/s^2
const double LBS_TO_KG = 0.453592;

// Function Prototypes

// Main Function
int main()
{
    double weight = 2.4;

    printf("My weight is %lf\n", weight);
    printf("Please enter your weight in lbs.\n");
    scanf("%lf", &weight);
    printf("Your weight is %lf lbs\n", weight);
   // gravity = 2.0; You cannot change constants 
    printf("Your weight in kg is %lf\n", weight * LBS_TO_KG);
    printf("Your real weight is %lf\n", weight * gravity * LBS_TO_KG);


    return 0;
}
// Function Definitions


