/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  Learn to use functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:06 AM
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
void Hello(void);
void HelloMany(int num);
int HelloNumber(void);
int HelloNumMany(int num);
int MySquare(int n);

// Main Function
int main()
{
    Hello();
    Hello();
    HelloMany(2);
    int n = HelloNumber();
    printf("I got %d from HelloNumber()\n", n);
    HelloNumMany(4);
    printf("I got %d from HelloNumMany()\n", n);
    printf("The square of %d is %d\n", n, MySquare(n));

    return 0;
}
// Function Definitions

//Func: MySquare
//Param n -> number to be squared 
//Ret: The square of n
int MySquare(int n)
{
    n = n * n;
    return n;
}

//Func: HelloNumMany 
//Takes an integer 
//Ret: The sum of Hello print statements 
int HelloNumMany(int num)
{
    int count = 0;
    for (int i = 0; i < num; i ++)
    {
        printf("(%d) Hello NumMany\n", i + 1);
        count++;
    }

    return count;
}

//Func: HelloNumber
//Defines an int
int HelloNumber(void)
{
    int num = 99;
    return num;
}

// Func: Hello
// Prints Message
void Hello(void)
{
    printf("Hello Ogden world\n");
    return;
}
//Func: HelloMany
//prints message num times
void HelloMany(int num)
{
    for ( int i = 0; i < num; i ++)
    {
        printf("Weber State Great, Great, Great!\n");
    }
    return; 
}


