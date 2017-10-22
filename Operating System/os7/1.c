#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
sem_t semP;
void *fun(void *s){

	char *c=(char *)s;
	sem_wait(&semP);
	printf("<");
	printf("%s",c);
	printf(">\n");
	sem_post(&semP);
}



main(){
	char *s="A";
	int i;
	pthread_t t[5];
	
	sem_init(&semP,0,1);
	
	for(i=0;i<5;i++,s++)
	{	
		pthread_create(&t[i],NULL,fun,s);
	}
	for(i=0;i<5;i++){
		pthread_join(t[i],NULL);
	}
}
