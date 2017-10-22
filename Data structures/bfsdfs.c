#include<stdio.h>
#define N 5
typedef struct node
{
	int data;
	struct node *(link[N]);
}node;

node a[N];

main()
{
	int q[N][N]={0};
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter The q[%d][%d]=",i+1,j+1);
			scanf("%d",&q[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if((q[i][j]) == 1)
			{
				a[i].link[j]=&(a[i]);
			}
			else
			{
				a[i].link[j]=NULL;
			}
		}
	}
}

