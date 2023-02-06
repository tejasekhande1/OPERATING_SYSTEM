#include <stdio.h>
#include <unistd.h>
int main(){

	int pid = fork();

	if(pid > 1){
		printf("Parent Process Id : %d\n",getpid());
		printf("Parent Process Parent Id : %d\n",getppid());
	}else if(pid == 0){
		printf("Child Process Id : %d\n",getpid());
		printf("Child Process Parent Id : %d\n",getppid());
	}else{
		return -1;
	}
}
