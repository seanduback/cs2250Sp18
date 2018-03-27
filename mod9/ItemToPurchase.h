/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  Homework Mod9
 *
 *        Version:  1.0
 *        Created:  03/26/2018 06:24:17 PM
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
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
typedef struct ItemToPurchase_struct{
    char itemName[50];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase *item);
void PrintItemCost(ItemToPurchase item);
#endif
