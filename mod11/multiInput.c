/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  multiple inputs with scanf
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:22 AM
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
void Help(void);
// Main Function
int main()
{
    //int feet, in;
    //printf("Enter feet and inches separated by a space:\n");
    //scanf("%d %d", &feet, &in);
    //printf("You entered: %d feet and %d inches\n", feet, in);
    int hour, min;
    char AmPm[3];
    printf("Enter the time in this format: HH:MM AM/PM\n");
    //validate scanf
    if(scanf(" %2d:%2d %2s", &hour, &min, AmPm) != 3){
        Help();
    }
    else{
        printf("You entered %2d:%2d %2s\n", hour, min, AmPm);
    }

    return 0;
}
// Function Definitions
void Help(void){
    printf("Bad Input\n");
    printf("Please enter the time in this format: HH:MM AM/PM\n");
    return;
}

