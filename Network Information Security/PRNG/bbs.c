#include<stdio.h>
unsigned long int findgcd(unsigned long int,unsigned long int);
int main()
{
  unsigned long int p,q;
  unsigned long int n,s,t,w;
  int choice,k=0,i;
  int B[100];
  printf("Enter 1st prime Number\n");
  scanf("%ld",&p);
  printf("Enter 2nd prime Number\n");
  scanf("%ld",&q);
  if(p%4!=3 || q%4!=3)
  {
    printf("Invalid input for p or q:\n");
    return -1;
  }
  n=p*q;
  label:
  printf("Enter s such that s is co-prime with n=%ld\n",n);
  scanf("%ld",&s);
  t=findgcd(n,s);
  printf("GCD=%ld\n",t);
  if(t==1)
  { 
    do
    {
     w=(s*s)%n;
     if(w==0)
     {
       goto label;
     }
     if(w%2==0)
     {
       B[k]=0; 
     }
     else
     {
       B[k]=1;
     }
     k++;
     printf("Random number=%ld\n",w);
     s=w;
     /*printf("Enter 0 to stop\n");
     scanf("%d",&choice);*/
    }while(k<=100);
  }
  else
  {
        printf("Invalid input for s\n");
        return -1;
  }
  for(i=0;i<k-1;i++)
  {
    printf("%d\t",B[i]);
  }
  return 0;
}
unsigned long int findgcd(unsigned long int a,unsigned long int b)
{
  unsigned long int r1=a;
  unsigned long int r2=b;
  unsigned long int q,r;
  while(r2>0)
  {
    q=r1/r2;
    r=r1-q*r2;
    r1=r2;
    r2=r;
  }
  return r1;
}
