/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Calculate BMI
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:30:38 AM
 *       Revision:  none
 *       Compiler:  gcc task1.c -o task1 -lm
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    // 1) Capture weight in kg
    // 2) Capture the height in meters
    // 3) Calculate your BMI = weight/height**2
    // 4) Display BMI
    double weight;
    double height;
    double BMI;
    printf("Please enter your weight in kg:\n");
    scanf("%lf", &weight);
    printf("Please enter your height in meters:\n");
    scanf("%lf", &height);
    BMI = weight / pow(height, 2);
    printf("Your BMI is: %lf\n", BMI);

    
    return 0;
}
// Function Definitions


