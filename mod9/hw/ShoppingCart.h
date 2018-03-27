/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  Functions to manage ItemsToPurchase
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:05:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef SHOPPINGCART__INC__
#define SHOPPINGCART_INC__

#include "ItemToPurchase.h"
typedef struct ShoppingCart
{
    char customerName[50];
    char currentDate[50];
    ItemToPurchase cartItems[10];
    int cartSize;

}ShoppingCart;


ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);
ShoppingCart RemoveItem(char name[], ShoppingCart cart);
int GetNumItemsInCart(ShoppingCart cart);
void PrintTotal(ShoppingCart cart);
void PrintDescriptions(ShoppingCart cart);

#endif /* #ifdef SHOPPINGCART__INC__ */
