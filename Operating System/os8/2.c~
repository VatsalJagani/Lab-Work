#include<stdio.h>
#include<unistd.h>
#include<semaphore.h>
#include<pthread.h>

int rcount,wcount;
sem_t x,y,z,wsem,rsem;

void *reader()
{
	while(1)
	{
		sem_wait(&x);
			sem_wait(&rsem);
				sem_wait(&z);
				rcount++;
				if(rcount==1)sem_wait(&wsem);
				sem_post(&z);
			sem_post(&rsem);
		sem_wait(&x);
		printf("\n Reading \n");
		sem_wait(&z);
			rcount--;
			if(rcount==0)sem_post(&wsem);
		sem_post(&z);
		
	}
}

void *writer()
{
	while(1)
	{
		sem_wait(&y);
				wcount++;
				if(wcount==1)sem_wait(&rsem);
		sem_post(&y);
		sem_wait(&wsem);
		printf("\t\t\t\twriting...\n");
		sem_post(&wsem);
		sem_wait(&y);
		wcount--;
		if(wcount==0)sem_post(&rsem);
		sem_post(&y);
	}
}

void main()
{
	rcount=0,wcount=0;
	pthread_t t1,t2,t3,t4,t5;
	
	sem_init(&rsem, 0, 1); 
	sem_init(&wsem, 0, 1);
	sem_init(&x, 0, 1);
	sem_init(&y, 0, 1);
	sem_init(&z, 0, 1);
	
	pthread_create(&t1,NULL,writer,NULL);
	pthread_create(&t2,NULL,reader,NULL);
	pthread_create(&t3,NULL,reader,NULL);
	pthread_create(&t4,NULL,writer,NULL);
	
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_join(t3,NULL);
	pthread_join(t4,NULL);
	
}
