#include <stdio.h>
#include <stdlib.h>
#define VVV 97
#define _MAX 26

char* keyed_tran_encr(char *msg, int key[], int m){
	int i=0,j=0;
	char *encr;
	encr=(char *)malloc(40);
	
	while(*(msg+i)!='\0'){
		for(j=0;j<m;j++){
			*(encr+i+j)=*(msg+i+key[j]-1);
		}
		i+=m;
	}
	
	*(encr+i)='\0';
	return encr;
}

char* keyed_tran_decr(char *msg, int key[], int m){
	int i,j;
	int new_key[10];
	for(i=1;i<=m;i++){
		for(j=1;j<=m;j++){
			if(key[j-1]==i){
				new_key[i-1]=j;
			}
		}
	}
	return keyed_tran_encr(msg,new_key,m);
}

main(){
	char s[]="enemyattackstonightz";
	int key[]={3,1,4,5,2};
	
	printf("%s\n",keyed_tran_encr(s,key,5));
	printf("%s\n",keyed_tran_decr(keyed_tran_encr(s,key,5),key,5));
}
