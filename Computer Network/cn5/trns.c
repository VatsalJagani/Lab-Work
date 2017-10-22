
/**************************************************

file: demo_tx.c
purpose: simple demo that transmits characters to
the serial port and print them on the screen,
exit the program by pressing Ctrl-C

compile with the command: gcc trns.c rs232.c -Wall -Wextra -o2 -o test_tx

**************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "rs232.h"



int main()
{
     int cport_nr=0,        /* /dev/ttyS0 (COM1 on windows) */
      bdrate=9600;       /* 9600 baud */

  char mode[]={'8','N','1',0};
  char path[10000];
  
  if(RS232_OpenComport(cport_nr, bdrate, mode))
  {
    printf("Can not open comport\n");
    return(0);
  }

  while(1)
  {
  	printf("enter path\n");
	scanf("%s",path);

	FILE *fp;
   	int c;
   	fp = fopen(path,"r");
  	 if(fp == NULL) 
  	 {
    	  printf("Error in opening file\n");
    	  return(-1);
   	 }
   	do
   	{
     	 c = fgetc(fp);
      	 if( feof(fp) )
      	 {
         		RS232_SendByte(cport_nr,233);  /* random value not used for normal convention specifing EOF */
         		printf("done\n");
         		break;     
         } 
         RS232_SendByte(cport_nr,c);
             usleep(10);  /* sleep for 1 Second */
   }while(1);
   fclose(fp);
   usleep(1000000);  /* sleep for 1 Second */
 }

  return(0);
}

