#include <unistd.h>

main(){
	int x=fork();
	if(x==0)
	{
		execl("/bin/pwd","pwd",NULL);
	}
	else{
		execl("/bin/ls","ls","-l",NULL);
		wait();
	}
}
