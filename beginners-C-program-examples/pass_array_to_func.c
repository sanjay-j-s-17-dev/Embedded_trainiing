/*
 * =====================================================================================
 *
 *       Filename:  pass_array_to_func.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  27/05/22 06:09:33 PM IST
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

int minarray(int arr[],int size){
    int min=arr[0];
    int i=0;
    for(i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }//end of for
    return min;
}//end of function

int main(){
    int i=0,min=0;
    int numbers[]={4,5,7,3,8,9};//declaration of array
    min=minarray(numbers,6);//passing array with size
    printf("minimum number is %d \n",min);
    return 0;
}

