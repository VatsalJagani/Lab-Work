#include<stdio.h>
int count=0;
bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i< (n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
			count++;
		}
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
	
	bubblesort(a,10);
	
	for(i=0;i<10;i++)
	{
		printf("\nShorted array value %d is %d",i+1,a[i]);
	}
	printf("count=%d",count);
}
