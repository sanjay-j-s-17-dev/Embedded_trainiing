/*
 * =====================================================================================
 *
 *       Filename:  test_file.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  30/05/22 07:23:22 PM IST
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

enum months{jan=1, feb, march, april, may, june, july, august, september, october, november, december};

enum place {FIRST = 1,SECOND, THIRD};

typedef unsigned long int Address;


int main(){
   FILE *fp;
   char c;
   char buff[255];//creating char array to store data of file
   Address a;// unsigned long int a
   a = &c;
   for(int i=jan;i<=december;i++)
   {
       printf("%d, ",i);
   }
   printf("\n");
   i = SECOND;
   switch(i)
   {
       case FIRST:
           printf("first place");
           break;
       case SECOND:
           printf("second place");
           break;
       case THIRD:
           printf("third place");
           break;
   }
   fp = fopen("file.txt", "w+");//opening file
   //writing & reading with a buffer
   fprintf(fp, "Hello file by fprintf...\n");//writing data into file
   rewind(fp);
    while(fscanf(fp, "%s", buff)!=EOF){ //READING THE DATA
    printf("%s ", buff );
   }
    //writing and reading by a character
    fputc('a',fp);
    fputc('\n',fp);
    rewind(fp);
    while((c=fgetc(fp))!=EOF){
        printf("%c",c);
    }
    //write and read with line by line
    fputs("hello c programming",fp);
    rewind(fp);
   fclose(fp);//closing file
}

