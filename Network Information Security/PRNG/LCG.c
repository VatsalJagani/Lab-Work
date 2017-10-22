#include<stdio.h>
int main()
{
   unsigned long int a,b,n;
   unsigned long int x[100];
   int i=0;
   printf ("Enter value of a\n");
   scanf("%ld",&a);
   printf ("Enter value of b\n");
   scanf("%ld",&b);
   printf ("Enter value of n\n");
   scanf("%ld",&n);
   printf ("Enter value of x0\n");
   scanf("%ld",&x[0]);
   
   while(i<99)
   {
     x[i+1]=(a*x[i]+b)%n;
     printf("%ld\t",x[i+1]);
     i++;
   }
   return 0;
}
