#include <stdio.h>
#include <stdlib.h>

typedef struct p{
	int x,y;
}point;

point* multiplicate(int x, point *a);
point* multyplyBy2(point *a);
point* addition(point *a, point *b);
int mod(int x,int n);
int inverse(int,int);

int p,a,b;

main(){
	int g,d;
	point *po=(point*)malloc(sizeof(point));
	printf("Enter P, A, B : ");
	scanf("%d %d %d",&p,&a,&b);
	
	printf("Enter x, y :");
	scanf("%d %d",&po->x,&po->y);
	
	printf("Enter d: ");
	scanf("%d",&d);
}


point* multiplicate(int x, point *a){
	if(x==1){
		return a;
	}
	if(x%2==1){
		return addition(a,multiplicate(x-1,a));
	}
	else{
		return multiplicate(x/2,multiplyBy2(a));
	}
}

point* multyplyBy2(point *a){
	point *ans=(point *)malloc(sizeof(point));
	int u=3*a->x*a->x + a;
	int l=inverse(mod(2*a->y,p),p);
	int y=mod(u*l,p);
	ans->x=mod(y*y-a->x-b->x,p);
	ans->y=mod(y*(a->x-ans->x)-a->y,p);
	return ans;
}

point* addition(point *a, point *b){
	if(a->x==b->x && a->y==b->y)
		return multyplyBy2(a);
	point *ans=(point *)malloc(sizeof(point));
	int u=(b->y-a->y);
	int l=inverse(mod((b->x-a->x),p),p);
	int y=mod(u*l,p);
	ans->x=mod(y*y-a->x-b->x,p);
	ans->y=mod(y*(a->x-ans->x)-a->y,p);
	return ans;
}

int inverse(int a,int n)
{
	int q,r1,r2,r,t1,t2,t;
	r1=n;
	r2=a;
	t1=0;
	t2=1;
	while(r2!=0)
	{
		q=r1/r2;
		r=r1%r2;
		t=t1-(t2*q);
		r1=r2;
		r2=r;
		t1=t2;
		t2=t;
	}
	if(r1!=1)
	{
		return 0;
	}
	else{
		return mod(t1,n);
	}

}

int mod(int x,int n){
	if(x>0){
		return x%n;
	}
	else{
		x=x%n;
		return x+n;
	}
}
