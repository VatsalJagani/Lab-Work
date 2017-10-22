#include <stdio.h>
#include <stdlib.h>
#define VVV 97
#define _MAX 26

char* auto_key(char *msg, int key){
	int i=0,value;
	char *encr;
	encr=(char *)malloc(40);
	while(*(msg+i)!='\0'){
		value=(*(msg+i)-VVV);
		*(encr+i)=((value+key)%_MAX)+VVV;
		key=value;
		i++;
	}
	*(encr+i)='\0';
	return encr;
}

char* decr(char *msg, int key){
	int i=0;
	char *dec;
	dec=(char *)malloc(40);
	while(*(msg+i)!='\0'){
		int x=(((*(msg+i)-VVV)-key)%_MAX);
		if(x<0){
			x+=_MAX;
		}
		key=x;
		*(dec+i)=x+VVV;
		i++;
	}
	*(dec+i)='\0';
	return dec;
}


main(){
	char s[]="attackistoday";
	int key=12;
	
	printf("%s\n",auto_key(s,key));
	printf("%s\n",decr(auto_key(s,key),key));
}
