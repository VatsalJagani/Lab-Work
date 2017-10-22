#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
	int data;
	struct nodetype *next;
}node;

node *start=NULL;



void insert();
void delete();
void print();

void main()
{
	int ch=0;
	while(ch!=-1)
	{
		printf("enter what you want to do \n\t1- insert a node\n\t2-delete a nod\n\t3-print a list\n\t else for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					insert();
					break;
				}
			case 2:
				{
					delete();
					break;
				}
			case 3:
				{
					print();
					break;
				}
			default:
				{
					printf("invalid choice\n");
					break;
				}
		} 
	}
	
}





void insert()
{
	int n;
	
	node *ptr=NULL,*prev=NULL,*curr=start;
	ptr=(node*)calloc(1,sizeof(node));
	
	printf("enter your number\n");
	scanf("%d",&n);
	ptr->data=n;
	if(start == NULL)
	{	
		start=(node*)malloc(sizeof(node));
		start->data=ptr->data;
		start->next=NULL;
		return;
	}
	while(curr->next!=NULL)
	{
		if((ptr->data) <= (start->data))
		{
			ptr->next=start;
			start=ptr;
			return;
		}

		if((ptr->data) <= (curr->data))
		{
			(ptr->next)=curr;
			(prev->next)=ptr;
			return;
		}
		prev=curr;
		curr=curr->next;
	}
	curr->next=ptr;
	ptr->next=NULL;
}

void delete()
{
	int key;
	node *temp=NULL,*curr=start,*prev=NULL;
	if(start==NULL)
	{
		printf("link list is empty");
		return;
	}
	printf("enter number which you want to delete\n");
	scanf("%d",&key);
	
	if(start->data == key)
	{
		temp=start;
		start=start->next;
		free(temp);
		return;
	}
	while(curr->next!=NULL)
	{
		if(curr->data == key)
		{
			prev->next=curr->next;
			free(curr);
			return;
		}
		prev=curr;
		curr=curr->next;
	}
}

void print()
{
	node *temp=start;
	int i=1;
	if(start==NULL)
	{
		printf("link list is empty\n");
		return;
	}
	while(temp!=NULL)
	{
		printf("%d element is %d\n",i,temp->data);
		i++;
		temp=temp->next;
	}
}

