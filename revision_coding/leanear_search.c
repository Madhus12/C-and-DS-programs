#include<stdio.h>
 
 void  main()
 {
 	int k,flag=0;
 	int a[10] = {1,2,3,4,5,6,7,8,9};
 	printf("enter the key to search\n");
 	scanf("%d",&k);
 	
 	for (int i=0;i<=9;i++)
 	{
 		if(a[i]==k)
 		{
 			printf("search key found at position %d \n",i+1 );
 			flag = 1;
 		}
 		
 	}
 	if (flag == 0)
 	{
 		printf("searck key not found\n");
 	}

 	
 } 		
 		
