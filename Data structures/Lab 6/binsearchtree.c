#include<stdio.h>
#include<stdlib.h>

typedef struct treenode
{
	int data;
	struct treenode *lc;
	struct treenode *rc;
}node;

node *head=NULL;

void insert()
{
	node *p;
	node *ptr=(node *)malloc(sizeof(node));
	printf("\nEnter your data:");
	scanf("%d",&(ptr->data));
	if(head==NULL)
	{
		head=ptr;
		head->lc=NULL;
		head->rc=NULL;
	}
	else
	{
		p=head;
		do
		{
			if((ptr->data < p->data) && p->lc !=NULL)
			{	p=p->lc;	}
			else if((ptr->data > p->data) && p->rc !=NULL)
			{	p=p->rc;	}
			else if(p->rc == NULL || p->lc == NULL)
			{	break; }
			else break;
		}while(1);
			if((ptr->data < p->data) && p->lc ==NULL)
			{
				p->lc=ptr;
				ptr->lc = NULL;
				ptr->rc = NULL;
				return;
			}
			else if((ptr->data > p->data) && p->rc ==NULL)
			{
				p->rc=ptr;
				ptr->lc = NULL;
				ptr->rc = NULL;
				return;
			}
			else
			{
				printf("Data already exist");
			}
	}
}
void inorder(node *head)
{
	if(head == NULL)
	{
		printf("\nNULL Tree");
		return;
	}
	if(head->lc != NULL)
	{
		inorder(head->lc);
	}
	printf(" %d->",head->data);
	if(head->rc != NULL)
	{
		inorder(head->rc);
	}
}
void preorder(node *head)
{
	if (head != NULL)
		printf("%d->",head->data);
	else
		printf("\nEmpty Tree");
	if(head->lc != NULL)
		preorder(head->lc);
	if(head->rc != NULL)
		preorder(head->rc);
}
main()
{
	int x;
	do
	{
		printf("\nEnter \n1.Insert Node \n2.Inorder\n3.Preorder Enter -999 to exit:");
		scanf("%d",&x);
		switch (x)
		{
			case 1: insert();
				break;
			case 2: inorder(head);
				break;
			case 3: preorder(head);
				break;
			default:
				printf("\nEnter valid Input");
		}
	}while(x != -999);
}
