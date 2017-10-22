#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VVV 97
#define _MAX 26
#define MAX_MAT 10

char* tran_encr(char *msg, int col){
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
	int col=4;
	
	printf("%s\n",tran_encr(s,col));
//	printf("%s\n",decr(tran_encr(s,key),key));
}
