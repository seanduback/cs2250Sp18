/*
 * =====================================================================================
 *
 *       Filename:  hwch3_p2.c
 *
 *    Description:  homework chapter 3 part 2
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:04:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char oil[] = "Oil change";
    char tire[] = "Tire rotation";
    char wash[] = "Car wash";
    char wax[] = "Car wax";
    char serviceOne_1[30];
    char serviceTwo_1[30];
    int oilValue = 35;
    int tireValue = 19;
    int washValue = 7;
    int waxValue = 12;
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    printf("\n");
    strcpy(oil, "Oil change");
    strcpy(tire, "Tire rotation");
    strcpy(wash, "Car wash");
    strcpy(wax, "Car wax");
    printf("Select first service:");
    scanf ("%[^\n]%*c", serviceOne_1);
    printf("Select second service:");
    scanf ("%[^\n]%*c", serviceTwo_1);
        if(strcmp(serviceOne_1, oil) == 0)
    {
    printf("Service 1: [%s], $%d\n", oil, oilValue);
    }
    else 
    {
        printf("Service 1: No Service\n");
    }
    printf("[%s] $%d\n", oil, oilValue);
    printf("[%s] $%d\n", tire, tireValue);
    printf("[%s] $%d\n", wash, washValue);
    printf("[%s] $%d\n", wax, waxValue);
    return 0;
}
// Function Definitions


