
/**************************************************

file: demo_tx.c
purpose: simple demo that transmits characters to
the serial port and print them on the screen,
exit the program by pressing Ctrl-C

compile with the command: gcc demo_tx.c rs232.c -pthread -Wall -Wextra -o2 -o do_chat

**************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "rs232.h"

void* reciever(void  *arg)
{

	int cport_nr=0,n;
	unsigned char buf[4096];
	while(1)
  {
    n = RS232_PollComport(cport_nr, buf, 4095);

    if(n > 0)
    {
      buf[n] = 0;  
      
      printf("\t\t\t\tFrom Vatsal: %s\n", (char *)buf);
    }

#ifdef _WIN32
    Sleep(100);
#else
    usleep(100000);  /* sleep for 100 milliSeconds */
#endif
  }
}

void* sender(void  *arg)
{
	int cport_nr=0;
	char s[512];
	while(1)
  {
 	gets(s);
    RS232_cputs(cport_nr, s);
    //printf("sent: %s\n", s);
  }
}

void main()
{
  int i=0,
      cport_nr=0,        /* /dev/ttyS0 (COM1 on windows) */
      bdrate=9600;       /* 9600 baud */
  char mode[]={'8','N','1',0};

    if(RS232_OpenComport(cport_nr, bdrate, mode))
  {
    printf("Can not open comport\n");
  }
	pthread_t r,s;
	pthread_create(&r,NULL,reciever,&i);
	pthread_create(&s,NULL,sender,&i);
	pthread_join(r,NULL);
	pthread_join(s,NULL); 
}

