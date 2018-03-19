/*
 * =====================================================================================
 *
 *       Filename:  ProgAssM8_Authoring.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2018 02:48:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Constants
const int STRSIZE = 500;
// Function Prototypes
int GetNumOfNonWSCharacters(char userString[]);
void PrintMenu(char userString[]);
int GetNumOfWords(char userString[]);
void FixCapitalization(char userString[]);
void ReplaceExclamation(char userString[]);
void ShortenSpace(char userString[]);
// Main Function
int main()
{
    char userString[STRSIZE];

    printf("Enter a sample text:\n");
    fgets(userString, STRSIZE, stdin);
    printf("\nYou entered: %s\n", userString);
    return 0;
    PrintMenu(userString);
}
// Function Definitions

// Output the number of alpha characters 
int GetNumOfNonWSCharacters(char userString[])
{
    int i = 0; 
    int count = 0;
    for (i = 0; i < strlen(userString); i ++)
    {
        if(!isspace(userString[i]))
            count++;
    }
    return count;
}
//User menu
void PrintMenu(char userString[])
{
    char userChoice;
    while(1)
    {
        printf("MENU\n");

        printf("c - Number of non-whitespace characters\n");

        printf("w - Number of words\n");

        printf("f - Fix Capitalization\n");

        printf("r - Replace all !'s\n");

        printf("s - Shorten spaces\n");

        printf("q - Quit\n");

        printf("Choose an option: ");

        scanf("%c", &userChoice);

        if (userChoice == 'c'){

            printf("Number of non-white space chars are: %d\n", GetNumOfNonWSCharacters(userString));

        }

        else if(userChoice == 'w'){

            printf("Number of words: %d\n", GetNumOfWords(userString));

        }

        else if(userChoice == 'f'){

            FixCapitalization(userString);

        }

        else if(userChoice == 'r'){

            ReplaceExclamation(userString);

        }

        else if(userChoice == 's'){

            ShortenSpace(userString);

        }

        else if(userChoice == 'q'){

            break;

        }

        else

            printf("Invalid Choice!\n");

        printf("\n");


    }

    return;
}
//Get number of words 
int GetNumOfWords(char userString[])
{

    int i, j = 0; 
    for (i = 0; i < strlen(userString); i ++)
    {
        if(userString[i] == ' ');
        j++;
    }
    return (j + 1);
}
//Capitalize words of the sting
void FixCapitalization(char userString[])
{
    char dot = '.';
    int check = 0;
    int i = 0;
    if (isalpha(userString[i]))
        userString[i] = toupper(userString[i]);
    for (i = 0; i < strlen(userString); i++)
    {
        if (userString[i] == dot)
        {
            check = 1;
        }
        if (isalpha(userString[i] && check))
        {
            userString[i] = toupper(userString[i]);
            check = 0;
        }
    }
    printf("\nEdited test: %s\n", userString);
    return;
}
//Replace exclamation mark
void ReplaceExclamation(char userString[])
{
    int i;
    for(i = 0; i < strlen(userString); i ++)
    {
        if (userString[i] == '!');
        {
            userString[i] = '.';
        }
    }
    printf("\nEdited text: %s\n", userString);
    return;
}
// Shorten spaces
//void ShortenSpace(char userString[])
//{
//    char userString1[] = userString[];
//    char userString2[] = userString[] + 1;
//    if (userString == '\0');
//   {
//      return userSting;
// }
void ShortenSpace(char userString[])
{
    int i, j, check = 1;
    for (i = 0; userString[i] != '\0'; i++)
        if (userString[i] == ' ')
            if (check)
                for(j = i--; userString[j]!= '\0'; j++)
                    userString[j] = userString[j+1];
            else
                check = 1;
        else
            check = 0;
    printf("\nEdited text: %s\n", userString);
    return;
}  




