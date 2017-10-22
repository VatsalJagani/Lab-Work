#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	struct node *next;
	int data;
	struct node *prev;
}node;

node *start = NULL;
void addbeg()
{
	node *ptr;
	ptr=(node*) malloc (sizeof(node));
	if(ptr == NULL)
	{printf("No Space.....Please Clear some unwanted files");}

	printf("Enter Data U want = ");
	scanf("%d",&ptr->data);
	

	if(start == NULL)
	{	
		start = ptr;
		ptr->next = NULL;
		ptr->prev = NULL;
		return;
	}

	ptr->next = start;
	start = ptr;
	start->prev = NULL;
}

void addend()
{
	node *ptr,*temp;
	ptr=(node*) malloc (sizeof(node));
	if(ptr == NULL)
	{printf("No Space.....Please Clear some unwanted files");}

	printf("Enter Data U want = ");
	scanf("%d",&ptr->data);
	

	if(start == NULL)
	{	
		start = ptr;
		ptr->next = NULL;
		ptr->prev = NULL;
		return;
	}
	

	temp=start;
	while(temp->next != NULL)
	{temp = temp->next;}


	temp->next = ptr;
	ptr->prev=temp;
	ptr->next=NULL;

}

void addafter()
{
	node *ptr,*temp;
	int key;

	ptr=(node*) malloc (sizeof(node));
	if(ptr == NULL)
	{
		printf("No Space.....Please Clear some unwanted files");	
	}

	printf("Enter Key");
	scanf("%d",&key);
	
	temp=start;

	while(temp->data != key)
	{temp = temp->next;}
	
	if(temp->next == NULL)
	{
		addend();
		return;
	}

	printf("Enter Data U want = ");
	scanf("%d",&ptr->data);
	

	if(start == NULL)
	{	
		start = ptr;
		ptr->next = NULL;
		ptr->prev = NULL;
		return;
	}
	

	
	if(temp == NULL)
	{
		printf("NO key Found");
		return;
	}
	
	
	
	ptr->next = temp->next;
	temp->next->prev = ptr;
	ptr->prev = temp;
	temp->next = ptr;

}



void addbefore()
{
	node *ptr,*temp;
	int key;

	ptr=(node*) malloc (sizeof(node));
	if(ptr == NULL)
	{
		printf("No Space.....Please Clear some unwanted files");	
	}

	printf("Enter Key");
	scanf("%d",&key);

	if(start->data == key)
	{
		addbeg();
		return;
	}

	printf("Enter Data U want = ");
	scanf("%d",&ptr->data);
	

	if(start == NULL)
	{	
		start = ptr;
		ptr->next = NULL;
		ptr->prev = NULL;
		return;
	}
	

	temp=start;

	while(temp->data != key)
	{temp = temp->next;}
	

	if(temp == NULL)
	{
		printf("NO key Found");
		return;
	}
	
	
	
	ptr->prev = temp->prev;
	temp->prev->next = ptr;
	ptr->next = temp;
	temp->prev = ptr;

}


void delete()
{
	node *temp;
	int key;

	printf("Enter Key");
	scanf("%d",&key);
	

	if(start == NULL)
	{	
		printf("No List Available ");
		return;
	}
	

	temp=start; 
	
	while(temp->data != key)
	{temp = temp->next;}
	

	if(temp == NULL)
	{
		printf("NO key Found");
		return;
	}
	
	if(temp->next == NULL)
	{
		temp->prev->next == NULL;
		free(temp);
		return;
	}

	if(temp->prev == NULL)
	{
		start = temp->next;
		start->prev== NULL;
		free(temp);
		return;
	}
	
	
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	return;

}

void display()
{
	node *temp;
	temp = start;
	do
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}while(temp != NULL);
}

void main()
{
	int x,y;
do
{
	printf("\t What Do U Want = \n\t 1.Insert \n\t 2.Delete \n\t 3.Display \n\t 4.Exit  \n\t Enter Opt : ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			{
				printf("\t Menu : \n\t 1.Add At Begining \n\t 2.Add at End \n\t 3.Add After Element \n\t 4.Add Before Element \n\n\t Enter Appropriate Value : ");
				scanf("%d",&y);
				switch(y)
				{
					case 1:
						{
							addbeg();
							break;
						}
					case 2:
						{
							addend();
							break;
						}
					case 3:
						{
							addafter();
							break;
						}
					case 4:
						{
							addbefore();
							break;
						}
				}
				break;
			}
		case 2:
			{
				delete();				
				break;
			}
		case 3:
			{
				display();
				break;
			}
		case 4:exit(0);
	}
}while(x != 4);
}


