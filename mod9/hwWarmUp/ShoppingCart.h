/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 10:07:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef SHOPPINGCART__INC__
#define SHOPPINTCART_INC__

#include "ItemToPurchase.h"
typedef struct ShoppingCart
{
    char customerName[50];
    char currentDate[50];
    char itemName[128];
    ItemToPurchase cartItems[10];
    int cartSize;
}ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);
ShoppingCart RemoveItem(char name[], ShoppingCart cart);
int GetNumItemsInCart (ShoppingCart cart);
void PrintTotal(ShoppingCart cart);
void PrintDescription(ShoppingCart cart);

#endif /* #ifdef SHOPPINGCART__INC-- */
