//A c program to print prime numbers from 1 to n

#include<stdio.h>
#include<math.h>
void main(){
    int num, i, j,check;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("output:\n");
    for(i=2; i<num; i++)
    {
        for(j=2; j<i; j++)
        {
            check=sqrt(i);
            if(check%j == 0)
            {
                break;
            }
        }
        if(i == j){
            printf("%d\n", i);
        }
    }
}
