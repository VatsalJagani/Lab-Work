#include <stdio.h>
#include <stdlib.h>

int mul_inverse(int a, int n);
int fast_modulation(int a, int b, int n);
int millerRabin(int n);

int RSAencryption(int p, int q, int e, char pt){
	int m=(int)pt;
	int n=p*q;
	int c=fast_modulation(m,e,n);
	return c;
}

char RSAdecryption(int d, int n, int ct){
	char c=(char)fast_modulation(ct,d,n);
}


int main()
{
	char m;
	int d,p,n,q,e,temp=1;
	printf("Enter msg char to encrypt : ");
	scanf("%c",&m);
	
	do{
		if(temp==0){
			printf("Entered P is not prime, Try again ..\n");
		}
		printf("Enter  P : ");
		scanf("%d",&p);
		temp=millerRabin(p);
	}while(!temp);
	
	do{
		if(temp==0){
			printf("Entered Q is not prime, Try again ..\n");
		}
		printf("Enter  Q : ");
		scanf("%d",&q);
		temp=millerRabin(q);
	}while(!temp);
	
	do{
		if(temp==0){
			printf("Entered 'e' is not proper\n");
		}
		printf("Enter  e : ");
		scanf("%d",&e);
		n=p*q;
		int phi_n=(p-1)*(q-1);	/* p and q are prime, phi(p)=p-1 */
		temp=mul_inverse(e,phi_n);
	}while(!temp);
	printf("Public key is : %d\n",temp);
	printf("C.T. : %d\n",RSAencryption(p,q,e,m));
	printf("Enter public key d : ");
	scanf("%d",&d);
	scanf("%c",&m);
	printf("Enter char to decrypt : ");
	scanf("%c",&m);
	printf("P.T. : %c\n",RSAdecryption(d,n,m));
}


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
		//printf("%d %d %d %d %d %d %d\n",q,r1,r2,r,t1,t2,t);
		r1=r2;
		r2=r;
		t1=t2;
		t2=t;
	}
	if(r1!=1){
		return 0;
	}
	else{
		return t1;
	}
}

int fast_modulation(int a, int b, int n){ /* a^b mod n */
	long int remainder,quotient;
    int binaryNumber[100],i=1,j;
    quotient = b;
    while(quotient!=0){
	     binaryNumber[i++]= quotient % 2;
	     quotient = quotient / 2;
	}

	long int f=1;
    for(j = i -1 ;j> 0;j--){
    	f=f*f;
    	if(binaryNumber[j]){
    		f=f*a;
    	}
    	f=f%n;
    	printf("%d %d\n",binaryNumber[j],f);
    }
    return f;
}

int millerRabin(int n){
	int a=2,k=0,i;
	int m=n-1;
	while(m%a==0){
		k++;
		m/=a;
	}
	int t=fast_modulation(a,m,n);
	if(t==1 || t==n-1){
		return 1;
	}
	for(i=1;i<=k-1;i++){
		t=(t*t)%n;
		if(t==1){
			return 0;
		}
		else if(t==n-1){
			return 1;
		}
	}
	return 0;
}

