
/**************************************************

file: demo_tx.c
purpose: simple demo that transmits characters to
the serial port and print them on the screen,
exit the program by pressing Ctrl-C

compile with the command: gcc demo_tx.c rs232.c -Wall -Wextra -o2 -o test_tx

**************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "rs232.h"


  int i=0,
      cport_nr=0,        /* /dev/ttyS0 (COM1 on windows) */
      bdrate=9600;       /* 9600 baud */

  char mode[]={'8','N','1',0},
       str[2][512];

void send_frame(unsigned char *msg){
	int n,temp=0;
	long long int i;
	
	unsigned char *ack=(unsigned char *)malloc(4096);
	RS232_cputs(cport_nr,msg);
	for(i=0;i<1000000;i++){
		n = RS232_PollComport(cport_nr, ack, 4095);
		if(n>0){
			temp=1;
			break;
		}
	}
	if(temp==0){
		send_frame(msg);
	}
}

int main()
{

  strcpy(str[0], "Hi we are learning serial programming\n");

  strcpy(str[1], "Happy to do serial programming!.\n");

unsigned char *msg=(unsigned char *)malloc(4096);

  if(RS232_OpenComport(cport_nr, bdrate, mode))
  {
    printf("Can not open comport\n");

    return(0);
  }

  while(1)
  {
  printf("\nEnter string to send : ");
  scanf("%s",msg);
  int i=0,sum;
  while(*(msg+i)!='\0'){
  	sum+=*(msg+i);
  	i++;
  }
  if(sum%2==0){
  	*(msg+i)='0';
  }
  else{
  	*(msg+i)='1';
  }
  i++;
  *(msg+i)='\0';
  send_frame(msg);
  }

  return(0);
}

