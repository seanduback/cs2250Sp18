/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2018 06:26:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "ItemToPurchase.h"
// Function Definitions
void makeItemBlank(ItemToPurchase *item){
    strcpy((item)->itemName, "None");
    (item)->itemPrice=0;
    (item)->itemQuantity=0;
}

void printItemCost(ItemToPurchase item){
    printf("%s %d @ $%d = $%d\n", item.itemName,
            item.itemQuantity,item.itemPrice,
            ((item.itemPrice) * (item.itemQuantity)));
}
