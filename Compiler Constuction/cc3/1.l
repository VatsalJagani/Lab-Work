%{
	int the=0,a=0,an=0;
%}

%%
\/\/[^\n]*	printf("%s\n",yytext);
\/\*[^(\*\/)]*	printf("%s*/\n",yytext);
%%

int yywrap(){
	return(1);
}

int main()
{
	yyin=fopen("test.txt","r");
	yyout=fopen("test2.txt","w");
	yylex();
	return 0;
}
