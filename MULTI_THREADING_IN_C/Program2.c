#include <stdio.h>
#include <pthread.h>
void* fun(){
	printf("Start Fun\n");
	printf("Thread Id (FUN) : %ld\n",pthread_self());
	printf("End Fun\n");
}
void main(){
	long int tid;
	printf("Start Main\n");
	printf("Thread Id (MAIN) : %ld\n",pthread_self());
	int t1 = pthread_create(&tid,NULL,fun,NULL);
	sleep(10);
//	pthread_join(t1,NULL);
	printf("End Main\n");
}
