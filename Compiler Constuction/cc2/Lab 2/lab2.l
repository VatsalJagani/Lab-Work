%{
	int ch=0;
%}
letter [a-zA-Z]
%%

{letter}	ch++;
%%
int main(void)
{
	yylex();
	printf("Number of characters :%d",ch);
	return 0;
}
int yywrap(void) 
{
	return 1;
}
