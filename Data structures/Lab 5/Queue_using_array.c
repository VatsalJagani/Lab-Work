#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void Qinsert(int Q[],int N,int y)
{
	if(r >= N)
	{
		printf("\nOverflow");
		return;
	}
	r+=1;
	Q[r]=y;
	if(f==-1)
		f+=1;
}
int Qdelete(int Q[])
{
	int y;
	if(f==-1)
	{
		printf("\nUnderflow");
		return;
	}
	y=Q[f];
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
		f+=1;
	return(y);
}
void print(int Q[],int N)
{
	int i;
	for(i=f;i<=r;i++)
		printf("%d->",Q[i]);
}
main()
{
	int Q[10],N=10,x,y,k;
	do
	{
		printf("\nWhat do you wants to do?\n1.Insert\n2.Delete\n3.Print\nEnter-999 to Exit:");
		scanf("%d",&x);
		switch(x)
		{
		case 1:	printf("\nEnter the value:");
			scanf("%d",&y);
			Qinsert(Q,N,y);
			break;
		case 2:
			 k=Qdelete(Q);
			 printf("\nThe Element is Deleted:%d",k);
			 break;
			
		case 3:	print(Q,N);
			break;
			
		default:printf("\nInvalid Input.");
			break;
		}
	}while(x != -999);
	
}



















