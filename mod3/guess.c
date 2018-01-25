/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  Guess a number from 0-9 and win a prize.
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for rand(), srand((int)time(0))
#include <time.h>   // for time

// Constants

// Function Prototypes

// Main Function
int main()
{
    int input;
    int guess;
    printf("Please enter a number from 0-9: ");
    scanf("%d", &input);
    // Calculate out guess number
    srand((int)time(0)); // set your seed
    guess = rand() % 10; //get your random num
    printf("Youve entered [%d] and guess is [%d]\n", input, guess);

    return 0;
}
// Function Definitions


