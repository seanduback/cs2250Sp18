/*
 * =====================================================================================
 *
 *       Filename:  hwPA_M6.c
 *
 *    Description:  Homework Programming Assignment Mod 6
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:39:59 AM
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
const int PLAYERS = 5;
const int ATTRI = 2;

// Function Prototypes

// Main Function
int main()
{
    //1.0 Define arrays for values
    // int arPlayer[PLAYERS]; Not used
    int arJersey[PLAYERS];
    int arRating[PLAYERS];
    char userOption = s; 
    //1.1 Fill in values 
    for ( int i = 1; i <= PLAYERS; i ++)
    {
        printf("Enter player %d's jersey number:\n", i);
        scanf("%d", &arJersey[i]);
        printf("Enter player %d's rating:\n", i);
        scanf("%d", &arRating[i]);

    }

    printf("ROSTER\n");

    for (int i = 1; i <= PLAYERS; i ++)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i, arJersey[i], arRating[i]);
    }

    //2.0 Display Menu
    while (userOption != 'q')
    {
        printf("MENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n");
        //Choose an option:
        scanf(" %c", &userOption);
        //3.0 Implement the "Output roster" menu option
        if ( userOption == 'o' )
        {
            printf("ROSTER\n");
            for (int i = 1; i <= PLAYERS; i ++)
            {
            printf("Player %d -- Jersey number: %d, Rating: %d\n", i, arJersey[i], arRating[i]);
            }
        }
        if ( userOption == 'u' )
        {
            for ( int i = 1; i <= PLAYERS; i ++)
            {
                printf("Enter player %d's jersey number:\n", i);
                scanf("%d", &arJersey[i]);
                printf("Enter player %d's rating:\n", i);
                scanf("%d", &arRating[i]);

            }
        }
    }

    //4.0 Implement the "Update player rating" menu option. 
    //4.1 Prompt the user for a player's jersey number. 
    //4.2 Prompt again for a new rating for the player, and then change that player's rating.
    //5.0 Implement the "Output players above a rating" menu option. Prompt the user for a rating. 
    //5.1 Print the jersey number and rating for all players with ratings above the entered value.
    //6.0  Implement the "Replace player" menu option. 
    //6.1 Prompt the user for the jersey number of the player to replace.
    //6.2 If the player is in the roster, then prompt again for a new jersey number and rating. 
    //6.3 Update the replaced player's jersey number and rating. 
    return 0;
}
// Function Definitions


