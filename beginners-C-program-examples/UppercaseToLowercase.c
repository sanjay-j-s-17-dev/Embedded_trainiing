// Uppercase character to lowercase character


#include<stdio.h>
int main()
{
    char a,u;
    printf("Enter Uppercase letter :\n");
    scanf("%c", &a);
    printf("\nvalue of a : %d", a);
    u = a + 1;
    printf("\nnext is : %c", u);
    int g = 99;
    printf("\nascii value : %c",g);
    g += 1; // g=g+1
    g -= 1; // g= g-1
    g *= 1; // g= g*1
    g /= 1; // g=g/1
    g = 5;
    //0101
    //0001
    //----
    //0001
    g = 6;
    //0110
    //0001
    //----
    //0000
    g&=1;
    //g=g&1;
    if(g == 0)// 0 or 1 // true or false
    {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    int test_expr = 10;
    switch (test_expr) // 0-anything 
    {
        case 0:
            printf("\ncase 0");
            break;
        case 1:
            printf("\ncase 1");
        case 2:
            printf("\ncase 2");
        default:
            printf("\ndefault");
    }
    return 0;
}



// 1 byte - 8bit - 00 to FF - 00000000 to 11111111
// 2 byte
// 4 byte - 32bit - 00000000 to FFFFFFFF
