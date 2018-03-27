/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  Shopping cart functions
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:16:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ShoppingCart.h"

// Constants

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add a ItemToPurchase to Shopping cart
 *          Incrament cartSize
 * =====================================================================================
 */
ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart)
{
    return cart;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Remove an ItemToPurchase based on the name if the item 
 *  from Shopping cart 
 * =====================================================================================
 */
ShoppingCart RemoveItem(char name[], ShoppingCart cart)
{
    //1) strcmp to find the item versus cart.cartItem[Index].name
    //2) If you find it, adjust your indexes
    //cart.cartItems[Index] = cart.cartItems[Index + 1];:Wa
    //Else print no item
    return cart;
}

int GetNumItemsInCart(ShoppingCart cart)
{
    int totalItems = 0;
    
    return totalItems;
}

void PrintTotal(ShoppingCart cart)
{
    return;
}

void PrintDescriptions(ShoppingCart cart)
{
    return;
}
