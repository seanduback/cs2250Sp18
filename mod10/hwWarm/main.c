/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2018 06:35:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "Contacts.h"

// Constants
// Function Prototypes

// Main Function
int main()
{
    ContactNode* headObj = NULL;
    ContactNode* nodeObj1 = NULL;
    ContactNode* nodeObj2 = NULL;
    char name[50];
    char phNum[50];
        printf("Person 1");
        printf("Enter name:\n");
        scanf(" %[^\n]s", name);
        printf("Enter phone number:\n");
        scanf(" %s", phNum);
        CreateContactNode( headObj, name, phNum, nodeObj1);
        InsertContactAfter(headObj, nodeObj1);

        printf("Person 2");
        printf("Enter name:\n");
        scanf(" %[^\n]s", name);
        printf("Enter phone number:\n");
        scanf(" %s", phNum);
        CreateContactNode( nodeObj1, name, phNum, nodeObj2);
        InsertContactAfter(nodeObj1, nodeObj2);
       
        printf("Person 2");
        printf("Enter name:\n");
        scanf(" %[^\n]s", name);
        printf("Enter phone number:\n");
        scanf(" %s", phNum);
        CreateContactNode( nodeObj2, name, phNum, NULL);

        PrintContactNode(headObj);
        PrintContactNode(nodeObj1);
        PrintContactNode(nodeObj2);

        return 0;
    }
    // Function Definitions


