#include<stdio.h>
#define KEYLEN 1
int k[KEYLEN]={0};
int main()
{
 int i,j=0,e,temp,no,k1,t1,key;
 int s[256],t[256];

for(i=0;i<256;i++)
{
  s[i]=i;
  //t[i]=0;
  //k[i]=0;
  
}
 for(i=0;i<256;i++)
 {
   s[i]=i;
   t1=i%KEYLEN;
   t[i]=k[t1];
 }
 j=0;
 for(i=0;i<256;i++)
 {
  j=(j+s[i]+t[i])%256;
  temp=s[i];
  s[i]=s[j];
  s[j]=temp;
 }
 i=0;j=0,e=0;
 while(e<100)
 {
   /*printf("Enter 0 to break");
   scanf("%d",&no);*/
   if(no==0)
    break;
   else
   {
     i=(i+1)%256;
     j=(j+s[i])%256;
     temp=s[i];
     s[i]=s[j];
     s[j]=temp;
     t1=(s[i]+s[j])%256;
     key=s[t1];
     printf("%d\t",key);
   }
   e=e+1;
 }
 return 0;
}
