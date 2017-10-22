#include <unistd.h>

main(){
	execl("/bin/ls","ls","-l",NULL);
}
