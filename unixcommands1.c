#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int pid,pid1,pid2;
	pid=fork();
	if(pid==-1){
		printf("Error in process creation ");
		exit(1);
	}
	if(pid!=0){
		pid1=getpid();
		printf("The parent process ID is %d\n",pid1);
	}
	else{
		pid2=getpid();
		printf("The child process ID is %d\n",pid2);
	}
}
