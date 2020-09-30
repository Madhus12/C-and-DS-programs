#include <stdio.h>
#include <stdlib.h>
int stack[100],top=-1,max,a,choice;
int main()
{
	printf("enter the size");
	scanf("%d",&max);

	printf("1 for insert 2 for display\n");
	scanf("%d",&choice)
	while(1)
	{
		switch(choice)
		{
			case 1 :
			insertion();
			break;

			default:
			exit(0);
		}
	}



	
	
}

void insertion()
{
	printf("enter the data to insert to the stack \n");
	scanf("%d",a);

	if (top<=max-1)
	{
		stack[++top] = a;
	}

}

