
/**************************************************

file: demo_tx.c
purpose: simple demo that transmits characters to
the serial port and print them on the screen,
exit the program by pressing Ctrl-C

compile with the command: gcc receiver.c rs232.c -Wall -Wextra -o2 -o test_rx

**************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "rs232.h"

int main()
{
	 int n,i,flag;
     int cport_nr=0,        /* /dev/ttyS0 (COM1 on windows) */
      bdrate=9600;       /* 9600 baud */

FILE *fp;
  char mode[]={'8','N','1',0};
   unsigned char buf[4096];
  if(RS232_OpenComport(cport_nr, bdrate, mode))
  {
    printf("Can not open comport\n");
    return(0);
  }
  	printf("hi.....\n");
	fp=fopen("/home/user1/Desktop/received.txt", "a+");
	printf("hi.....\n");

  while(1)
  {
    	n = RS232_PollComport(cport_nr, buf, 1);
	flag=0;
	//printf("Hello__\n");
    	if(n > 0)
    	{
    		printf("%d\n",n);
    		for(i=0;i<n;i++){
    			if(buf[i]==233)  /* random value not used for normal convention specifing EOF */
    			{
    				flag=1;
    				fputc(EOF,fp);
    				fclose(fp);
    				printf("One file Received\n");
    				break;
    			}
    			fputc(buf[i],fp);    			
    		}	
	}
	if(flag==1)
	{
		break;
	}
	else{
		//memset(buf, 0, sizeof(buf));
	}
	
  }	
  return(0);
}

