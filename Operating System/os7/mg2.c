#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include <semaphore.h>

#define MAX 10

sem_t s,n,e;
int a[10];
int i=0,index2=0;
void append()
{

a[i]=i;
i=(i+1)%10;
printf("producing %d",i);
}

void take()
{

int w=a[index2];
index2=(index2+1)%10;
printf("consuming %d",w);

}


void * P(void *s1)
{
while(1)
{
sem_wait(&e);
sem_wait(&s);
append();
sem_post(&s);
sem_post(&n);


}


}

void *C(void *s2)
{
while(1)
{

sem_wait(&n);
sem_wait(&s);
take();
sem_post(&s);
sem_post(&e);

}

}
main()
{


sem_init(&s,0,1);
sem_init(&n,0,0);
sem_init(&e,0,10);

pthread_t t1,t2;

pthread_create(&t1,NULL,P,NULL);
pthread_create(&t2,NULL,C,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
}

