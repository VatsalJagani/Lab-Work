/*to insert delete and sorted list*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node_type
{
	int data;
	struct node_type *next;
}node;

node *start=NULL;
//node *ptr=(node*)malloc(sizeof(node));

void insert();
//void delete();
void display();
void add_after_ele(node *);

main()
{
	int ans;
	do
	{
		printf("enter your choice.....1.insert....2.delete....3.display....4.end:");
		scanf("%d",&ans);
	
		switch(ans)
		{
		case 1:insert();
			break;
//		case 2:delete();
//			break;
		case 3:display();
			break;
		case 4:printf("end");
			break;
		default:
			printf("invalid entry");
			break;
		}
	}while(ans!=4);
}

void insert()
{
	node *temp;
	temp=start;
	node *ptr=(node*)malloc(sizeof(node));
	printf("enter data to be inserted");
	scanf("%d",&(ptr->data));

	if(start==NULL)
	{
		start=ptr;
		start->next=NULL;
	}
	else
	{
	//node *ptr;
	//node *temp;
	//temp=start;
	while((ptr->data)>=(temp->data))
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{
		ptr->next=start;
		start=ptr;
	}
	else if(temp->next==NULL)
	{
		temp->next=ptr;	
		ptr->next=NULL;
	}
	else	
	{
		ptr->next=temp->next;
		temp->next=ptr;
	}
	}
}

/*void insert_at_end()
{
	node *temp;
	while(temp->next ==NULL)
	{
		temp->next=ptr;
		ptr->next=NULL;
	}
}*/

void display()
{
	node *temp=start;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}

/*void delete()
{	
	node *temp,*p=start;
	printf("enter element to be deleted...");
	scanf("%d",temp->data);
	while(p->data!=temp->data)
	{
		p=p->next;
	}

	temp=p->next;
	p->next=temp->next;
	free(temp);
}*/	
