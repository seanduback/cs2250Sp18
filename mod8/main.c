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
char PrintMenu(char userString[]);
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
    PrintMenu(userString);
    return 0;
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
char PrintMenu(char userString[])
{
    char userChoice = 'l';
    while(userChoice != 'q')
    {
        printf("MENU\n");
        printf("c - Number of non-whitespace characters\n");
        printf("w - Number of words\n");
        printf("f - Fix capitalization\n");
        printf("r - Replace all !'s\n");
        printf("s - Shorten spaces\n");
        printf("q - Quit\n");
        printf("\nChoose an option:\n");
        scanf("%c", &userChoice);
        switch(userChoice)
        {
            case 'c':
                {
                    printf("Number of non-white space chars are: %d\n\n", GetNumOfNonWSCharacters(userString));
                    break;
                }
            case 'w':
                {
                    printf("Number of words: %d\n\n", GetNumOfWords(userString));
                    break;
                }
            case 'f':
                {
                    FixCapitalization(userString);
                    break;
                }
            case 'r':
                {
                    ReplaceExclamation(userString);
                    break;
                }
            case 's':
                {
                    ShortenSpace(userString);
                    break;
                }
        }
    }
    return userChoice;
}
//Get number of words 
int GetNumOfWords(char userString[])  
{
    int i, count = 1, check = 1;
    for (i = 0; userString[i] != '\0'; i++)
    {
        if (userString[i] == ' ' || userString[i] == '\t' || userString[i] == '.' || userString[i] == '?' || userString[i] == '!' || userString[i] == ',')
        {
            if(check) 
            {
                count ++;
                check = 0;
            }
        }
        else
        {
            check = 1;
        }
    }
    return count - 1;

}
//Capitalize words of the sting
void FixCapitalization(char userString[])
{
    char dot = '.';
    int check = 0;
    int i = 0;
    if (isalpha(userString[0]))
    {
        userString[0] = toupper(userString[0]);
    }

    for (i = 0; i < strlen(userString); i++)
    {
        if (userString[i] == dot)
        {
            check = 1;
        }
        if (isalpha(userString[i]) && check)
        {
            userString[i] = toupper(userString[i]);
            check = 0;
        }
    }
    printf("\nEdited text: %s\n\n", userString);
    return;
}
//Replace exclamation mark
void ReplaceExclamation(char userString[])
{
    int i;
    for(i = 0; i < strlen(userString); i ++)
    {
        if (userString[i] == '!')
        {
            userString[i] = '.';
        }
    }
    printf("\nEdited text: %s\n\n", userString);
    return;
}
// Shorten Spaces in string
void ShortenSpace(char userString[])
{
    if( *userString == '\0')
    {
        return;
    }
    char *b = userString;
    char *f = userString + 1;
    while (*f != '\0')
    {
        if (*f != ' ' || *b != ' ')
        {
            *(++b) = *f;
        }
        f++;
    }
    * (b + 1) = '\0';

    printf("\nEdited text: %s\n\n", userString);
    return;
}
