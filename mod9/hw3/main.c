/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 11:22:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

// Constants

// Function Prototypes

// Main Function
int main()
{


    ShoppingCart usrShopping;
    usrShopping.cartSize = 0;

    printf("Enter Customer's Name:\n");
    gets(usrShopping.customerName);
    printf("Enter Today's Date:\n");
    gets(usrShopping.currentDate);

    printf("Customer Name: %s\n", usrShopping.customerName);
    printf("Today's Date: %s\n", usrShopping.currentDate);

    char menuChoice = ' ';

    while (menuChoice != 'q') {
        menuChoice = PrintMenu(usrShopping);
    }

    return 0;
}


// Function Definitions
char PrintMenu(ShoppingCart usrShopping) {

    char menuOp = ' ';

    char ch;

    do

    {

        printf("MENU\n");
        printf("a - Add item to cart\n");
        printf("r - Remove item from cart\n");
        printf("c - Change item quantity\n");
        printf("i - Output items' descriptions\n");
        printf("o - Output shopping cart\n");
        printf("q - Quit\n\n");

        printf("Choose an option:\n");
        gets(&menuOp);

        switch(menuOp)

        {

            case 'a':

                ItemToPurchase item;

                printf("ADD ITEM TO CART\n");

                printf("Enter the item name:\n");
                gets(item.itemName);
                printf("Enter the item description:\n");
                gets(item.itemDescription);
                printf("Enter the item price:\n");
                scanf("%d", &item.itemPrice);
                printf("Enter the item quantity:\n");
                scanf("%d", &item.itemQuantity);

                AddItem(item, usrShopping);

                printf("\n");

                menuOp = ' ';

                break;

                case 'r':
                printf("REMOVE ITEM FROM CART\n");

                printf("Enter name of item to remove:");
                fgets(name, 50, stdin);

                RemoveItem(name, usrShopping);*/

                    menuOp = ' ';

                break;

                case 'c':
                printf("CHANGE ITEM QUANTITY\n");
                /*char name[50];
                 *
                 * printf("Enter the item name:");
                 * fgets(name, 50, stdin);
                 *
                 * int i = 0;
                 *
                 * while (strcmp(name, usrShopping.cartItems[i].itemName) != 0) {
                 * ++i;
                 * }
                 *
                 * ModifyItem(usrShopping.cartItems[i], usrShopping);*/


                menuOp = ' ';

                break;

                case 'i':
                printf("OUTPUT ITEM'S DESCRIPTIONS\n");
                PrintDescriptions(usrShopping);
                menuOp = ' ';

                break;

                case 'o':

                printf("OUTPUT SHOPPING CART\n");
                PrintTotal(usrShopping);
                menuOp = ' ';

                break;
        }

        printf("Do you want to continue..?Y/N");

        gets(&ch);

    }while(ch=='Y'||ch=='y');

    return menuOp;
}

