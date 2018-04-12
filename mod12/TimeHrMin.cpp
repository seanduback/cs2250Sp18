/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMin.cpp
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
//#include <stdio.h> //For C
#include "TimeHrMin.h"
//Constructor
TimeHrMin::TimeHrMin(){
    hours = 0;
    minutes = 0;
    return;
}

TimeHrMin::TimeHrMin(int h, int m){
    hours = h;
    minutes = m;
    return;
}
// Function Definitions
void TimeHrMin::SetHour(int h){
    hours = h;
}
int TimeHrMin::GetHour(){
    return hours;
}
void TimeHrMin::SetMin(int m){
    minutes = m;
}
int TimeHrMin::GetMin(){
    return minutes;
}
void TimeHrMin::ShowTime(){
    cout << GetHour() << " ";
    cout << GetMin() << endl;
        return;
}
