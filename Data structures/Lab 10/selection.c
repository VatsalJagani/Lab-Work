#include<stdio.h>
selectsort(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<(n-1);i++)
	{
		min=i;
		for(j=i;j<(n-1);j++)
		{
			if(a[j+1]<a[min])
			{
			min=j+1;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
main()
{
	int a[10]={0},i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter %d value of array",i+1);
		scanf("%d",&a[i]);
	}
	
	selectsort(a,10);
	
	for(i=0;i<10;i++)
	{
		printf("\nShorted array value %d is %d",i+1,a[i]);
	}
}
