/*
 * =====================================================================================
 *
 *       Filename:  velocity.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:41:41 AM
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
const int METER_KM = 1000;
const int MIN_HOUR = 60;
const int SEC_MIN = 60;
// Function Prototypes
double Velocity(double iDistance, double iTime);
//Convert Km to m
double KmToM(double km);
// Convert hours to min
double HrToM(double hr);

// Main Function
int main()
{
    double iDistance = 0;
    double iTime = 0;
    double vel = 0;
    double vel_MPerMin = 0;
    printf("Enter a Distance in km:\n");
    scanf("%lf", &iDistance);
    printf("Enter a Time in hours:\n");
    scanf("%lf", &iTime);
    printf("Distance = [%lf] in km\n", iDistance);
    printf("Time = [%lf] in hour\n", iTime);
    vel = Velocity(iDistance, iTime);
    vel_MPerMin = KmToM(iDistance) / HrToM(iTime);
    printf("Velocity =  [%lf] km/hr\n", vel);
    printf("Velocity =  [%lf] m/min\n", vel_MPerMin);

    return 0;
}
// Function Definitions

double Velocity(double iDistance, double iTime)
{
   return iDistance / iTime;
}

double KmToM(double iDistance)
{
    return iDistance / METER_KM;
}

double HrToM(double iTime)
{
    return iTime / MIN_HOUR;
}





