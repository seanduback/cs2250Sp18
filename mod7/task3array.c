/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Update map positions
 *                  
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:28 AM
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
const int X = 0;
const int Y = 1;
const int DIM = 2;
// Function Prototypes
//1) initialize your point to 0,0
void PointInit(int *point[X], int *point[Y]); // pass by referance 
//2) Move or update your point position
//pass x and y by value 
//pass xa and ya by referance
void UpdatePoint(int *point[X], int *point[Y]);
//3) Display current point position
void ShowPoint(int point[X], int point[Y]); // pass by value
// Main Function
int main()
{
    // First point
    //int x = -99;
    //int y = -99;
    int point[DIM];
    ShowPoint(point[X], point[Y]);
    PointInit(&point[X], &poin[Y]);
    ShowPoint(point[X], point[Y]);
    UpdatePoint(&point[X], &point[Y]);
    ShowPoint(point[X], point[Y]);

    return 0;
}
// Function Definition

//initiilive points to 0,0
void PointInit(int *x, int *y)
//To update the values at a given address 
//use the de-reference operator "*"
{
    *x = 0;
    *y = 0;
    return;
}
// Update points 
void UpdatePoint(int *point[X], int *point[Y])
{
    printf("Enter a new x point:\n");
    scanf("%d", point[X]);
    printf("Enter a new y point:\n");
    scanf("%d", point[Y]);
    return;
}
// Show points 
void ShowPoint(int point[X], int point[Y])
{
    printf("X-position = [%d]\n", point[X]);
    printf("Y-position = [%d]\n", point[Y]);
    return;
}

