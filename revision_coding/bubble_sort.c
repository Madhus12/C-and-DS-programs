#include<stdio.h>

void main()
{
	int i,a[100],t,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if (a[i]>a[j])
			{	
				t = a[i];
				a[i]=a[j];
				a[j]=t;
			}

		}	
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}