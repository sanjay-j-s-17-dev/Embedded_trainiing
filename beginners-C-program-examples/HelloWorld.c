#include <stdio.h>

int variable = 10; //global
extern int ext_variable_test; // extern variable

int func();
extern int func2();


int func( int *ptr_1 ) {
    *ptr_1++;
    static int i = 10; //static
    //1. it is auto intialized to zero
    //2. assigned value is stored only once during execution start
    //(variable will be intialized only once)
    printf("\n%d", i++);
}

int main() {
    int a = 1; //local // auto
    int *ptr = &a;
    func(ptr);
    printf("ptr:%d a:%d",*ptr,a)
start:
    printf("Hello, World!");
    for (int i=0; i<3; i++)
    {
        func();
        continue;
        printf("\ntest");
    }
    char case_a = 'A';
    switch(case_a)
    {
        case 'A':
            printf("test");
            break;
        default :
            printf("default");
    }
    if(a == 1)
    {
        ++a;
        goto start;
    }
    return 0;
}


/*
 * output 1: 10
 *           10
 *           10
 *
 * output 2: 10
 *           11
 *           12
 *
 * output 3: 11
 *           12
 *           13
 *
 * output 4: 11
 *           11
 *           11
 *
 *
 * */
