#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char **argv)
{
  int out,td[2];
  if(pipe(td)){
  	printf("Error in pipe\n");
  }

 int pid = fork();

  if (!pid)
    {
    close(td[0]);
  dup2(td[1], 1);
  execl("/bin/ls", "ls",(char *)NULL);
  }
  else{
  wait();
  close(td[1]);
  dup2(td[0], 0);
  execl("/bin/sort", "sort",(char *)NULL);
  }
}
