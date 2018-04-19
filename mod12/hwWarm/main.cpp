/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/15/2018 06:16:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> //For C
#include "ItemToPurchase.h"
#include <iostream>  //For C++
using namespace std; //For C++
// Main Function
int main()
{

    ItemToPurchase item1,item2;
    string name ;
    int price;
    int quan ;
    int totalCost=0;

    cout<<"Item 1:"<<endl;
    cout<<"Enter the item name :\n";
    getline(cin,name);
    cout<<"Enter the item price :\n";
    cin>>price;
    cout<<"Enter the item quantity :\n";
    cin>>quan;
    item1.SetName(name);
    item1.SetPrice(price);
    item1.SetQuantity(quan);
    cout<<"Item 2:"<<endl;
    cout<<"Enter the item name :\n";
    getline(cin,name);
    cout<<"Enter the item price :\n";
    cin>>price;
    cout<<"Enter the item quantity :\n";
    cin>>quan;
    item2.SetName(name);
    item2.SetPrice(price);
    item2.SetQuantity(quan);

    cout<<"TOTAL COST :\n"<<endl;
    cout<<item1.GetName()<<" "<<item1.GetQuantity()<<" @ $"<<item1.GetPrice()<<" = "<<(item1.GetQuantity()*item1.GetPrice())<<endl;
    cout<<item2.GetName()<<" "<<item2.GetQuantity()<<" @ $"<<item2.GetPrice()<<" = "<<(item2.GetQuantity()*item2.GetPrice())<<endl;
    totalCost=(item1.GetQuantity()*item1.GetPrice())+(item2.GetQuantity()*item2.GetPrice());
    cout<<"Total : $"<<totalCost<<endl;

    return 0;
}


