#include<stdio.h>
#include<stdlib.h>

void quicksort(int a[25],int i,int j)
{
	int p,q,pivert;
	if(i<j)
	{
		 p=i;
		 q=j;
		 pivert=i;
		while(p<q)
		{
			while(a[p]<a[pivert])
			{
				p+=1;
			}
			while(a[q]>a[pivert])
			{
				q-=1;
			}
			if(p<q)
			{	
				int temp;
				temp = a[p];
				a[p] = a[q];
				a[q] = temp;
			}
			for(int k=0;k<9;k++)
			{
				printf("%d \t",a[k]);
			}
			printf("\n");
		}
	
	
		int temp1;
		temp1 = a[pivert];
		a[pivert] = a[q];
		a[q]=temp1;
		quicksort(a,i,q-1);
		quicksort(a,q+1,j);
	}
	printf("the sorted elements are\n");
	for(int k=0;k<9;k++)
	{
		printf("%d \t",a[k]);
	}
	printf("\n");

}

void main()
{
	printf("enter the array elements");
	int a[25];
	for(int i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,8);
}