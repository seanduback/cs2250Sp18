/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/15/2018 06:16:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__
#include <iostream>  //For C++
using namespace std; //For C++
class ItemToPurchase
{
    private:

        string itemName ;
        int itemPrice;
        int itemQuantity ;

    public:

        ItemToPurchase();
        void setItemName(string name);
        string getItemName();

        void setItemPrice(int itemPrice);
        int getItemPrice();

        void setItemQuantity(int itemQuantity);
        int getItemQuantity();

};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

