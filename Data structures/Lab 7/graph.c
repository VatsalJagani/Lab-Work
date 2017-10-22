//Inplement graph using adjacency matrix and perform bfs and dfs traversel on it
#include<stdio.h>
#define VRT 5
int vert[VRT][VRT]={0};
int trig[VRT]={0};
void bfs(int i)
{	
	int j;
	if(trig[i]!=1)
	{
	trig[i]=1;
	printf("%d",i);
	}
	for(j=i+1;j<VRT;j++)
	{
		if(vert[i][j]==1){
		if(trig[j]!=1)
		{
			printf("%d",j);
			trig[j]=1;

		}
		}
	}
	for(j=(i+1);j<VRT;j++)
	{
		if(vert[i][j]==1)
		{
		bfs(j);
		}
	}
}
	
void dfs(int i)
{
	int j;
	
	if(trig[i]!=1)
	{
		trig[i]=1;
		printf("%d",i);

	}
	for(j=0;j<VRT;j++)
	{
		if(i==j)
		{
			continue;
		}
		if(vert[i][j]==1)
		{
		if(trig[j]!=1)
		{
			printf("%d",j);
			trig[j]=1;
			dfs(j);

		}

		}
	}
}
	
		
		
	



void print()
{
	int i,j;
	printf("---------------------");
	for(i=0;i<VRT;i++)
	{
		for(j=0;j<VRT;j++)
		{
			printf("%d ",vert[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int i,j;	
	for(i=0;i<VRT;i++)
	{
		vert[i][i]=1;
		for(j=i+1;j<VRT;j++)
		{
			printf("is there any edge between %d and %d ? 0.no 1.yes \n",i,j);
			scanf("%d",&vert[i][j]);
			if(vert[i][j]==1)
			{
				vert[j][i]=1;
			}
		}
			
	}
	
	print();
	printf("------------------\n");
	bfs(0);
	printf("------------------\n");
	
	int a;
	for(a=0;a<VRT;a++)
	{
		trig[a]=0;
	}
	dfs(0);
	
}

