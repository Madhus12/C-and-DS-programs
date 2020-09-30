#include <stdio.h>
#include<stdlib.h>
int stack[100],top=-1,a,b,max;
void push(int a)
{
	if(top==max-1)
	{
		printf("overflow\n");
	}
	top+=1;
	stack[top]=a;
}
void pop()
{
	if(top<=-1)
	{
		printf("underflow\n");
	}
	top=top-1;
	
}
void display()
{
	for (int i = 0; i <=top; i++)
	{
		printf("%d\n",stack[i]);
	}
}
int main()
{
	
	printf("enter the size of the stack\n");
	scanf("%d",&max);
	while(1)
	{
		printf("enter the choice\n 1 for push \n 2 for pop \n 3 for display\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("enter the data to push\n");
				scanf("%d",&b);
				push(b);
				break;

			case 2:
					pop();
					break;

			case 3:
					display();
					break;

			default:
					exit(0);

		}
	}
}