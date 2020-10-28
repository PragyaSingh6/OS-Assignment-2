/* Name: Pragya Singh
   Roll_Number: 2017305 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <pthread.h>
int x=10;

void func1()
{
	for(int i=11;i<=100;i++)
	{
		x++;
		printf("%d\n",x);
	}
}

void *func2(void *vargp)
{
	sleep(1);
	for(int i=9;i>-90;i--)
	{
		x--;
		printf("%d\n",x);
	}
	return NULL;
}

int main()
{
	pthread_t thread_id;
	func1();
	pthread_create(&thread_id, NULL, func2, NULL);
	pthread_join(thread_id, NULL);
	exit(0);
}
