/*
 * =====================================================================================
 *
 *       Filename:  testPersonClass.cpp
 *
 *    Description:  test person class
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:43:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //For C
#include "PersonClass.h"

// Constants
// Function Prototypes
// Main Function
int main()
{
    int Size = 4;
    Person persons[Size];
    for(int i = 0; i < Size; i++){
        cout<<i<<" ";
        persons[i].ShowInfo();
        cout<<endl;
    }
    /* Before constructor 
       Person p1;
       p1.SetAge(21);
       p1.SetName("Waldo");
       p1.SetWeight(200);
       cout<<"Age is "<<p1.GetAge()<<endl;
       cout<<"Name is "<<p1.GetName()<<endl;
       cout<<"Weight is "<<p1.GetWeight()<<endl;
       */
    Person p2; // Default Constructor
    p2.ShowInfo();

    Person p3(4, "sean", 33.3); 
    p3.ShowInfo();

    //  Person p4(66);
    //p4.ShowInfo();
    //define an array of 4 persons and set their values to defaults
    //display all members of the array
    return 0;
}
// Function Definitions


