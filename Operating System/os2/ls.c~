#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printLs(char *directory);
void print(char *directory);

main(int args,char *dir[]){
	if(args > 2){
		if(strcmp(dir[1],"-r")==0 || strcmp(dir[1],"-R")==0)
			printLs(dir[2]);
		else
			print(dir[1]);
	}
	else
		print(dir[1]);
}

void printLs(char *directory){
	DIR *dfd;
	dfd=opendir(directory);
	struct dirent *dp;
	while ((dp = readdir(dfd)) != NULL) {
           if(strcmp(dp->d_name,".")==0 || strcmp(dp->d_name,"..")==0){
           	continue;
           }
           else{
           	printf("%s \n", dp->d_name);
           	if( dp->d_type == DT_DIR){
           		int newSize = strlen(directory)  + strlen(dp->d_name) + 2; 
			char * newBuffer = (char *)malloc(newSize);
   			strcpy(newBuffer,directory);
   			strcat(newBuffer,"/");
           		strcat(newBuffer,dp->d_name);
           		printLs(newBuffer);
           	}   	
           }
       }
       closedir(dfd);
}

void print(char *dir){
	DIR *dfd;
	dfd=opendir(dir);
	struct dirent *dp;
	while ((dp = readdir(dfd)) != NULL) {
           if(strcmp(dp->d_name,".")==0 || strcmp(dp->d_name,"..")==0){
           	continue;
           }
           else{
           	printf("%s\n", dp->d_name);
           }
       }
       closedir(dfd);
}
