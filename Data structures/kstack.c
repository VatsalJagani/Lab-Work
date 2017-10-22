#include<stdio.h>
#define N 10

int push(int [],int,int);
int pop(int [],int);
void peep(int [],int,int);
int choice=1;

void main()
{
	int a[N]={0},top=0,x,j,i,I;
	for(j=0;;j++)
	{
	switch(choice)
	{
	case 1:	top = push(a,top,N);
		for(i=top-1;i>=0;i--)
			printf("%d\n",a[i]);	
		break;
	
	case 2: top = pop(a,top);
		 
		for(i=top-1;i>=0;i--)
                	printf("%d\n",a[i]);
		break;
		
	case 3:	printf("Enter index of number ");
		scanf("%d",&I);
		peep(a,top,I);
		break;
	default : exit(0);	
	}
	}
}
int push(int b[],int top,int n)
{
	int x,c;
	do
	{
		printf("Enter next number ");
		scanf("%d",&x);

		if(top >= n)
		{
			printf("\nOverflow.\n");
			break;
		}
		else
		{
			b[top]=x;
			top++;
		}
		printf("Which Operation 1.Push 2.Pop 3.Peep 4.Exit ");
                scanf("%d",&choice);
	}while(choice==1);
	return(top);
}
int pop(int b[],int top)
{
        int c;
        do
        {
                if(top == 0)
                {
                        printf("\nUnderflow.");
                        break;
                }
                else
                {       
                        top--;
                }
                printf("Which Operation 1.Push 2.Pop 3.Peep 4.Exit ");
                scanf("%d",&choice);
        }while(choice==2);
        return(top);

}
void peep(int b[],int top,int i)
{
	do
	{
		if(top-i+1 < 0)
		{
			printf("Underflow peep");
			return;
		}
		else
		{
			printf("%d\n",b[top-i+1]);
		}

	         printf("Which Operation 1.Push 2.Pop 3.Peep 4.Exit ");
	                scanf("%d",&choice);
        	if(choice == 3)
		{
			 printf("Enter index of number ");
	                scanf("%d",&i);
		}
	}while(choice==3);
}
