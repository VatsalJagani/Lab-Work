%{
	int lines=0,words=0,caps=0,smalls=0,literals=0;
	int flag=0,flag_word=0;
%}

%%
[a-z]	smalls++;flag_word=1;
[A-Z]	caps++;flag_word=1;
[ \t]	if(flag_word){words++;flag_word=0;}
\n	lines++;if(flag_word){words++;flag_word=0;}
["']	if(!flag){flag++;}else{literals++;flag=0;}
@@	printf("Lines:%d  Words:%d  Capital-Laters:%d  Small-Laters:%d  Literals:%d\n",lines,words,caps,smalls,literals);exit(0);
%%

int yywrap(){
	return(0);
}

int main()
{
	yylex();
	return(0);
}
