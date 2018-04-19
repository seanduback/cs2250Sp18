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
        void SetName(string name);
        string GetName();

        void SetPrice(int itemPrice);
        int GetPrice();

        void SetQuantity(int itemQuantity);
        int GetQuantity();

};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

