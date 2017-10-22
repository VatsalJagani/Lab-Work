#include <stdio.h>
#include <stdlib.h>
#define VVV 97
#define _MAX 26


char* encr(char *msg, int key){
	int i=0;
	char *encr;
	encr=(char *)malloc(10);
	while(*(msg+i)!='\0'){
		*(encr+i)=(((*(msg+i)-VVV)+key)%_MAX)+VVV;
		i++;
	}
	*(encr+i)='\0';
	return encr;
}

char* decr(char *msg, int key){
	int i=0;
	char *dec;
	dec=(char *)malloc(10);
	while(*(msg+i)!='\0'){
		int x=(((*(msg+i)-VVV)-key)%_MAX);
		if(x<0){
			x+=_MAX;
		}
		*(dec+i)=x+VVV;
		i++;
	}
	*(dec+i)='\0';
	return dec;
}

void attack(char *msg){
	int key=0;
	for(key=0;key<_MAX;key++){
		printf("%s\n",decr(msg,key));
	}
}

main(){
	char *msg;
	int key;
	msg=(char *)malloc(10);
	printf("Enter MSG to encrypt : ");
	scanf("%s",msg);
	printf("Enter Key to encrypt : ");
	scanf("%d",&key);
	key=key%_MAX;
	printf("%s",encr(msg,key));
	printf("\n");
	printf("Enter MSG to decrypt : ");
	scanf("%s",msg);
	printf("Enter Key to decrypt : ");
	scanf("%d",&key);
	key=key%_MAX;
	printf("%s",decr(msg,key));
	printf("\n  Bruteforce Attack \n");
	attack(encr(msg,key));
}
