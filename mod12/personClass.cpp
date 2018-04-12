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
#include "PersonClass.h"

//Constructor
Person::Person(){
    //Init all/Most of your variables or attributes
        age = 0;
        name = "None";
        weight = 0.0;
        return;
}

Person::Person(int a, string n, double w){ //second constructor
    age = a;
    name = n;
    weight = w;
    return;
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
void Person::ShowInfo() const{ // conste getter
    //The "this" pointer is an alias to
    //the object itself
    cout<<"Age is "<<this->age<<endl;
    cout<<"Name is "<<this->name<<endl;
    cout<<"Weight is "<<this->weight<<endl;
    return;
}
