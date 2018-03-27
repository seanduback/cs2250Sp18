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
/*Initially initialising with default values*/
void MakeItemBlank(ItemPurchase *item) {
    int i;
    char temp[10]="none";
    for(i=0;i<len;i++) {
        strcpy(item[i].itemName,temp);
        item[i].itemPrice=0;
        item[i].itemQuantity=0;
    }      

}
/*PrintItemCost method will calculate cost of all item
 * * printing cost and name and total cost of particular item
 * * printing Total cost of all items */
void PrintItemCost(ItemPurchase *item) {
    /*Variable declarations*/
    int totalCost=0;
    int cost=0;
    int i=0;  
    printf("TOTAL COST\n");
    /*for loop for calculating cost*/
    for(i=0;i<len;i++) {          
        cost=item[i].itemPrice*item[i].itemQuantity;
        printf("%s %d @ $%d=$%d\n",item[i].itemName,item[i].itemQuantity,item[i].itemPrice,cost);
        totalCost+=cost;
        cost=0;  

    }
    printf("Total:$%d\n",totalCost);

}

