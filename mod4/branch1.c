/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:45 AM
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

// Main Function
int main()
{
    int age = 0;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is %d.\n", age);
    // Do not add a ; at the end of IF statements
    if(age >= 18)       // IF true, go inside the block
    {
        printf("You can vote.\n");
        // use shift+v to enter visual mode for easy copy and pasting
    }

    else    // Do not use ( ). Defualt case or FALSE case
    {
        int temp3 = 18 - age;
        printf("You have %d years to vote.\n", temp3);
    }
    // Do not add a ; at the end of IF statements

    if(age >= 21)       // IF true, go inside the block
    {
        printf("You can buy alcohol.\n");
    }

    else    // Do not use ( ). Defualt case or FALSE case
    {
        int temp1 = 21 - age;
        printf("You have %d years till you can buy alcohol.\n", temp1);
    }

    if(age >= 65)       // IF true, go inside the block
    {
        printf("You can retire.\n");
    }

    else    // Do not use ( ). Defualt case or FALSE case
    {
        int temp2 = 65 - age;
        printf("You have %d years to retire.\n", temp2);
    }

    if(age == 35)       // IF true, go inside the block
    {
        printf("You are at the special age %d.\n", age);
    }


    printf("Adios amigo.");


    return 0;
}
// Function Definitions


