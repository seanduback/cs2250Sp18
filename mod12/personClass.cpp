/*
 * =====================================================================================
 *
 *       Filename:  personClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //For C
#include <iostream>  //For C++
using namespace std; //For C++

// Constants
class Person{
    private:
        int age;
        string name;
        double weight;
    public:
        void SetAge(int a);
        int GetAge();

        void SetName(string n);
        string GetName();
        
        void SetWeight(double w);
        double GetWeight();
};

// Function Prototypes

// Main Function
int main()
{
    Person p1;
    p1.SetAge(21);
    p1.SetName("Waldo");
    p1.SetWeight(200);
    cout<<"Age is "<<p1.GetAge()<<endl;
    cout<<"Name is "<<p1.GetName()<<endl;
    cout<<"Weight is "<<p1.GetWeight()<<endl;

    return 0;
}
// Function Definitions
void Person::SetAge(int a){
    age = a;
}
int Person::GetAge(){
    return age;
}
void Person::SetName(string n){
    name = n;
}
string Person::GetName(){
    return name;
}
void Person::SetWeight(double w){
    weight = w;
}
double Person::GetWeight(){
    return weight;
}


