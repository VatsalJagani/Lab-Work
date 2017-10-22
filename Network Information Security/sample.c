#include<stdio.h>
int main()
{
   int c,d;
   printf("Enter value of c:");
   scanf("%d",&c);
   printf("Enter value of d:");
   scanf("%d",&d);
   c=findRemainder(c,d);
   printf("Remainder=%d\n",c);
   return 0;
}
int findRemainder(int dividend,int divisor)
{ 
    int q,r;
    q=dividend/divisor;
     r=dividend%divisor;   
    
   if(q<=0 && dividend<0)
   {
      q=q-1;
       r=dividend-q*divisor;
   }
  printf("Quotient=%d\n",q);
   return r;
 }
