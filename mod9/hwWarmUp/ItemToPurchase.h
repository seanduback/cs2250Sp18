/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 07:17:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static int len=2;
/*Structre declarations*/
typedef struct ItemToPurchase{
    char itemName[128];
    int itemPrice;
    int itemQuantity;  
}ItemPurchase;
/*functions declarations and object of structure*/
void MakeItemBlank(ItemPurchase*);
void PrintItemCost(ItemPurchase*);
