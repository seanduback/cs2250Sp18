/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  Random array functions
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:17:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "randArr.h"
#include <stdlib.h>
#include <time.h>

// Constants
// Function Prototypes

// Function Definitions
// Initialize array with random numbers 1-100

void InitRandArray(int supeAr[])
{
 //Set random Seed
 srand((int)time(0));
 for (int i = 0; i < ASIZE; i ++)
 {
 supeAr[i] = rand()%100;
 }
    return;
}
//Dispaly array content
void ShowRandArray(int supeAr[])
{
    
 for (int i = 0; i < ASIZE; i ++)
 {
 printf("[%02d]\n", supeAr[i]);
 }
    return;
}


