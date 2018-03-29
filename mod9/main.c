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
#include <stdio.h>
#include <string.h>
// Main Function
int main()
{
    // int i;
    int total;
    ItemToPurchase item1;
    ItemToPurchase item2;

    printf("Item 1\n");
    printf("Enter the item name:\n");
    fflush(stdin);
    fgets((item1.itemName), 50, stdin);
    printf("Enter the item price:\n");
    scanf("%d", &(item1.itemPrice));
    printf("Enter the item quantity:\n");
    scanf("%d", &(item1.itemQuantity));
    printf("\nItem 2\n");
    printf("Enter the item name:\n");
    fflush(stdin);
    fgets((item2.itemName), 50, stdin);
    printf("Enter the item price:\n");
    scanf("%d", &(item2.itemPrice));
    printf("Enter the item quantity:\n");
    scanf("%d", &(item2.itemQuantity));
    total = (item1.itemPrice * item1.itemQuantity)+ (item2.itemPrice * item2.itemQuantity);
    printf("\nTOTAL COST\n");
    PrintItemCost(item1);
    PrintItemCost(item2);
    printf("Total: $%d\n", total);

    return 0;
}
