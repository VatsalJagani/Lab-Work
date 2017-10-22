#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct Edge
{
	int weight;
	int i,j;
	struct Edge *next;
	
}edge;

edge *start=NULL;


void main()
{
		int in,jn;
		int w;
		int visited[SIZE+1]={0,0};
		edge *temp,*t;
		printf("KRUSKAL'S A1LGORITHM FOR SIZE :: %d\n",SIZE+1);
		for(in=0;in<=SIZE;in++)
		{
				for(jn=in+1;jn<=SIZE;jn++)
				{
						printf("enter weight of %d-%d node:\t",in,jn);			
						scanf("%d",&w);
						if(w==-1)
						{
							continue;
						}
						else
						{
							printf("afsadfsfgasrf\n");
							edge *ptr=(edge*)malloc(sizeof(edge));
							printf("afsadfsfgasrf\n");
							ptr->i=in;
							printf("ma");
							ptr->j=jn;
							ptr->weight=w;
							if(start==NULL)
							{
								start=ptr;
								start->next=NULL;
							}
							else
							{
								t=start;
								
								if(start->weight>w)
								{
									ptr->next=start;
									start=ptr;
								}
								printf("mm");
								while(t->next->weight<w)
								{
									t=t->next;
									if(t->next=NULL)
									{
										break;
									}
								}
								ptr->next=t->next;
								t->next=ptr;
							}
						}
				}
		}
		temp=start;
		while(temp!=NULL)
		{
			if(visited[temp->i]==0 && visited[temp->j]==0)
			{
				printf("node %d - %d with weight %d\n",temp->i,temp->j,temp->weight);
				visited[temp->i]=1;
				visited[temp->j]=1;
			}
		}
}
