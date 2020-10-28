/* Name: Pragya Singh
   Roll_Number: 2017305 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int x=10;

void func1()
{
	for(int i=11;i<=100;i++)
	{
		x++;
		printf("%d\n",x);
	}
}

void func2()
{
	for(int i=9;i>-90;i--)
	{
		x--;
		printf("%d\n",x);
	}
}

int main()
{
	if(fork()==0){
		func2();
			}
	else{
		wait(NULL);
		func1();
	}
	return 0;
}

