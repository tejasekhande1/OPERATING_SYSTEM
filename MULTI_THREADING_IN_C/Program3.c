#include <stdio.h>
#include <pthread.h>
void* gun(){

	printf("Start Gun\n");
	printf("TID (GUN): %ld\n",pthread_self());
	printf("End Gun\n");
}
void* fun(){

	pthread_t tid;
	printf("Start Fun\n");
	printf("TID (FUN): %ld\n",pthread_self());
	pthread_create(&tid,NULL,gun,NULL);
	printf("End Fun\n");
}
void main(){

	pthread_t tid;
	printf("Start Main\n");
	printf("TID (MAIN): %ld\n",pthread_self());
	pthread_create(&tid,NULL,fun,NULL);
	printf("End Main\n");
}

// UNPREDICTABLE OUTPUT
