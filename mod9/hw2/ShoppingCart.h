/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 11:06:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART_INC__
#include "ItemToPurchase.h"

typedef struct ShoppingCart_struct {
    char customerName[50];
    char currentDate[50];
    ItemToPurchase cartItems[10];
    int cartSize;
} ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);

ShoppingCart RemoveItem(char name[], ShoppingCart cart);

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart);

int GetNumItemsInCart(ShoppingCart cart);

int GetCostOfCart(ShoppingCart cart);

void PrintTotal(ShoppingCart cart);

void PrintDescriptions(ShoppingCart cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

