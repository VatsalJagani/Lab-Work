#include<stdio.h>
#define M 3
#define N 3
#define P 3
int A[M][N], B[N][P],C[M][P], C1[M][P];
int main ()
{
   int i,j,k;
   printf("Enter first Matrix");
   for(i=0;i<M;i++)
   {
     for(j=0;j<N;j++)
     {
       scanf("%d",&A[i][j]);
     }
   }
   printf("Enter second Matrix");
   for(i=0;i<N;i++)
   {
     for(j=0;j<P;j++)
     {
       scanf("%d",&B[i][j]);
     }
   }
   printf("Answer:\n");
   for(i=0;i<M;i++)
   {
     for(j=0;j<P;j++)
     { 
       C[i][j]=0;
       for(k=0;k<N;k++)
       {
         C[i][j]+=(A[i][k]*B[k][j]);

       }
      C1[i][j]=findRemainder(C[i][j],26);
      printf("%d\t",C[i][j]);
     }
     printf("\n");
   }
   printf("Answer of modulo 26\n");
   for(i=0;i<M;i++)
   {
     for(j=0;j<P;j++)
     {
       printf("%d\t",C1[i][j]);
     }
     printf("\n");
   }
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
  //printf("Quotient=%d\n",q);
   return r;
 }
