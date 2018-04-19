#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() 
{
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) 
{
    customerName = name;
    currentDate = date;
}

string ShoppingCart::GetCustomerName(){
    return customerName;
}
string ShoppingCart::GetDate(){
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item){
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name){
    for(vector<ItemToPurchase>::iterator iter = cartItems.begin(); iter != cartItems.end(); iter++){
        if ((*iter).GetName() == name){
            cartItems.erase(iter);
            return;
        }
    }
    cout<<"Item not found in cart. Nothing removed."<<endl;
}

void ShoppingCart::ModifyItem(ItemToPurchase thisItem){
    bool flag = false;
    for(vector<ItemToPurchase>::iterator iter = cartItems.begin(); iter != cartItems.end(); iter ++){
        if((*iter).GetName() == thisItem.GetName()){
            flag = true;
            if(thisItem.GetDescription() != "none"){
                thisItem.SetDescription(thisItem.GetDescription());
            }
            if(thisItem.GetPrice() != 0){
                thisItem.SetPrice(thisItem.GetPrice());
            }
            if(thisItem.GetQuantity() != 0){
                thisItem.SetQuantity(thisItem.GetQuantity());
            }
        }
    }
    if(flag == false){
        cout<<"Item not found in cart. Nothing modified."<<endl;
    }
}

int ShoppingCart::GetNumItemsInCart(){
    int numItems = 0;
    for (int i = 0; i < cartItems.size(); i ++){
        numItems = numItems + cartItems[i].GetQuantity();
    }
    return numItems;
}

double ShoppingCart::GetCostOfCart(){
    double totalCost = 0;
    for (int i = 0; i < cartItems.size(); i ++){
        totalCost += cartItems[i].GetQuantity() * cartItems[i].GetPrice();
    }
    return totalCost;
}

void ShoppingCart::PrintTotal(){
    if(cartItems.empty()){
        cout<<"SHOPPING CART IS EMPTY"<<endl;
    }
    cout<<customerName<<"'s Shopping Cart - "<<currentDate<<endl;
    cout<<"Number of Items: "<<GetNumItemsInCart()<<endl;
    cout<<endl;
    for(int i = 0; i < cartItems.size(); i ++){
        cartItems[i].PrintItemCost();
    }
    cout<<"\nTotal: $"<<GetCostOfCart()<<endl;
}
void ShoppingCart::PrintDescriptions(){
    if(cartItems.empty()){
        cout<<"SHOPPING CART IS EMPTY"<<endl;
    }
    cout<<customerName<<"'s Shopping Cart - \n"<<currentDate<<endl;
    cout<<"Item Descriptions"<<endl;
    for(int i = 0; i < cartItems.size(); i ++){
        cartItems[i].PrintItemDescription();
    }
    cout<<endl;
}
