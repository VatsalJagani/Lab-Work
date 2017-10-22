#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node
{
	char dat[10];
	struct node *next;
}nm;

nm *head[26]={NULL};


struct hashtable
{
	char buc;
	nm *ele;
}ht[26];

char data[20][10]={"int","double","float","char","if","while","for","do","else","break","include","define","static","struct","union","goto","case","switch","continue","return"};


void main()
{

	int i,j,ans=97;	
	for(i=0;i<26;i++,ans++)
	{
		ht[i].buc=ans;
		(ht[i].ele)=(nm *)malloc(sizeof(nm));
		head[i]=(ht[i].ele);
	
		(ht[i].ele->next)=NULL;
	}
	
	for(i=0;i<20;i++)
	{
		for(j=0;j<26;j++)
		{
			if(data[i][0]==ht[j].buc)
			{	
				if((head[j]->dat)==NULL)
				{
					strcpy((head[j]->dat),data[i]);
				}
				else
				{
					nm   *no=(nm *)malloc(sizeof(nm));
					nm *tmp=head[j];
					while(tmp->next!=NULL)
					{
						tmp=tmp->next;
					}
					tmp->next=no;
					no->next=NULL;
					strcpy((no->dat),data[i]);
					
				}
			}
		}
	}
	nm *ptr;			
	for(i=0;i<26;i++)
	{
		ptr=head[i];
		printf("%c ->",ht[i].buc);
		while(ptr!=NULL)
		{
			printf("%s \t",ptr->dat);
			ptr=ptr->next;
		}
		printf("\n");
	}
	
}
					
