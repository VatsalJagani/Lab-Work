#include <stdio.h>
#include <stdlib.h>

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


main(){
	int a,n;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Multiplicative inverse of %d w.r.t. %d is %d.",a,n,mul_inverse(a,n));
	printf("\n");
}
