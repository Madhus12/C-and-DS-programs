#include <stdio.h>
#include <stdlib.h>
int stack[100],top=-1,max,a,choice,stack1[100],top1=-1,top_ref,b;

void insertion()
{
	printf("enter the data to insert to the stack \n");
	scanf("%d",&a);

	if (top<max-1)
	{
		stack[++top] = a;
		top_ref = top;
	}
	else
	{
		printf("stack over flow\n");
	}

}

void display()
{
	for(int i = 0; i<=top;i++)
	{
		printf("%d \t",stack[i] );
	}
	printf("\n");
}


void display_reverse()
{
	for(int i = 0; i<=top_ref;i++)
	{
		printf("%d \t",stack1[i] );
	}
	printf("\n");
}

void deletion()
{
	top = top-1;
	top_ref=top;
}

void reverse()
{
	while(top_ref!=-1)
	{
	b = stack[top_ref--];
	top1=top1+1;
	stack1[top1] = b;

	}
	

}



int main()
{
	printf("enter the size");
	scanf("%d",&max);



	while(1)
	{
		printf("1 for insert 2 for display 3 for delete 4 reverse\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
			insertion();
			break;

			case 2:
			display();
			break;

			case 3:
			deletion();
			break;

			case 4:
			reverse();
			break;

			case 5:
			display_reverse();
			break;

			default:
			exit(0);
		}
	}



	
	
}



