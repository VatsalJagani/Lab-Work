#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int p[10] = {8, 21, 8, 8};
int w[10] = {2, 7, 4, 8};
int c=8;


int fraction(int *w,int *p,int n,int n_c)
{
	int i,j;
	int temp=n_c;
	int profit=0;
	int t;
	for(i=0;i<n;i++)
	{
		if(*(w+i)<temp)
		{
			temp-=*(w+i);
			profit+=*(p+i);
		}
		else
		{
			t=((float)temp)/(*(w+i));
			profit+=(*(p+i))*t;
		}
	}
	return profit;
}

void knapsack(int *w,int *p,int n,int k)
{
	int i,j=0;
	int *ww=(int *)malloc(sizeof(int)*(n-1));
	int *pp=(int *)malloc(sizeof(int)*(n-1));
	int lb_w=0,lb_n=0,ub_w=0,ub_n=0;
	int temp=0;

	if(k==SIZE)
	{
		return;
	}


	int n_c=0;
	for(i=0;i<SIZE;i++)
	{
		n_c+=(*(w+i));
		if(i==k){
			continue;}

		*(ww+j)=*(w+i);
		*(pp+j)=*(p+i);
		
		j++;
	}
	
	
	if(*(w+k)>c)
	{
		temp=1;
		lb_w=0;
	}
	else{
		lb_w+=*(p+k);
		ub_w=fraction(ww,pp,n-1,n_c-(*(w+k)))+(*(p+k));
		printf("%d\t%d\n",fraction(ww,pp,n-1,n_c-(*(w+k))),(*(p+k)));
	}
	

	ub_n=fraction(ww,pp,n-1,n_c);
	
	printf("with\tLB : %d\tUB : %d\n",lb_w,ub_w);
	printf("wout\tLB : %d\tUB : %d\n",lb_n,ub_n);
	
	int with=ub_w-lb_w;
	int with_out=ub_n-lb_w;
	
	if(with>with_out)
	{
		knapsack(w,p,n,k+1);
	}
	else{
		knapsack(w,p,n-1,k+1);
	}
	
}



main()
{
	knapsack(w,p,SIZE,0);
}


     

