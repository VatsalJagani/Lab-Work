#include <unistd.h>
#include <stdio.h>

main()
{
	int i=0,n=0;
	for(i=1;i>0;i++)
	{
		printf("%d %d\n",getpid(),getppid());
	}
	
}
