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
    char dataString[50][50];
    int dataInt[50];
    char col1[50];
    char col2[50];
    char title[50];
    int i = 0;
    int j = 0;
    char dataPoint[50];
    int counter = 0;
    int flag = 0;
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
    while (flag != 1) {
        printf("Enter a data point(-1 to stop input): ");
        fgets (dataPoint, 50, stdin);
        dataPoint[strlen(dataPoint) - 1] = '\0';
        if (strcmp(dataPoint,"-1")) {
            flag = 1;
            break;
        }
        while(dataPoint[i] != ',' && i < strlen(dataPoint)) {
            dataString[j][i] = dataPoint[i];
            i++;
        }
        dataString[j][i] = '\0';
        sscanf(dataPoint, "%d", &dataInt[j]);
        printf("Data string: %s\n", dataString[j]);
        printf("Data integer: %d\n", dataInt[j]);
        counter ++;
        j ++;
    }
    printf("\n\t\t\t\tFORMATTED TABLE\n");
    printf("%33s", title);
    printf("%20s|%23s\n",col1 , col2);
    printf("--------------------------------------------\n");
    j = 0;
    while (j < counter){
        printf("%20s|%23d\n",dataString[j] , dataInt[j]);
        j++;
    }
    printf("\n\t\t\t\tFORMATTER HISTOGRAM\n");
    j = 0;
    while (j < counter){
        printf("%20s", dataString[j]);
        while (i  < dataInt[j]){
            printf("*");
            i++;
        }
        printf("\n");
        j++;
    }
    return 0;
}
// Function Definitions


