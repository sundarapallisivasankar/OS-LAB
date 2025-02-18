#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(){
	char buff[100];
	DIR *dirp;
	struct dirent *dptr;
	printf("\nEnter the directory name:\t");
	scanf("%s",buff);
	dirp=opendir(buff);
	if(dirp==NULL){
		printf("The given directory  does not exist.\n");
		exit(1);
	}
	//Read and print directory name
	printf("Contents of directory %s:\n",buff);
	while((dptr=readdir(dirp))!= NULL){
		printf("%s\n",dptr->d_name);
	}
	//close the directory 
	closedir(dirp);
	return 0;
}
