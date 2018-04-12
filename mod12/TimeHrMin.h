/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMin.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 09:57:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  TIMEHRMIN__INC__
#define  TIMEHRMIN_INC__
#include <iostream>  //For C++
using namespace std; //For C++

class TimeHrMin{
    private:
        int hours;
        int minutes;
    public:
        //constructor
TimeHrMin();
        //second constructor 
TimeHrMin(int h, int m);
        //getter show function
void SetHour(int h);
int GetHour();

void SetMin(int m);
int GetMin();

void ShowTime();
        //overload
};
#endif /* ----- #ifndef TIMEHRMIN__INC__ ----- */

