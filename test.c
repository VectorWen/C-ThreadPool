#include "thread_pool.h"
#include <stdio.h>

thread_pool tp;
int threads_number = 5;

void * task(void *arg)
{
	printf("I'm Vector!\n");
}


int main()
{
	init_pool(&tp,threads_number);
	int i;
	for(i=0;i<10;i++)
	{
		add_task(&tp,task,NULL);
		printf("%s%d\n", "add ",i+1);
	}
	destroy_pool(&tp);
	return 0;
}