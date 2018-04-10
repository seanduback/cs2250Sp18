/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  Hello world class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:58 AM
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
class HelloNum{
    private:  //only the developer can see this section
        int number; // attribute
    public:  //the user has access here, by writing Fucntions or Methods in C++
        void SetNumber(int n); //setter
        int GetNumber();  //Getter
        void ShowNumber(); // prototype
};
// Function Prototypes

// Main Function
int main()
{
    int num;
    //n1 is an instance of the class HelloNum
    HelloNum n1; // an object
    n1.SetNumber(91);
    n1.ShowNumber();
    num = n1.GetNumber();
    num *= 2;
    cout<<"Number is "<<num<<endl;
    cout<<"Number is "<<n1.GetNumber()<<endl;
    return 0;
}
// Function Definitions
void HelloNum::ShowNumber(){
    cout << "Your num is " << number << endl;
    return;
}
void HelloNum::SetNumber(int n){ //setter
    //set private member
    number = n;
}
int HelloNum::GetNumber(){  //Getter
    // return private member
    return number;
}
