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
    int dataInt[50];
    int counter = 0;
    int comma;
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
    printf("Enter a data point (-1 to stop input):\n");
    fgets (dataPoint, 50, stdin);
    //dataPoint[strlen(dataPoint) - 1] = '\0';
    while(1){
        if((strcmp(dataPoint, "-1")) != 0) {
            for(i = 0;  i < strlen(dataPoint); i ++) {
                if (dataPoint[i] == ','){
                    comma ++;
                }
            }
            for(i = 0;  i < strlen(dataPoint); i ++) {
                if(isdigit(dataPoint[i])){
                    yesInt = 1;
                }
            }
            if (comma == 1 && yesInt >= 1){
                int wordNum = 0;
                for( i = 0; dataPoint[i] != '\0'; i++) {
                    if (dataPoint[i] == ' '){
                        wordNum ++;
                    }
                }
                if(wordNum == 1){
                    char dummy[50];
                    sscanf(dataPoint, "%s %d",dummy,  &dataInt[j]);
                }
                if(wordNum == 2){
                    char dummy[50], dummy2[50];
                    sscanf(dataPoint, "%s %s %d",dummy, dummy2,  &dataInt[j]);
                }
                if(wordNum == 3){
                    char dummy[50], dummy2[50], dummy3[50];
                    sscanf(dataPoint, "%s %s %s %d",dummy, dummy2, dummy3,  &dataInt[j]);
                }
                else{
                    for( i = 0; dataPoint[i] != ','; i++) {
                        dataString[j][i] = dataPoint[i];
                    }
                   // dataString[j][i] = '\0';
                    printf("Data string: %s\n", dataString[j]);
                    printf("Data integer: %d\n\n", dataInt[j]);
                    counter ++;
                    j ++;
                    comma = 0;
                    i = 0;
                    yesInt = 0;
                }
            }
            else if ( comma > 1){
                printf("Error: Too many commas in input.\n\n");
                comma = 0;
                yesInt = 0;
            }
            else if (comma == 0){
                printf("Error: No comma in string.\n\n");
                yesInt = 0;
            }
            else if(yesInt == 0){
                printf("Error: Comma not followed by an integer.\n\n");
                comma = 0;
            }
            printf("Enter a data point (-1 to stop input):\n");
            fgets (dataPoint, 50, stdin);
            //dataPoint[strlen(dataPoint) - 1] = '\0';
        }
        else {
            break;
        }
    }
    printf("\n");
    printf("%33s\n", title);
    printf("%-20s|%23s\n",col1 , col2);
    printf("--------------------------------------------\n");
    j = 0;
    while (j < counter){
        printf("%-20s|%23d\n",dataString[j] , dataInt[j]);
        j++;
    }
    printf("\n");
    j = 0;
    while (j < counter){
        printf("%20s ", dataString[j]);
        for (i= 0; i  < dataInt[j]; i++){
            printf("*");
        }
        printf("\n");
        j++;
    }
    return 0;
}
// Function Definitions


