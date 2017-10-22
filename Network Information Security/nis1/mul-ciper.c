#include <stdio.h>
#include <stdlib.h>
#define VVV 97
#define _MAX 26

int mul_inverse(int a, int n){
	int q,r1,r2,r,t1,t2,t;
	r1=n;
	r2=a;
	t1=0;
	t2=1;
	while(r2!=0){
		q=r1/r2;
		r=r1%r2;
		t=t1-t2*q;
		r1=r2;
		r2=r;
		t1=t2;
		t2=t;
	}
	if(r1!=1){
		printf("Multiplicative inverse can't found\n");
		exit(0);
	}
	else{
		return t1;
	}
}

char* encr(char *msg, int key){
	int i=0;
	char *encr;
	encr=(char *)malloc(10);
	while(*(msg+i)!='\0'){
		*(encr+i)=(((*(msg+i)-VVV)*key)%_MAX)+VVV;
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
		int x=((*(msg+i)-VVV)*mul_inverse(key,_MAX))%_MAX;
		if(x<0){
			x+=_MAX;
		}
		*(dec+i)=x+VVV;
		i++;
	}
	*(dec+i)='\0';
	return dec;
}

int check_inverse(int a, int n){
	int q,r1,r2,r,t1,t2,t;
	r1=n;
	r2=a;
	t1=0;
	t2=1;
	while(r2!=0){
		q=r1/r2;
		r=r1%r2;
		t=t1-t2*q;
		r1=r2;
		r2=r;
		t1=t2;
		t2=t;
	}
	if(r1!=1){
		return(0);
	}
	else{
		return 1;
	}
}

void attack(char *msg){
	int key=0;
	for(key=0;key<_MAX;key++){
		if(check_inverse(key,_MAX)){
			printf("%s\n",decr(msg,key));
		}
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
