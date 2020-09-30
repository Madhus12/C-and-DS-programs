#include<stdio.h>
#include<unistd.h>

int main()
{
	for(int i=1;i<5;i++)
	{
		fork();
	}
	printf("1");
}
