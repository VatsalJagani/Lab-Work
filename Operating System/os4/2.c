#include <stdio.h>
#include <pthread.h>

void *fun1();
void *fun2();


main(){
	char *s1="Hi function1";
	char *s2="Hi function2";
	pthread_t t1;
	pthread_t t2;
	pthread_create(&t1,NULL,fun1,s1);
	pthread_join(t1,NULL); 
	pthread_create(&t2,NULL,fun2,s2);
	pthread_join(t2,NULL); 
}

void *fun1(void *s){
	char *c=(char *)s;
	printf("Hello1 \n");
	printf("%s\n",c);
}

void *fun2(void *s){
	char *c=(char *)s;
	printf("Hello2 \n");
	printf("%s\n",c);
}

