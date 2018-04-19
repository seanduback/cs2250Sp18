/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/15/2018 06:16:15 PM
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
// Constants

// Function Definitions
ItemToPurchase::ItemToPurchase(){
    this->itemName="none";
    this->itemPrice=0;
    this->itemQuantity=0;
    return;
}
void ItemToPurchase::SetName(string name){
    this->itemName=name;
}
string ItemToPurchase::GetName(){
    return itemName;
}

void ItemToPurchase::SetPrice(int price){
    this->itemPrice=price;
}
int ItemToPurchase::GetPrice(){
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quan){
    this->itemQuantity=quan;
}
int ItemToPurchase::GetQuantity(){
    return itemQuantity;
}

