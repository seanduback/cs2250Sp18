/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  It is super duper function for strings 
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:34:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef __SUPERLIB_H__
#define __SUPERLIB_H__
//Constants 
//Inside header files add the key word static before the definition.
static const int INPUT_STR_SIZE =50; // Input string size
//Function Prototypes
void StrSpaceToHyphen(char modString[], char sep);
// Task 1: Function takes a string returns number of digits
int StrCountDigits(char modString[]);

#endif // __SUPERLIB_H__
