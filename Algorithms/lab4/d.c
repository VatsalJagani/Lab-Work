#include<stdio.h>
#define SIZE 5



int p[SIZE];
int e[SIZE][SIZE];
int s[SIZE];
int n;

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

void algo(int j)
{
	int m=9999,i;
	int temp=j;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			s[i]=min(g[i][j],s[i]);
			if(s[i]<m)
			{
				m=s[i];
				temp=i;
			}
		}
		p[temp]=-1;
	}
}

main()
{
	int i,j,wt,temp,min;
	p[0]=-1;
	p[1]=10;
	p[2]=10;
	p[3]=10;
	p[4]=10;
	s[0]=9999;
	s[1]=9999;
	s[2]=9999;
	s[3]=9999;
	s[4]=9999;
	n=SIZE;
	printf("Enter Distences ,Enter 9999 value for infinity\n");
	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				printf("Enter weight:%d-%d",i,j);
				scanf("%d",&wt);
				e[i][j]=wt;
				e[j][i]=wt;
			}
			e[i][i]=9999;
		}
		
	algo(0);
	for(i=0;i<n;i++)
	{
		printf("%d\n",s[i]);
	}
}
