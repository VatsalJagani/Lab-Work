#include<stdio.h>
#define N 6

int x[N],w[N],m;

void print()
{
	int i;
	printf("\n{");
	for(i=0;i<N;i++)
	{
		printf("\t%d",x[i]);
	}
	printf("\t}");
}

void sumOfSubset(int k)
{
	int i;
	for(i=k;i<N;i++)
	{
		if(w[i]<=m)
		{
			x[i]=1;
			m-=w[i];
			if(m==0)
			{
				print();
			}
			sumOfSubset(i+1);
			x[i]=0;
			m+=w[i];
		}
	}
}

main()
{
	int i,j;
	
	printf("Enter %d numbers \n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&w[i]);
	}
	
	printf("Enter the m : ");
	scanf("%d",&m);
	
	sumOfSubset(0);
}
