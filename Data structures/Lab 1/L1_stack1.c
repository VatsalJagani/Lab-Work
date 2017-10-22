#include<stdio.h>
static int top=-1;
int s[10];
void push(int s[],int n);
void pop(int s[],int n);
void print(int s[],int n);
void peep(int s[],int n,int index);
void replace(int s[],int n,int index);
main()
{
	int key,index;
	printf("Enter:1-push\n2-pop\n3-peep\n4-replace\n0-print");
	printf("Enter -999 to end program\nEnter key:");
	scanf("%d",&key);
	
	while(key!=-999)
	{
	   switch(key)
	   {
		case 1:
		push(s,10);
		break;

		case 2:
                pop(s,10);
                break;

		case 3:
		printf("Enter index:");
		scanf("%d",&index);
                peep(s,10,index);
                break;

		case 4:
		printf("Enter index:");
		scanf("%d",&index);
                replace(s,10,index);
                break;

		case 0:
                print(s,10);
                break;

	}

	   printf("Enter:\n1-push\n2-pop\n3-peep\n4-replace\n0-print");
           printf("\nEnter -999 to end program\nEnter key:");
           scanf("%d",&key);
	}
	
}

void push(int s[],int n)
{
	int x;
	if(top>=n)
	{
		printf("Stack overflow\n");
		return;
	}
	else
	{
		top=top+1;
		printf("Enter number:\n");
		scanf("%d",&x);
		s[top]=x;
	}
	return;
}

void pop(int s[],int n)
{
	int x;
	if(top==-1)
	{
	   printf("Underflow\n");
	   return;
	}
	else
	{
	   top--;
	   x=s[top+1];
	   printf("%d\n",x);
	   s[top+1]=0;
	}
	return;
}	

void print(int s[],int n)
{
	int i;
	for(i=0;i<top;i++)
	{
	   printf("%d\n",s[i]);
	}
}

void peep(int s[],int n,int index)
{
	int x,y;
	if((top-index+1)<0)
	{
	   printf("Stack underflow\n");
	   return;
	}
	else
	{
	   x=s[top-index+1];
	   y=top-index+1;	
	   printf("s[%d]:%d\n",y,x);
	}
}

void replace(int s[],int n,int index)
{
	int x;
	if((top-index+1)<0)
	{
	   printf("Stack underflow\n");
	   return;
	}
	else
	{
	   printf("Enter replacement:\n");
	   scanf("%d",&x);
	   s[top-index+1]=x;
	}
}
