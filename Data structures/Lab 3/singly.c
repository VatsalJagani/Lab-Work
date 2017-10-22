#include<stdio.h>
#include<string.h>
typedef struct order
{
	int data;
	struct order *next;
}node;
node *start = NULL;
void add_at_bgn(int a)
{
	node *ptr;
	ptr = (node *)malloc(sizeof(node));
	if (start == NULL)
	{
		ptr->data = a;
		start=ptr;
		ptr->next=NULL;
	}
	else
	{
		ptr->data=a;
		ptr->next = start;
		start=ptr;
	}
}

void add_at_end(int a)
{
	node *ptr,*temp;
	ptr = (node *)malloc(sizeof(node));
	if (start == NULL)
	{
		ptr->data = a;
		start=ptr;
		ptr->next=NULL;
	}
	else
	{
	ptr->data=a;
	temp->next=ptr;
	temp=ptr;
	temp->next=NULL;
	free(temp);
	}
}

void add_after_element(int a)
{
	node *ptr,*temp=start;
	ptr = (node *)malloc(sizeof(node));
	if (start == NULL)
	{
		ptr->data = a;
		start=ptr;
		ptr->next=NULL;
	}
	else if(a <= start->data)
	{
		add_at_bgn(a);
	}
	else
	{
		while(1)
		{
			if(a >= temp->data && (a <= temp->next->data || temp->next == NULL ))
			break;
			else
			temp = temp->next;
		}
		if(temp->next != NULL)
		{
			ptr->data=a;
			ptr->next=temp->next;
			temp->next=ptr;
		}
		else
		{
		add_at_end(a);
		}
	}
}




	
void display()
{
	node *temp;
	temp=start;
	while(temp->next != NULL)
	{
		printf("\n%d",temp->data);
		temp = temp->next;
	}
	printf("\n%d",temp->data);
}




void main()
{
	int value=9998;
	while(1)
	{	
		printf("\nEnter Values:");
		scanf("%d",&value);
		printf("\nFor End Enter 9999");
		if(value==9999)
		{
			break;
		}
		else if(value==9998)
		{
		add_after_element(value);
		}
		else
		{
		add_after_element(value);
		}
		
	}
	display();
}
