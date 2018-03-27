/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  Item infromation
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:55:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef ITEMTOPURCHASE__INC__
#define ITEMTOPURCHASE_INC__

typedef struct ItemToPurchase
{
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

void MakeItemBlank(ItemToPurchase*  item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);
#endif /* #ifdef ITEMTOPURCHASE__INC__*/
