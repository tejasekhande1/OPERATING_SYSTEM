#include <stdio.h>
#include <unistd.h>

// BOTH PROCESSES EXCUTE THE CODE BELOW THE FORK() CALL BECAUSE CHILD THINGS THIS IS ASLO PART HIS CODE 

int main(){

	int pid = fork();
	printf("Process Id : %d\n",getpid());
	printf("Process Parent Id : %d\n",getppid());

	return 0;
}
