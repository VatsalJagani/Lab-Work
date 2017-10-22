#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

int readcount;
sem_t x, wsem;

void *reader(){
	while(1){
		sem_wait(&x);
		readcount++;
		if(readcount == 1) sem_wait(&wsem);
		sem_post(&x);
		printf("Reading...\n");
		sem_wait(&x);
		readcount--;
		if(readcount == 0) sem_post(&wsem);
		sem_post(&x);
	}
}

void *writer(){
	while(1){
		sem_wait(&wsem);
		printf("\t\t\t\t\twritting...\n");
		sem_post(&wsem);
	}
}

main(){
	sem_init(&x,0,1);
	sem_init(&wsem,0,1);
	
	pthread_t t1,t2,t3,t4,t5;
	
	pthread_create(&t1,NULL,writer,NULL);	
	pthread_create(&t2,NULL,reader,NULL);
	pthread_create(&t3,NULL,reader,NULL);
	pthread_create(&t4,NULL,writer,NULL);
//	pthread_create(&t5,NULL,reader,NULL);
	
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_join(t3,NULL);
	pthread_join(t4,NULL);
//	pthread_join(t5,NULL);
}
