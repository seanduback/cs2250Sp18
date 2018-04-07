/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2018 01:59:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sean Duback (), seanduback@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char string1[50];
    char string2[50],string3[50];
    int flag=0;
    printf("Enter input string:\n");
    fgets(string1, 50, stdin);
    string1[strlen(string1) - 1] = '\0';
    while (1) {
        if(strcmp(string1,"q") != 0)
        {

            int i, j = 0;
            for (i = 0; i < strlen(string1); i++){
                if(string1[i]==',') {
                    flag =1;
                    break;
                }
            }
            for (i = 0; i < strlen(string1); i++){
                if(string1[i] != ' ' && string1[i]!=',') {
                    string2[j++]=string1[i];
                }
                else{
                    break;
                }
            }
            string2[j] = '\0';
            j = 0;
            while( i < strlen(string1)){
                if(string1[i] != ' ' && string1[i]!=',') {
                    string3[j++] = string1[i];
                }
                i ++;
            }
            string3[j] = '\0';
            if(flag == 1){
                printf ("First word: %s\n", string2);
                printf ("Second word: %s\n", string3);
            }
            if (flag == 0){
                printf ("Error: No comma in string.");
            }
            printf("\n\nEnter input string:\n");
            fgets(string1, 50, stdin);
            string1[strlen(string1) - 1] = '\0';
        }
            else{
                break;
            }
        }
        return 0;
    }
