#include<stdio.h>

#define L 10
void quicksort(int a[],int p,int x)
{
	int q;
	if(p<x)
	{
		q=partition(a,p,x);
		quicksort(a,p,(q-1));
		quicksort(a,(q+1),x);
	}
}

void inssort(int a[],int ln)
{
	int i,key,j;
	for(i=1;i<=ln;i++)
	{
		key=a[i];
		j=i-1;
		while(a[j]>key && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}

int partition(int a[],int p,int x)
{
	int l=a[x];
	int i=p-1,j,temp;
	for(j=p;j<=x;j++)
	{
		if(a[j]<l)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	temp=a[x];
	a[x]=a[i+1];
	a[i+1]=temp;
	
	return (i+1);
}

void main()
{
	int a[L];
	int i,flag;
	for(i=0;i<L;i++)
	{
		printf("\nEnter %d element of your array of %d=",i+1,L);
		scanf("%d",&a[i]);
	}
	
	printf("\nWhich sorting do you wants to do?\n 1.Quicksort \n 2.Insertion sort");
	scanf("%d",&flag);
	if(flag==1)
	{
		quicksort(a,0,L-1);
	}
	else if(flag ==2)
	{
		inssort(a,L-1);
	}
	else
	{
		printf("\nWrong Value Entered");
	}
	for(i=0;i<L;i++)
	{
		printf("\nElement %d is %d",i+1,a[i]);
	
	}
}
