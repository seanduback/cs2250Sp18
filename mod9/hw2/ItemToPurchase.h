/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  03/29/2018 06:23:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Structre declarations*/
typedef struct ItemToPurchase{
    char itemName[128];
    int itemPrice;
    char itemDescription[50];
    int itemQuantity;  
}ItemToPurchase;
/*functions declarations and object of structure*/
void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

