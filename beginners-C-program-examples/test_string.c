/*
 * =====================================================================================
 *
 *       Filename:  test_string.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  30/05/22 06:51:15 PM IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>
#include <string.h>
int main(){
    char ch[11]={'t', 'e', 's', 't', 'i', 'n', 'g', '1', '2', '3', '\0'};
    char ch2[]="testing123";
    char ch3[12];
    memset(ch3,'\0',sizeof(ch3));
    printf("len : %d\n",strlen(ch2));
    strcpy(ch3,ch2);
    printf("copied string : %s\n",ch3);
    printf("res: %d \n",strcmp(ch2,ch3));
    strcat(ch,ch2);
    printf("ch : %s \n",ch);//testing123testing123
    printf("ch2 : %s \n",ch2);//testing123
    memset(ch,'\0',sizeof(ch));
    memset(ch2,'\0',sizeof(ch2));
    strcpy(ch,"ABC\0");
    strcpy(ch2,"aBC\0");
    printf("res: %d\n",strcmp(ch,ch2));
    printf("reverse : %s\n",strrev(ch));
    return 0;
}


