#include <stdio.h>
#include <unistd.h>
int main(){
	int pid = fork();
	if(pid > 1){
		printf("Parent Id : %d\n",getpid());
		printf("Grand Parent Id : %d\n",getppid());
		wait(NULL);
	}else if(pid == 0){
		printf("Child Id : %d\n",getpid());
		printf("Child's Parent Id : %d\n",getppid());
		execlp("/bin/ps","shashi",NULL);
	}else{
		return -1;
	}
}
