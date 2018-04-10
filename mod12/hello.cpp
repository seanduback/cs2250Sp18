/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:41:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> for C
#include <iostream> // for C++
using namespace std; // for C++ standard name 
// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name; 
    //std::cout << "Hello World C++" << std::endl;
    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " old" << endl;
    cout << "What is your name?" << endl;
    //cin >> name; // take input up to space
    // TODO: i ned to take care of the enter key from previous cin calls
    cin.ignore(); // should take care of extra enter
    getline(cin, name); // take all input including spaces 
    cout << "Hello " << name << endl;

    return 0;
}
// Function Definitions


