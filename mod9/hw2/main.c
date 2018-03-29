/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 11:12:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "ShoppingCart.h"

// Constants
// Function Prototypes
char PrintMenu(ShoppingCart usrShopping);
// Main Function
int main()
{
    ShoppingCart usrShopping;
    usrShopping.cartSize = 0;
    char name [128];

    printf("Enter Customer's Name:\n");
    scanf(" %[^\n]s", name);
    strcpy(usrShopping.customerName,name);
    printf("Enter Today's Date:\n");
    scanf(" %[^\n]s", name);
    strcpy(usrShopping.currentDate,name);

    printf("\nCustomer Name: %s\n", usrShopping.customerName);
    printf("Today's Date: %s\n\n", usrShopping.currentDate);

    char menuChoice = ' ';

    while (menuChoice != 'q') {
        menuChoice = PrintMenu(usrShopping);
    }
    return 0;
}
// Function Definitions
char PrintMenu(ShoppingCart usrShopping) {

    char menuOp = ' ';

    printf("MENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n\n");

    while (menuOp != 'a' && menuOp != 'r' && menuOp != 'c' &&
            menuOp != 'i' && menuOp != 'o' && menuOp != 'q') {
        printf("Choose an option:\n");
        scanf(" %c", &menuOp);
    }

    if (menuOp == 'a') {
        ItemToPurchase item;
        char name[128];

        printf("ADD ITEM TO CART\n");

        printf("Enter the item name:\n");
        scanf(" %[^\n]s", name);
        strcpy(item.itemName,name);
        printf("Enter the item description:\n");
        scanf(" %[^\n]s", name);
        strcpy(item.itemDescription,name);
        printf("Enter the item price:\n");
        scanf("%d", &item.itemPrice);
        printf("Enter the item quantity:\n");
        scanf("%d", &item.itemQuantity);

        AddItem(item, usrShopping);

        printf("\n");

        menuOp = ' ';


    }
    else if (menuOp == 'r') {
        printf("REMOVE ITEM FROM CART\n");

        char name[50];

        printf("Enter name of item to remove:");
        fgets(name, 50, stdin);

        RemoveItem(name, usrShopping);

        menuOp = ' ';
    } 
    else if (menuOp == 'c') {
        printf("CHANGE ITEM QUANTITY\n");
        char name[50];

        printf("Enter the item name:");
        fgets(name, 50, stdin);

        int i = 0;

        while (strcmp(name, usrShopping.cartItems[i].itemName) != 0) {
            ++i;
        
        ModifyItem(usrShopping.cartItems[i], usrShopping);
        }
        menuOp = ' ';
    } 
    else if (menuOp == 'i') {
        printf("OUTPUT ITEM'S DESCRIPTIONS\n");
        PrintDescriptions(usrShopping);
        menuOp = ' ';

    } 
    else if (menuOp == 'o') {
        printf("OUTPUT SHOPPING CART\n");
        PrintTotal(usrShopping);
        menuOp = ' ';
    }

    return menuOp;
}

