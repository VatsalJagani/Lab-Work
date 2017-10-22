#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct hashtable
{
	char bucket;
	char element[5][15];
}ht[26];
char data[20][15]={"int","double","float","char","if","while","for","do","else","break","include","define","static","struct","union","goto","case","switch","continue","return"};
main()
{
	int i,j,slot[26]={0},a=97;
	for(i=0;i<26;i++)
	{
		ht[i].bucket=a;
		a++;
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<26;j++)
		{
			if(data[i][0]==ht[j].bucket)
			{
				if(slot[j]<5)
				{
					strcpy(ht[j].element[slot[j]],data[i]);
					slot[j]++;
				}
				else
				{
					printf("\nOverloaded ht[%d]",j);
					return;
				}
			}
		}
	}
	printf("\nYour Hash Table:\n");
	for(i=0;i<26;i++)
	{
		printf("\n%c --> ",ht[i].bucket);
		for(j=0;j<5;j++)
		{
			if(ht[i].element[j] != NULL)
			{
				printf("%s  ",ht[i].element[j]);
			}
		}
	}	
}
