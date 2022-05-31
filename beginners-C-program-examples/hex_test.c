/*
 * =====================================================================================
 *
 *       Filename:  hex_test.c
 *
 *    Description: 
 *
 *
 *        Version:  1.0
 *        Created:  19/05/22 06:08:51 PM IST
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

#define TEST_J 0

int main()
{
#ifndef TEST_J
    unsigned long int i = 0b00011100000111000001110000011100;
#else
    unsigned long int  j = 0x1c1c1c1c;
#endif
    unsigned long int k = 34567ul;
#ifndef TEST_J
    printf("i=%lu\n",i);
#else
    printf("j=%lu\n",j);
#endif
    int test_var = TEST_J;
    printf("%x,%d,%o\n",test_var, test_var, test_var);
    if( !(test_var == TEST_J )|| (test_var != 0))
    {
        printf("Test var is 0");
    }else {
        printf("Test var is not 0");
    }
    int a = 10, b =10;
    int mul_val = a*b;
    printf("%d\n",mul_val);
    //preincrement
    printf("a:%d\n",++a);
    //postinrement
    printf("b:%d\n",b++);
    printf("%d,%d\n",a,b);
    char character = 'a';
    int integer = 10;
    printf("%lu,%lu\n",sizeof(character),sizeof(integer));
    printf("%lu,%lu\n",sizeof(char),sizeof(int));
}
