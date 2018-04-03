/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Read data from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define NUM 4
//const int NUM = 4;
// Function Prototypes

// Main Function
int main()
{
    //int data[NUM]; 
    int* userNums;
    int arrSize = 0; // user specified number of intergers
    FILE* inFile = NULL;
    printf("Opening file data.txt\n");
    // Open file for Reading purposes
    // "pointer" = fopen("name of file.txt", "purpose of file(read or write)");
    inFile = fopen("data.txt", "r");
    //Test for success
    if(inFile == NULL){
        printf("Could not open file\n");
        return 1;
    }
    // scan file
    fscanf(inFile, "%d", &arrSize); 
    printf("arrSize[%d]\n", arrSize);
    //Allocate memory
    userNums = (int*)malloc(sizeof(int)*arrSize);
    //Check you got your memory
    if(userNums == NULL){
        printf("Unable to malloc memory\n");
        fclose(inFile);
        return 2;
    }
    int i = 1;
    while(i <= arrSize){
        fscanf(inFile, "%d", &(userNums[i - 1]));
        i = i+1;
    }
    i = 0;
    while(i < arrSize){
        printf("Numbers [%d]\n", userNums[i]);
    }

    fclose(inFile);
    free(userNums);

    return 0;
}
// Function Definitions


