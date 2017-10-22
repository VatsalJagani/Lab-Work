#include<stdio.h>
#include<stdlib.h>
static int top = 0;
char s[100]={'\0'};
	
int push(char a[],int t,char n)
{
	if(t>=100)
	{
		printf("Stack overflow\n");
		return;
	}
	else
	{
		t = t+1;
		printf("in push top = %d\n",t);
		a[t]=n;
		printf("%c \n",a[t]);
		top=t;
	}
	return(top);
}

char pop(char b[])
{
	int c=top;
	if(c==0)
	{
	   	printf("Underflow\n");
	   	return;
	}
	else
	{
		c--;
		printf("b[top]=%c in pop-top=%d \n",b[c+1],c);
		top=c;
	}
	return(b[top+1]);
}	



void main()
{
	char exp[20],next,t1,t2,res;
	int i=0,g;
	printf("Enter Your expression in postfix form = ");
	gets(exp);

	next=exp[0];
	
	while(next != '\0')
	{
		i++;
		if(next >= 48 && next <= 57 )
		{	
			push(s,top,next);
			printf("num push ok top=%d\n",top);
			next=exp[i];			
		}
		else if(next == '*')
		{
			t2=pop(s)-'0';
			t1=pop(s)-'0';
			res =(t1)*(t2);
			push(s,top,(char)res);
			printf("num * ok\n");
			next = exp[i];
		}
		else if(next == '+')
		{
			t2=pop(s)-'0';
			printf("t2=%d\n",t2);
			t1=pop(s);
			printf("t1=%c\n",t1);
			res =(t1)+(t2);
			printf("res=%c\n",res);
			push(s,top,(char)res);
			printf("num + ok\n");
			printf("%c\n",res);
			next = exp[i];
		}
		else if(next == '-')
		{
			t2=pop(s)-'0';
			t1=pop(s);
			res =(t1)-(t2);
			printf("num - ok\n");
			push(s,top,(char)res);
			next = exp[i];
		}
		else if (next == '/')
		{
			t1=pop(s)-'0';
			t2=pop(s);
			res =(t1)/(t2);
			push(s,top,(char)res);
			printf("num / ok\n");
			next = exp[i];
		}
		else 
		break;
	}
g = pop(s)-'0';
printf("Answer is %d",g);
}
