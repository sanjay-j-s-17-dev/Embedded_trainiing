/*
 * =====================================================================================
 *
 *       Filename:  shift_oper.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/05/22 07:32:45 PM IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 0b00000010;
    printf("a: 0x%x\n",a<<1);
    //0b00000100
    printf("a: 0x%x\n",a>>1);
    //0b00000001
    int b = 0b00100000;
    int x = 5, y =2;
    float c  = x/(float)y;
    int d = x/y;
    printf("%f, %d\n",c,d);
    printf("00000010: 0x02\n00100000: 0x20\n00000000: %x\n",a&b);
}
