#include<stdio.h>
#include<stdlib.h>
int min(int x,int y);
main()
{
	int i,j;
    /* int n;
     int A;
     printf("enter number of coins\n");
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
     {
        scanf("%d",&d[i]);
     }
     
	int A;
     printf("enter Amount\n");
     scanf("%d",&A);
	int *x=(int)malloc(sizeof(A));	
*/
	int d[3]={1,2,6};
	int c[3][x+1]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<x+1;j++)
		{
			if(i==0)
			{
				c[i][j]=j;
			}
			else if(j==0)
			{
				c[i][j]=0;			
			}
			else
			{
				c[i][j]=min(c[i-1][j],1+c[i][j-d[i]]);				
			}


		}


	}
	
   printf("Amount");
    for(i=0;i<x+1;i++)
    {
      printf("  %d",i);
    }

    printf("\n----------------------------\n");
    for(i=0;i<3;i++)
    {       
            printf("%d      ",d[i]);
            for(j=0;j<x+1;j++)
            {
                printf("%d  ",c[i][j]);
            }
            printf("\n");

     }

	

}

int min(int x,int y)
{
    if(x<=y)
    {
      return x;
    }
    else
    {
      return y;
    }

}


