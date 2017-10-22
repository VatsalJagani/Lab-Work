#include <unistd.h>
#include <stdio.h>

main()
{
	int i=0,n=1;
	for(i=0;i<4&&n>0;i++)
	{
		n=fork();
		if(n==0)
		printf("child : %d  parent : %d\n",getpid(),getppid());
		wait();
	}
	
}
