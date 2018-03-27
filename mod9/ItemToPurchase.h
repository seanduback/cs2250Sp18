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
#include <stdlib.h>
// Constants
static int len=2;
typedef struct ItemToPurchase
{
    char itemName[128];
    int itemPrice;
    int itemQuantity;  
}
ItemPurchase;

// Function Prototypes
void MakeItemBlank(ItemPurchase*);
void PrintItemCost(ItemPurchase*);
// Function Definitions
