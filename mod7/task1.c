/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take two numbers (floats) from the user
 *                  Define the following functions 
 *                  1) TheSum : Returns the sum of the two numbers
 *                  2) TheProd: Returns the product of the tow numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:32:02 AM
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

// Function Prototypes
char Menu(void);
int TheSum(double numOne, double numTwo);
double TheProd(double numOne, double numTwo);

// Main Function
int main()
{
    char input;
    double numOne, numTwo;

    printf("Enter two numbers:\n");
    scanf("%lf", &numOne);
    scanf("%lf", &numTwo);
    input = Menu();
    switch (input)
    {
        case 's':
            printf("The sum of %lf and %lf is %d\n",numOne, numTwo, TheSum(numOne, numTwo));
            break;
        case 'p':
            printf("The product of %lf and %lf is %lf\n",numOne, numTwo, TheProd(numOne, numTwo));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;

}
// Function Definitions

//Func: Menu
char Menu(void)
{
    char in = 'n';
    printf("Enter s for sum or p for product:\n");
    scanf(" %c", &in);
    return in;
}

//Func: TheSum
int TheSum(double numOne, double numTwo)
{
    return (int) (numOne + numTwo);
}

//Func: TheProd
double TheProd(double numOne, double numTwo)
{
    return numOne * numTwo;
}
