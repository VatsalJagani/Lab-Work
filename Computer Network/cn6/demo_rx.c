/**************************************************

file: demo_rx.c
purpose: simple demo that receives characters from
the serial port and print them on the screen,
exit the program by pressing Ctrl-C

compile with the command: gcc demo_rx.c rs232.c -Wall -Wextra -o2 -o test_rx

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



int main()
{
  int i, n,
      cport_nr=0,        /* /dev/ttyS0 (COM1 on windows) */
      bdrate=9600;       /* 9600 baud */

  unsigned char buf[4096];

  char mode[]={'8','N','1',0};


  if(RS232_OpenComport(cport_nr, bdrate, mode))
  {
    printf("Can not open comport\n");

    return(0);
  }

  while(1)
  {
    n = RS232_PollComport(cport_nr, buf, 4095);

    if(n > 0)
    {
      buf[n] = 0;   /* always put a "null" at the end of a string! */

      printf("received frame: %s\n", (char *)buf);
      int i=0,sum;
      while((buf[i])!='\0'){
      	sum+=(buf[i]);
      	i++;
      }
      if(sum%2==0){
      	RS232_cputs(cport_nr,"ACK");
      }
      else{
      	printf("You got inproper data\n");
      }
    }

#ifdef _WIN32
    Sleep(100);
#else
    usleep(1000);  /* sleep for 100 milliSeconds */
#endif
  }

  return(0);
}

