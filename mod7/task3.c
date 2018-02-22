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
//const int X = 0;
//const int Y = 1;
//const int DIM = 2;
// Function Prototypes
//1) initialize your point to 0,0
void PointInit(int *x, int *y); // pass by referance 
//2) Move or update your point position
//pass x and y by value 
//pass xa and ya by referance
void UpdatePoint(int *x, int *y);
//3) Display current point position
void ShowPoint(int x, int y); // pass by value
// Main Function
int main()
{
    // First point
    int x = -99;
    int y = -99;
    // int point[DIM];
    ShowPoint(x, y);
    PointInit(&x, &y);
    ShowPoint(x, y);
    UpdatePoint(&x, &y);
    ShowPoint(x, y);

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
void UpdatePoint(int *x, int *y)
{
    printf("Enter a new x point:\n");
    scanf("%d", &*x);
    printf("Enter a new y point:\n");
    scanf("%d", &*y);
    return;
}
// Show points 
void ShowPoint(int x, int y)
{
    printf("X-position = [%d]\n", x);
    printf("Y-position = [%d]\n", y);
    return;
}

