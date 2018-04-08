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
#include <stdlib.h>
// Main Function
int main()
{
    char names[50][50];
    int point[50];
    char col1[50];
    char col2[50];
    char title[50];
    printf("Enter a title for the data:\n");
    fgets (title, 50, stdin);
    printf("You entered: %s\n", title);
    printf("Enter the column 1 header:\n");
    fgets (col1, 50, stdin);
    printf("You entered: %s\n", col1);
    printf("Enter the column 2 header:\n");
    fgets (col2, 50, stdin);
    printf("You entered: %s\n", col2);
    col1[strlen(col1) - 1] = '\0';
    col2[strlen(col2) - 1] = '\0';
    char dataPoint[50];
    int counter = 0;
    int flag = 0;
    while (flag != 1) {
        printf("Enter a data point(-1 to stop input): ");
        fgets (dataPoint, 50, stdin);
        if (strcmp(dataPoint,"-1")) {
            flag = 1;
            break;
        }
        int i = 0;
        char intValue[5] = "";
        int intFound = 0;
        int commaAfterInt = 0;
        int commas = 0;

        while (dataPoint[i] != '\0') {
            if (dataPoint[i] == ',') {
                commas++;
                if (intFound == 1) {
                    commaAfterInt = 1;
                }
            } else if (commas == 0) {
                names[counter][i] = dataPoint[i];
            } else if (isdigit(dataPoint[i])) {
                intFound = 1;
                int j = 0;
                for (j = 0; intValue[j] != '\0'; j++);
                intValue[j] = dataPoint[i];
                intValue[j + 1] = '\0';
            }
            i++;
        }
        if (commas == 0) {
            printf("Error: No comma in string.\n");
        } else if (commas > 1) {
            printf("Too many commas in input.\n");
        } else if (commaAfterInt == 1) {
            printf("Comma not followed by an integer\n");
        } else {
            point[counter++] = atoi(intValue);
        }
    }
    printf("\n\t\t\t\tFORMATTED TABLE\n");
    printf("%33s", title);
    printf("%20s|%23s\n",col1 , col2);
    printf("--------------------------------------------\n");
    int i = 0;
    while (i < counter){
        printf("%20s|%23d\n",names[i] , point[i]);
        i++;
    }
    printf("\n\t\t\t\tFORMATTER HISTOGRAM\n");
    i = 0;
    while (i < counter){
        printf("%20s", names[i]);
        int j= 0;
        while (j  < point[i]){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
// Function Definitions


