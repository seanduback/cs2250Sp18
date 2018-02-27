/*
 * =====================================================================================
 *
 *       Filename:  players.c
 *
 *    Description:  Soccer player roster
 *
 *        Version:  1.0
 *        Created:  02/27/2018 07:57:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Constants
const int NUM_PLAYERS = 5;
// Function Prototypes
void InitPlayers(int jerseyNums[], int ratingNums[]);
void InitRandPlayers(int jerseyNums[], int ratingNums[]);
void ShowPlayers(int jerseyNums[], int ratingNums[]);
char ShowMenu(void);
void UpdatePlayers(int jerseyNums[], int ratingNums[]);
void AbovePlayers(int jerseyNums[], int ratingNums[]);
void ReplacePlayers(int jerseyNums[], int ratingNums[]);

// Main Function
int main(void) 
{
    int jerseyNums[NUM_PLAYERS];
    int ratingNums[NUM_PLAYERS];
    int j = 0;
    int playerJersy = 0;
    int playerRating = 0;
    char menuOp = '-';


    // Get user defined jersey numbers and ratings
    InitPlayers(jerseyNums, ratingNums);
    // Print roster
    ShowPlayers(jerseyNums, ratingNums);
    // Menu
    do {
        menuOp = ShowMenu();

        //Update
        if (menuOp == 'u') 
        {
            UpdatePlayers(jerseyNums, ratingNums);
        }

        // Output players above a user defined rating
        else if (menuOp == 'a') 
        {
            AbovePlayers(jerseyNums, ratingNums);
        }

        // Replace
        else if (menuOp == 'r') 
        {
            ReplacePlayers(jerseyNums, ratingNums);
        }

        // Replace player only if the player is in the roster
        if (j != -1) 
        {
            printf("Enter a new jersey number:\n");
            scanf("%d", &playerJersy);

            printf("Enter a rating for the new player:\n");
            scanf("%d", &playerRating);

            jerseyNums[j] = playerJersy;
            ratingNums[j] = playerRating;
        }


        // Output roster
        else if (menuOp == 'o') 
        {
            ShowPlayers(jerseyNums, ratingNums);
        }
    } while(menuOp != 'q');

    return 0;
}
// Function Definitions
// Get user defined jersey numbers and ratings
void InitPlayers(int jerseyNums[], int ratingNums[])
{
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf("%d", &(jerseyNums[i]));

        printf("Enter player %d's rating:\n", (i + 1));
        scanf("%d", &(ratingNums[i]));
        printf("\n");
    }
    return;
}
// Print roster
void ShowPlayers(int jerseyNums[], int ratingNums[])
{
    printf("ROSTER\n");
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
    }

    return;
}
//Display Menu
char ShowMenu(void)
{
    char menuOp;
    printf("\nMENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");

    printf("\nChoose an option:\n");
    scanf(" %c", &menuOp);
    return menuOp;
}
// Update player data
void UpdatePlayers(int jerseyNums[], int ratingNums[])
{
    int playerJersy, playerRating;
    printf("Enter a jersey number:\n");
    scanf("%d", & playerJersy);

    printf("Enter a new rating for player:\n");
    scanf("%d", &playerRating);

    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (jerseyNums[i] == playerJersy) 
        {
            ratingNums[i] = playerRating;
        }
    }
    return;
}
void AbovePlayers(int jerseyNums[], int ratingNums[])
{
    int playerRating, i;
    printf("Enter a rating:\n");
    scanf("%d", &playerRating);

    printf("\nABOVE %d\n", playerRating);
    for (i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (ratingNums[i] > playerRating) 
        {
            printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
        }
    }
    return;
}
void ReplacePlayers(int jerseyNums[], int ratingNums[])
{
    int playerJersy;
    //int i, j;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

    // j = -1;  // Default index for player replacement
    //for (i = 0; i < NUM_PLAYERS; ++i) 
    // {
    //   if (playerJersy == jerseyNums[i]) 
    // {
    //      j = i;
    // }
    return;
}
//initilize players to random numbers 0-100
void InitRandPlayers(int jerseyNums[], int ratingNums[])
{
    srand((int)time(0)); // set random seed
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        jerseyNums[i] = rand() % 10;

        ratingNums[i] = rand() % 100;
    }
    return;
}




