/*
 * =====================================================================================
 *
 *       Filename:  hwPA_M6_0.2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/16/2018 06:10:10 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

//Constants
const int NUM_PLAYERS = 5;

// Main Function
int main()
{
    int jerseyNum1[5];
    int ratingVal1[5];
    char choice;
    int jerseyNum2;
    int ratingVal2;
    int jerseyNum3;
    int switchCounter;
    int i;

    for (i = 1; i <= NUM_PLAYERS; i++)
    {
        printf("Enter player %d's jersey number:\n", i);
        scanf("%d",&jerseyNum1[i]);
        printf("Enter player %d's rating:\n", i);
        scanf("%d",&ratingVal1[i]);
        printf("\n");
    }

    printf("ROSTER\n");

    for (i = 1; i <= NUM_PLAYERS; i++)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i, jerseyNum1[i], ratingVal1[i]);
    }
    printf("\n");
    while (choice != 'q')
    {
        printf("MENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");
        printf("\n");
        printf("Choose an option:\n");
        scanf(" %c",&choice);

        switch (choice) 
        {
            case 'u':
                printf("Enter a jersey number\n");
                scanf("%d", &jerseyNum2);
                printf("Enter a new rating for player\n");
                scanf(" %d", &ratingVal2);
                switchCounter = 0;
                for (i = 0; i < NUM_PLAYERS; i++)
                {
                    if (jerseyNum1[i] == jerseyNum2)
                    {
                        ratingVal1[i] = ratingVal2;
                        switchCounter = 1;
                    }
                }
                if(switchCounter == 0)
                {
                    printf("Record not found\n");
                }

                printf("\n");
                break;
            case 'a':
                printf("Enter a rating\n");
                scanf("%d", &ratingVal2);
                printf("ABOVE %d\n", ratingVal2);

                for (i = 1; i <= NUM_PLAYERS; i++)
                {
                    if (ratingVal1[i] > ratingVal2)
                    {
                        printf("Player %d -- Jersey number: %d, Rating: %d\n", i,  jerseyNum1[i],  ratingVal1[i]);
                    }
                }
                printf("\n");
                break;
            case 'r':
                printf("Enter a jersey number\n");
                scanf("%d", &jerseyNum2);
                printf("Enter a new jersey number\n");
                scanf("%d", &jerseyNum3);
                printf("Enter a rating for the new player\n");
                scanf("%d", &ratingVal2);
                switchCounter = 0;
                for (i = 1; i <= NUM_PLAYERS; i++)
                {
                    if (jerseyNum1[i] == jerseyNum2)
                    {
                        jerseyNum1[i] = jerseyNum3;
                        ratingVal1[i] = ratingVal2;
                        switchCounter = 1;
                    }
                }
                 if (switchCounter == 0)
                {
                  printf("Record not found\n");
                 }

                printf("\n");
                break;
            case 'o':
                printf("ROSTER\n");

                for (i = 1; i <= NUM_PLAYERS; i++)
                {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", i, jerseyNum1[i], ratingVal1[i]);
                }

                printf("\n");
                break;
        }

    }

    return 0;
}



