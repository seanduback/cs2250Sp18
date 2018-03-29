/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 07:18:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "ItemToPurchase.h"//including .h file
// Function Definitions
void MakeItemBlank(ItemToPurchase *item) {
    int i;
    char temp[10]="none";
    for(i=0;i<len;i++) {
        strcpy(item[i].itemName,temp);
        item[i].itemPrice=0;
        item[i].itemQuantity=0;
    }      

}
//PrintItemCost method will calculate cost of all items
void PrintItemCost(ItemToPurchase *item) {
    int totalCost=0;
    int cost=0;
    int i=0;  
    printf("TOTAL COST\n");
    for(i = 0; i < len; i++) {          
        cost=item[i].itemPrice*item[i].itemQuantity;
        printf("%s %d @ $%d = $%d\n",item[i].itemName, item[i].itemQuantity, item[i].itemPrice, cost);
        totalCost+=cost;
        cost=0;  

    }
    printf("\nTotal: $%d\n",totalCost);

}

