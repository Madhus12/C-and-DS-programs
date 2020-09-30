#include<stdio.h>

void main()
{
	int low,mid,high;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int n=10;
	low=0;
	int key;
	high=n;
	mid = (low+high)/2;
	printf("enter the key\n");
	scanf("%d",&key);

	while(low<=high)
	{
		
		if (key > arr[mid])
		{
			low = mid + 1;
			mid = (low + high)/2;
		}
		else if (arr[mid] == key)
		{
			printf("match found\n");
			break;
		}
		else if (key < arr[mid])
		{
			high = mid - 1;
			mid = (low+high)/2;
		}

	}
	if(low>high)
	{
		printf("not found\n");
	}
	
}