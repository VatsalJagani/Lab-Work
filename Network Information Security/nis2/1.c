#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define VVV 97
#define _MAX 26

void print(char *mat){
	int k,l;
	for(k=0;k<SIZE;k++)
	{
		for(l=0;l<SIZE;l++)
		{
			printf("%c",*(mat+k*SIZE+l));
		}
		printf("\n");
	}

}

void find_cord(int *x, int *y, char *mat, int value){
	int k,l;
	if(value==106){
		value=105;
	}
	for(k=0;k<SIZE;k++)
	{
		for(l=0;l<SIZE;l++)
		{
			if(*(mat+k*SIZE+l)==value){
				*x=k;
				*y=l;
				return;
			}
		}
	}
}

void encrypt_playfair(char *pt, char *key){
	int i=0;
	char *mat;
	mat=(char *)malloc(sizeof(char)*SIZE*SIZE);
	int k,l;
	int alph[_MAX]={0};

	while(*(key+i)!='\0'){
		*(mat+i)=(*(key+i));
		alph[*(key+i)-VVV]=1;
		i++;
	}
	for(i=VVV;i<_MAX+VVV;i++)
	{
		if(alph[i-VVV]==1){
			continue;
		}
		for(k=0;k<SIZE;k++)
		{
			for(l=0;l<SIZE;l++)
			{

				if(*(mat+k*SIZE+l)!='\0'){
					continue;
				}
				*(mat+k*SIZE+l)=i;
				if(i==105){
					i++;	// i(105) and j(106) with each other
				}
				alph[i-VVV]=1;
				k=6;
				break;
			}
		}
	}

	print(mat);

	// encryption
	i=0;
	int *x1,*x2,*y1,*y2;
	x1=(int *)malloc(sizeof(int));
	y1=(int *)malloc(sizeof(int));
	x2=(int *)malloc(sizeof(int));
	y2=(int *)malloc(sizeof(int));
	while(*(pt+i)!='\0'){
		find_cord(x1, y1, mat, *(pt+i));
		find_cord(x2, y2, mat, *(pt+i+1));
		printf("cordinates: %d %d %d %d\n",*x1,*y1,*x2,*y2);
		if((*x1)==(*x2)){
			*(pt+i)=*(mat+(*x1)*SIZE+((*y1+1)%SIZE));
			*(pt+i+1)=*(mat+(*x2)*SIZE+((*y2+1)%SIZE));
		}
		else if((*x1)==(*x2)){
			*(pt+i)=*(mat+((*x1+1)%SIZE)*SIZE+(*y1));
			*(pt+i+1)=*(mat+((*x2+1)%SIZE)*SIZE+(*y2));
		}
		else{
			*(pt+i)=*(mat+(*x1)*SIZE+(*y2));
			*(pt+i+1)=*(mat+(*x2)*SIZE+(*y1));
		}
		i+=2;
	}
}

void main(){
	char msg[]="helxlo";
	char key[]="monarchy";
	printf("%c\n",105);
	encrypt_playfair(msg,key);
	printf("%s\n",msg);
}
