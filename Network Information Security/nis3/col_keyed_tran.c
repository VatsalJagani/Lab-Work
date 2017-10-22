#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VVV 97
#define _MAX 26
#define MAX_MAT 10

char* keyed_tran_encr(char *msg, int col, int key[]){
	int i=0,j=0,k=0;
	int len=strlen(msg);
	char *encr=(char *)malloc(100);
	char mat[MAX_MAT][MAX_MAT]={'\0'};
	
	while(*(msg+k)!='\0'){
		for(j=0;j<col;j++){
			mat[i][j]=*(msg+k);
			k++;
		}
		i++;
	}
	*(encr+i)='\0';
	// change cols as per key
	i=0;
	
	while(*(encr+i)!='\0'){
		for(j=0;j<col;j++){
			*(encr+i+j)=*(mat[]		msg+i+key[j]-1);
		}
		i+=col;
	}
	
		
	k=0,i=0,j=0;
	int row=len/col;
	for(i=0;i<col;i++){
		for(j=0;j<=row;j++){
			*(encr+k)=mat[j][i];
			k++;
		}
	}
	
	return encr;
}

main(){
	char s[]="meetmeatthepark";
	int col=5;
	int key[5]={5,3,1,2,4};
	
	printf("%s\n",keyed_tran_encr(s,col,key));
//	printf("%s\n",decr(tran_encr(s,key),key));
}
