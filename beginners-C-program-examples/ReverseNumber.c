//program to find reverse of a number

#include <stdio.h>

int main()
{
   int n, reverse = 0;

   printf("Enter a number to reverse\n");
   scanf("%d", &n);
   //n = 765;
   do
   {
      reverse = reverse * 10; // reverse = 56*10 = 560
      printf("\nreverse : %d", reverse);
      reverse = reverse + n%10; // reverse = 560 + (7%10) = 560+7 = 567
      printf("\nreverse : %d", reverse);
      n       = n/10; // (7/10) = 0
      printf("\nn : %d", n);
   }while (n != 0); // (0!=0)

   printf("Reverse of entered number is = %d\n", reverse);

   return 0;
}

