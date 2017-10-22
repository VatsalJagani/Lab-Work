#include<stdio.h>
void Merge(int a[],int p,int q,int r)
{
	 int i,j,k;
	 int n1=q-p+1;
	 int n2=r-q;
	 int L[n1],R[n2];
	 
	 for(i=0;i<n1;i++)
	 	L[i]=a[p+i];
	 	
	 for(j=0;j<n2;j++)
	 	R[j]=a[q+j+1];
	 	
	 L[i]=99999;
	 R[j]=99999;
	 i=0;
	 j=0;
	 
	 for(k=0;k<(n1+n2);k++)
	 {
	 	if(L[i]<=R[j])
	 	{
	 		a[p+k]=L[i];
	 		i+=1;
	 	}
	 	else
	 	{
	 		a[p+k]=R[j];
	 		j+=1;
	 	}
	 }
}
void MergeSort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		Merge(a,p,q,r);
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
	
	MergeSort(a,0,9);
	
	for(i=0;i<10;i++)
	{
		printf("\nShorted array value %d is %d",i+1,a[i]);
	}
}
