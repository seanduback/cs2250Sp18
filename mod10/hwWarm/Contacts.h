/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2018 05:31:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS_INC__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ContactNode_struct{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode_struct* nextNodePtr;
} ContactNode;

//CreateContactNode() creates new node
void CreateContactNode(ContactNode* thisNode, char name[], char phoneNum[], ContactNode* nextLoc);
//
////InsertContactAfter() inserts a new node after node
void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode);
//
////GetNextContact() Return location pointed by nextNodePtr
ContactNode* GetNextContact(ContactNode* thisnode);
//
////PrintContactNode() print nodes
void PrintContactNode(ContactNode* thisNode);

#endif /* ----- #ifndef CONTACTS__INC__ ----- */

