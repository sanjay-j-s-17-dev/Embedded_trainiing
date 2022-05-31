// Bitwise complement operator

#include <stdio.h>
int main()
{
    int a=14, b;
    //0001 0100
    //0000 0001
    //----------
    //00010101 = 15
    b = ~a;
    printf("Value of c = %d\n",b);
    return 0;
}
