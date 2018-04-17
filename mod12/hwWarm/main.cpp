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
//#include <stdio.h> //For C
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
cout<<"Enter the item name : ";
cin>>name;
cout<<"Enter the item price : ";
cin>>price;
cout<<"Enter the item quantity : ";
cin>>quan;
item1.setItemName(name);
item1.setItemPrice(price);
item1.setItemQuantity(quan);
cout<<"Item 2:"<<endl;
cout<<"Enter the item name : ";
cin>>name;
cout<<"Enter the item price : ";
cin>>price;
cout<<"Enter the item quantity : ";
cin>>quan;
item2.setItemName(name);
item2.setItemPrice(price);
item2.setItemQuantity(quan);

cout<<"TOTAL COST : "<<endl;
cout<<item1.getItemName()<<" "<<item1.getItemQuantity()<<" @ $"<<item1.getItemPrice()<<" = "<<(item1.getItemQuantity()*item1.getItemPrice())<<endl;
cout<<item2.getItemName()<<" "<<item2.getItemQuantity()<<" @ $"<<item2.getItemPrice()<<" = "<<(item2.getItemQuantity()*item2.getItemPrice())<<endl;
totalCost=(item1.getItemQuantity()*item1.getItemPrice())+(item2.getItemQuantity()*item2.getItemPrice());
cout<<"Total : $"<<totalCost<<endl;

  return 0;
}


