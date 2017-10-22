#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 8

int x[N+1];

int place(int k,int i)
{
	int j;
	for(j=1;j<=k-1;j++)
	{
		if(x[j]==i || abs(x[j]-i)==abs(j-k))
		{
			return 0;
		}
	}
	return 1;
}

void print();

void nQ(int k)			// k  row
{
	int i;
	for(i=1;i<=N;i++)
	{
		if(place(k,i))			// i  column
		{
			x[k]=i;
			if(k==N)
			{
				print();
			}
			else
			{
				nQ(k+1);
			}
		}
	}
}


main()
{
	int i;
	
	for(i=1;i<=N;i++)
	{
		x[i]=0;
	}
	nQ(0);
}

void print()
{
	int i,j;
	printf("\n");
	printf("\n|------|------|------|------|------|------|\n");
	for(i=1;i<=N;i++)
	{
		printf("| ");
		for(j=1;j<=N;j++)
		{
			if(x[i]==j)
			{
				printf(" %d ",1);
			}
			else
				printf("   ");
			printf(" |");
		}
		printf("\n|------|------|------|------|------|------|\n");
	}
}

