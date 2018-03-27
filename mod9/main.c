/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2018 07:03:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "ItemToPurchase.h"

// Main Fun=ction
int main(){
    int i;
    char name[128];
    ItemPurchase item[2];

    /*prompt for user inputs*/
    for(i=0;i<len;i++) {

        printf("Item %d\n",(i+1));
        printf("Enter the item name:");
        scanf(" %[^\n]s", name);
        strcpy(item[i].itemName,name);
        printf("Enter the item price:");
        scanf("%d",&item[i].itemPrice);
        printf("Enter the item quantity:");
        scanf("%d",&item[i].itemQuantity);
    }

    PrintItemCost(item);

    return 0;
}
