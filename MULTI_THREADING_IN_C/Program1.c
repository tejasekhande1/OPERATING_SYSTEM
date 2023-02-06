#include <stdio.h>
#include <pthread.h>
void fun(){
	printf("Start Fun\n");
	printf("Thread Id (FUN) : %ld\n",pthread_self());
	printf("End Fun\n");
}
void main(){
	printf("Start Main\n");
	printf("Thread Id (MAIN) : %ld\n",pthread_self());
	fun();
	printf("End Main\n");
}
