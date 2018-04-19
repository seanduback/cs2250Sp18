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
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
    return;

}
ItemToPurchase::ItemToPurchase(string name, string descr, int price, int quantity){
    itemName = name;
    itemDescription = descr;
    itemPrice =  price;
    itemQuantity = quantity;
}
void ItemToPurchase::SetName(string name){
    itemName = name;
}
string ItemToPurchase::GetName(){
    return itemName;
}

void ItemToPurchase::SetPrice(int price){
    itemPrice = price;
}
int ItemToPurchase::GetPrice(){
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quan){
    itemQuantity = quan;
}
int ItemToPurchase::GetQuantity(){
    return itemQuantity;
}

void ItemToPurchase::SetDescription(string desc){
    itemDescription = desc;
}
string ItemToPurchase::GetDescription(){
    return itemDescription;
}

void ItemToPurchase::PrintItemCost(){
    cout<<itemName<<" "<<itemQuantity<<" @ $"<<itemPrice<<" = $"<<(itemQuantity * itemPrice)<<endl;
}
void ItemToPurchase::PrintItemDescription(){
    cout<<itemName<<": "<<itemDescription<<endl;
}

