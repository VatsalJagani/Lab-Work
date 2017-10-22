// Output same as :ps -a
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<dirent.h>
#include<string.h>
#include<sys/stat.h>
#include<stdlib.h>
main()
{
FILE *fp;
int value;
DIR *dir;
struct dirent *d;
char c[10];
char c1[10];
char s1[20]="/proc/";
char s2[20]="/stat";
char s3[10];
dir=opendir("/proc");
while((d=readdir(dir))!=NULL)
	{
	value=atoi(d->d_name);
	if(value!=0)
		{
		strcpy(s3,d->d_name);
		strcat(s1,s3);
		strcat(s1,s2);
		fp=fopen(s1,"r");
		fscanf(fp,"%s\t%s\n",c,c1);
		printf("Process ID:%s Process Name:%s\n",d->d_name,c1);
		strcpy(s1,"/proc/");
		}
	}
}

