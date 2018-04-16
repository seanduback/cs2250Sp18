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
// Constants

// Function Definitions
ItemToPurchase::ItemToPurchase(){
    this->itemName="none";
    this->itemPrice=0;
    this->itemQuantity=0;
    return;
}
void ItemToPurchase::setItemName(string name){
    this->itemName=name;
}
string ItemToPurchase::getItemName(){
    return itemName;
}

void ItemToPurchase::setItemPrice(int price){
    this->itemPrice=price;
}
int ItemToPurchase::getItemPrice(){
    return itemPrice;
}

void ItemToPurchase::setItemQuantity(int quan){
    this->itemQuantity=quan;
}
int ItemToPurchase::getItemQuantity(){
    return itemQuantity;
}

