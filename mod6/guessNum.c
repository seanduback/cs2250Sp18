/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:29:23 AM
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
#include <time.h>

// Constants
const int LEN = 5; // # of opportunities 
// Function Prototypes

// Main Function
int main()
{
    // 1) Create a random number between 0-20
    int randNum;
    int NUM = 20;
    srand((int)time(0));
    randNum = rand()% NUM;
    int opp = 0;
    // 2) Ask the user to enter a guess number 0-20
    int userInput[LEN];
        while(opp < LEN)
        {
            printf("Please enter a number between 0-20\n");
            scanf("%d", &userInput[opp]);

            if( userInput[opp] > randNum )
                {
                    printf("Go lower\n");
                }
            else if( userInput[opp] < randNum)
            {
                printf("Go Higher\n");
            }
            else 
            {
                printf("You got it!\n");
                break;
            }
            opp ++;


        }

        // 3) If the number is less than the random numer 
        // print go higher, else print go lower




    // 4) You habe 5 cahnces to guess the correct number 
       
    // 5) Display all the chances you have entered
    for( int i = 0; i <= opp; i ++)
    {
        printf("Guess %d was %d\n", i + 1, userInput[i]);
    }

        printf("The number was %d\n", randNum);

    return 0;
}
// Function Definitions


