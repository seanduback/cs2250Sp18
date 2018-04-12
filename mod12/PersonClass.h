/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  Person class information
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:41:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS_INC__
#include <iostream>  //For C++
using namespace std; //For C++
class Person{
    private:
        int age;
        string name;
        double weight;
    public:
        //Default Constructor
        Person();
        //Second Constructor 
        //TODO: set parameters as optional 
       // Person(int a = 0, string n ="None", double w = 0.0);
        Person(int a , string n, double w);

        void SetAge(int a); //setter
        int GetAge();      // getter

        void SetName(string n);
        string GetName();

        void SetWeight(double w);
        double GetWeight();

        void ShowInfo() const; // constant getter

        Person operator+(Person rhs);//operator + overload
};

#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

