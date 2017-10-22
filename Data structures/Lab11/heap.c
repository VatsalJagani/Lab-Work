#include <stdio.h>
int a[]={0,26,5,77,1,61,11,59,15,48,19};
void print();
void Adjust(int r,int n)
{
	int e,j;
	e=a[r];
	for(j=2*r;j<=n;j=2*j)
	{
		if(j<n && a[j]<a[j+1])
			j++;
		if(e>=a[j])
			break;
		a[j/2]=a[j];
	}
	a[j/2]=e;
}
void Heap(int n)
{
	int i,temp;
	for(i=n/2;i>=1;i--)
	{
		Adjust(i,n);
		print();
	}
	for(i=n-1;i>=1;i--)
	{
		temp=a[1];
		a[1]=a[i+1];
		a[i+1]=temp;
		Adjust(1,i);
	}
}
main()
{
	int i;
	Heap(10);
	printf("Sorted Data :");
	print();
}
void print()
{
    int i;
    for(i=1;i<11;i++)
	{
		printf("  %d ",a[i]);
	}
	printf("\n");
}
