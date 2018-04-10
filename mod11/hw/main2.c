/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2018 04:39:52 PM
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
#include <ctype.h>
// Main Function
int main()
{
    char col1[50];
    char col2[50];
    char title[50];
    int i = 0;
    int j = 0;
    char dataPoint[50];
    char dataString[50][50];
    int dataInt[50][50];
    int counter = 0;
    int flag = 0;
    int comma = 0;
    int yesInt = 0;
    printf("Enter a title for the data:\n");
    fgets (title, 50, stdin);
    title[strlen(title) - 1] = '\0';
    printf("You entered: %s\n\n", title);
    printf("Enter the column 1 header:\n");
    fgets (col1, 50, stdin);
    col1[strlen(col1) - 1] = '\0';
    printf("You entered: %s\n\n", col1);
    printf("Enter the column 2 header:\n");
    fgets (col2, 50, stdin);
    col2[strlen(col2) - 1] = '\0';
    printf("You entered: %s\n\n", col2);
    while (flag != 1) {
        comma = 0;
        flag = 0;
        printf("Enter a data point (-1 to stop input):\n");
        fgets (dataPoint, 50, stdin);
        dataPoint[strlen(dataPoint) - 1] = '\0';
        if ((strcmp(dataPoint, "-1")) == 0) {
            flag = 1;
            break;
        }
        while( i < strlen(dataPoint)) {
            if (dataPoint[i] == ','){
                comma ++;
            }
            i++;
        }
        for( i = 0; dataPoint[i] != ','; i++) {
            dataString[j][i] = dataPoint[i];
        }
        dataString[j][i] = '\0';
        for ( i = 0; dataPoint[i] != '\0'; i++){
           if(isdigit(dataPoint[i]) == 0){
             dataInt[j][i] = dataPoint[i];
           yesInt = 1;
         }
         }
        while (flag != 2){
            if(yesInt == 0){
                printf("Comma not followed by an integer.\n");
                flag = 2;
            }
            if (comma == 1){
                // char dummy[50];
                //  sscanf(dataPoint, "%s %d",dummy,  &dataInt[j]);
                printf("Data string: %s\n", dataString[j]);
                printf("Data integer: %d\n", *dataInt[j]);
                counter ++;
                j ++;
                comma = 0;
                i = 0;
                flag = 2;
            }
            else if ( comma == 0){
                printf("No comma in string.\n");
                comma = 0;
                flag = 2;
            }
            else if ( comma > 1){
                printf("Too many commas in input.\n");
                flag = 2;
                comma = 0;
            }
        }
    }

    if(flag ==  1){
        printf("\n");
        printf("%33s\n", title);
        printf("%-20s|%23s\n",col1 , col2);
        printf("--------------------------------------------\n");
        j = 0;
        while (j < counter){
            printf("%-20s|%23d\n",dataString[j] , *dataInt[j]);
            j++;
        }
        printf("\n");
        j = 0;
        while (j < counter){
            printf("%20s ", dataString[j]);
            while (i  < *dataInt[j]){
                printf("*");
                i++;
            }
            printf("\n");
            j++;
        }
    }
    return 0;
}
// Function Definitions


