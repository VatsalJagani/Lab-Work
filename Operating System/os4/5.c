#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *fun();

typedef struct matrix{
	int a[2][2];
	int b[2][2];
	int ans[2][2];
}mat;

mat *m;

main(){
	m=(mat *)malloc(sizeof(mat));
	m->a[0][0]=1;
	m->a[0][1]=2;
	m->a[1][0]=3;
	m->a[1][1]=4;
	m->b[0][0]=1;
	m->b[0][1]=2;
	m->b[1][0]=3;
	m->b[1][1]=4;
	pthread_t t1;
	int a=0;
	pthread_create(&t1,NULL,fun,&a);
	pthread_t t2;
	int b=1;
	pthread_create(&t2,NULL,fun,&b);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL); 
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("%d  ",m->ans[a][b]);
		}
		printf("\n");
	}
}

void *fun(void *s){
	int *a=(int *)s;
	int i,j;
	int k=*a;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			m->ans[k][j]+=m->a[k][i]*m->b[i][j];
		}
	}
}

