#include <stdio.h>
#include <stdlib.h>
#define VVV 97
#define _MAX 26

char* tran_encr(char *msg, int key){
	int i=0,j=0,k=0;
	char *encr;
	encr=(char *)malloc(40);
	while(*(msg+i)!='\0'){
		if(i%2==0){
			*(encr+j)=(*(msg+i));
			j++;	
		}
		i++;
	}
	k=0;
	i=0;
	while(*(msg+i)!='\0'){
		if(i%2!=0){
			*(encr+j+k)=(*(msg+i));
			k++;	
		}
		i++;
	}
	*(encr+j+k)='\0';
	return encr;
}

main(){
	char s[]="meetmeatthepark";
	int key=12;
	
	printf("%s\n",tran_encr(s,key));
//	printf("%s\n",decr(tran_encr(s,key),key));
}
