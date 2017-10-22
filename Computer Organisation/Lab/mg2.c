#include<stdio.h>
int A[100];
int a[10];
main()
{int i,j=0,k,flag,n1,n2;

printf("Enter the size of bigger array");
scanf("%d",&n1);
printf("Enter the elements of bigger array");
for(i=0;i<n1;i++)
{scanf("%d",&A[i]);}
printf("Enter the size of smaller array");
scanf("%d",&n2);
printf("Enter the elements of smaller array");

for(i=0;i<n1;i++)
{flag=0;
for(k=0;k<n2;k++)
{
if(a[k]==A[i])
{
flag=1;
}
}
if(flag==1)
{
if(A[i]==a[j])
{
j++;
if(j==n2)
{j=0;}
}
printf("%d  HIT\n",A[i]);}
else{
a[j]=A[i];
j++;
if(j==n2)
{j=0;}
printf("%d ",A[i]);
for(k=0;k<n2;k++)
{
printf("%d ",a[k]);
}
printf("\n");

}

}
}

