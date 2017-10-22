#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void Cqinsert(int Q[],int N,int y)
{
	if(r==N)
		r=0;
	else
		r+=1;

	if(f==r)
	{
		printf("\nOverflow");
		if(r==0)
			r=N;
		else
			r--;
		return;
	}
	Q[r]=y;
	if(f==-1)
		f=0;
}
int Cqdelete(int Q[],int N)
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
		f=r=-1;
		return(y);
	}
	if(f==N)
		f=0;
	else
		f+=1;
	return(y);
}
void print(int Q[],int N)
{
	int i;
	if(r<f)
	{
		for(i=0;i<=r;i++)
			printf("%d->",Q[i]);

		for(i=f;i<=N;i++)
			printf("%d->",Q[i]);
	}
	else
	{
		for(i=f;i<=r;i++)
			printf("%d->",Q[i]);
	}
}
main()
{
	int Q[10],N=9,x,y,k;
	do
	{
		printf("\nWhat do you wants to do?\n1.Insert\n2.Delete\n3.Print\nEnter-999 to Exit:");
		scanf("%d",&x);
		switch(x)
		{
		case 1:	printf("\nEnter the value:");
			scanf("%d",&y);
			Cqinsert(Q,N,y);
			break;
		case 2:
			 k=Cqdelete(Q,N);
			 printf("\nThe Element is Deleted:%d",k);
			 break;

		case 3:	print(Q,N);
			break;

		default:printf("\nInvalid Input.");
			break;
		}
	}while(x != -999);

}
