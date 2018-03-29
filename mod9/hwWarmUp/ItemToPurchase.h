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
#ifndef ITEMTOPURCHASE__INC_
#define ITEMTOPURCHASE_INC__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static int len=2;
/*Structre declarations*/
typedef struct ItemToPurchase{
    char itemName[128];
    int itemPrice;
    int itemQuantity;
    char itemDescription[128];
}ItemToPurchase;
/*functions declarations and object of structure*/
void MakeItemBlank(ItemToPurchase*);
void PrintItemCost(ItemToPurchase*);
void PrintItemDescription(ItemToPurchase item);

#endif /*ifdef ITEMTOPURCHASE__INC__ */
