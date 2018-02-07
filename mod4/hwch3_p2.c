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
    char serviceOne[30];
    char serviceTwo[30];
    int oilValue = 35;
    int tireValue = 19;
    int washValue = 7;
    int waxValue = 12;
    int total1 = 0;
    int total2 = 0;
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    printf("\n");
    strcpy(oil, "Oil change");
    strcpy(tire, "Tire rotation");
    strcpy(wash, "Car wash");
    strcpy(wax, "Car wax");
    printf("Select first service:");
    scanf ("%[^\n]%*c", serviceOne);
    printf("Select second service:");
    scanf ("%[^\n]%*c", serviceTwo);
        if(strcmp(serviceOne, oil) == 0)
    {
    printf("Service 1: %s, $%d\n", oil, oilValue);
    total1 = oilValue;
    }   
        else if(strcmp(serviceOne, tire) == 0)
     {
     printf("Service 1: %s, $%d\n", tire, tireValue); 
     total1 = tireValue;
     }

        else if(strcmp(serviceOne, wash) == 0)
     {
     printf("Service 1: %s, $%d\n", wash, washValue); 
     total1 = washValue;
     }
        else if(strcmp(serviceOne, wax) == 0)
     {
     printf("Service 1: %s, $%d\n", wax, waxValue); 
     total1 = waxValue;
     }
    else 
    {
        printf("Service 1: No Service\n");
        total1= 0;
    }
        if(strcmp(serviceTwo, oil) == 0)
    {
    printf("Service 2: %s, $%d\n", oil, oilValue);
    total2 = oilValue;
    }   
        else if(strcmp(serviceTwo, tire) == 0)
     {
     printf("Service 2: %s, $%d\n", tire, tireValue); 
     total2 = tireValue;
     }

        else if(strcmp(serviceTwo, wash) == 0)
     {
     printf("Service 2: %s, $%d\n", wash, washValue); 
     total2 = washValue;
     }
        else if(strcmp(serviceTwo, wax) == 0)
     {
     printf("Service 2: %s, $%d\n", wax, waxValue); 
     total2 = waxValue;
     }
    else 
    {
        printf("Service 2: No Service\n");
        total2 = 0;
    }
    printf("Total: $%d\n", total1 + total2);
    return 0;
}
// Function Definitions


