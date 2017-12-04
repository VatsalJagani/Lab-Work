#include <stdio.h>
#include <stdlib.h>
#define N 100

struct stack
{
    char stk[N];
    int top;
};
typedef struct stack STACK;
STACK s;
void push (char num);
char pop();
char peek();

typedef struct op_pre_table{
	int no_of_symbols;
	char symbols[N];
	int f[N];
	int g[N];
}op_table;

int getFPrecedence(op_table *table,char symbol);
int getGPrecedence(op_table *table,char symbol);


void main(){
	char input[]={'a','^','(','a','+','a',')','$'};
//	char input[]={'+','-','*','/','^','(',')','a','$'};
	op_table *table=(op_table*)malloc(sizeof(op_table));
	table->no_of_symbols=9;
	table->symbols[0]='+';
	table->f[0]=2;
	table->g[0]=1;
	table->symbols[1]='-';
	table->f[1]=2;
	table->g[1]=1;
	table->symbols[2]='*';
	table->f[2]=4;
	table->g[2]=3;
	table->symbols[3]='/';
	table->f[3]=0;
	table->g[3]=0;
	table->symbols[4]='^';
	table->f[4]=4;
	table->g[4]=5;
	table->symbols[5]='(';
	table->f[5]=0;
	table->g[5]=5;
	table->symbols[6]=')';
	table->f[6]=6;
	table->g[6]=0;
	table->symbols[7]='a';
	table->f[7]=6;
	table->g[7]=5;
	table->symbols[8]='$';
	table->f[8]=0;
	table->g[8]=0;
	
	char stk='$';
	int inp=0,stk_pre,in_pre;
	push('$');
	printf("Hello\n");
	while(!(peek()=='$' && input[inp]=='$')){
		stk=peek();
		char input_symbol=input[inp];
		stk_pre=getFPrecedence(table,stk);
		in_pre=getGPrecedence(table,input_symbol);
		if(stk_pre>=in_pre){
			char c=pop();
			printf("Reduce : ");
			if(c=='a'){
				printf("E->a");
			}
			else if(c=='+'){
				printf("E->E+E");
			}
			else if(c=='-'){
				printf("E->E-E");
			}
			else if(c=='*'){
				printf("E->E*E");
			}
			else if(c=='^'){
				printf("E->E^E");
			}
			else if(c=='('){
				printf("E->(E)");
			}
			else if(c==')'){
				printf("E->(E)");
			}
			else{
				printf("E->E/E %c",c);
			}
			printf("\n");
			if(stk_pre==in_pre){
				inp++;
			}
		}
		else if(stk_pre<in_pre){
			printf("%c pushed on stack\n",input_symbol);
			push(input_symbol);
			inp++;
		}
	}
}



int getFPrecedence(op_table *table,char symbol){
	int i=0;
	for(i=0;i<table->no_of_symbols;i++){
		if(symbol==table->symbols[i]){
			return table->f[i];
		}
	}
	return -1;
}
int getGPrecedence(op_table *table,char symbol){
	int i=0;
	for(i=0;i<table->no_of_symbols;i++){
		if(symbol==table->symbols[i]){
			return table->g[i];
		}
	}
	return -1;
}


void push (char num)
{
        s.top = s.top + 1;
        s.stk[s.top] = num;
}

char pop()
{
    char num;
    if (s.top == - 1)
    {
    	exit(0);
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        s.top = s.top - 1;
        return num;
    }
}

char peek()
{
    char num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        return num;
    }
}
