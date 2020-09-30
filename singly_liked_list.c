#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;

void insertion(int a)
{
	struct node *link = (struct node*)malloc(sizeof(struct node));

	link -> data = a;

	link -> next = head;

	head = link;

}

void delete()
{
	struct node *temp = head;
	
	head = head->next;
	printf("the deleated node is %d\n",temp->data);
	free(temp);


}

void display(struct node *head)
{
	
	printf("display\n");
	
		while(head != NULL)
		{
			printf("%d =>",head->data);
			head = head ->next;
		}
		printf("\n");
		

}



int main()
{
	int a;
	int b;
	while(1)
	{
		printf("enter the 1 for insertion 2 for display and 3 for delete_front \n");
		scanf("%d",&a);
		
		switch(a)
		{
			case 1 :
				
				printf("enter the data for linked list");
				scanf("%d",&b);
				insertion(b);
				break;
			
			case 2 :
					display(head);
					break;

			case 3:
					delete(head);
					break;

			

			default:
					exit(0);

		}

	}
}



