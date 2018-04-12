/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 11:15:55 PM
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
#include <string.h>
#include <stdio.h>
typedef struct ItemToPurchase {
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase *item);

void PrintItemCost(ItemToPurchase item);

void PrintItemDescription(ItemToPurchase item);
#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

