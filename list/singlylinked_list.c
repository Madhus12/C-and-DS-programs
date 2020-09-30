#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;

void insertion(int c)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));

	temp -> data = c;

	temp -> next = head;

	head = temp;

}

struct node display()
{
	struct node *temp1 = head;

	while(temp1 != NULL )
	{
		printf("%d =>",temp1->data);
		temp1 = temp1 -> next;

	}

	printf("\n");
}

void deletion()
{
	struct node *temp = head;

	head = head->next;

	printf("the deleted node is %d\n",temp->data);
	free(temp);
}

void delete_rear()
{
	struct node *ptr1,*ptr2;
	ptr1 = head;
	
	while(ptr1 -> next != NULL)
	{
		ptr2= ptr1;
		ptr1= ptr1 -> next;
	}
	    
		ptr2->next = NULL;
		printf("deleted node is %d \n",ptr1->data);
		free(ptr1);
}
void insertionposition(int a,int pos)
{
	struct node *ptr1,*ptr2;
 	int d = 0;
	ptr1 = head;

	struct node *link = (struct node*)malloc(sizeof(struct node));

	link ->data = a;

	while(d!=pos-1)
	{
		ptr2=ptr1;
		ptr1 = ptr1->next;
		d+=1;
	}
	ptr2->next = link;

	link->next = ptr1;
}

void delete_form_position(int pos)
{
	struct node *ptr1,*ptr2,*temp;
	ptr1=head;
	int d= 0;
	while(d!=pos-1)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
		d+=1;
	}
	temp = ptr1;
	ptr1=ptr1->next;
	ptr2->next=ptr1;
	free(temp);
}

void search(int k)
{
	struct node *temp = head;
	int flag = 0;
	while(temp!=NULL)
	{
		if (temp->data == k)
		{
			flag = 1;
		}
		temp=temp->next;

	}
	if (flag==1)
	{
		printf("search key found\n");
	}
	else
	{
		printf("search key not found\n");
	}

}

int main()
{
	int a,b,n,k;

	while(1)
	{
		printf("enter the choice \n 1 for insertion \n 2 delete from front end \n 3 for display \n 4 delete from rear end \n 5 to insert any position\n 6 to delete from any position\n 7 for search \n");

		scanf("%d",&a);
		switch(a)
		{
			
			case 1:
				printf("enter the data data to insert\n");
				scanf("%d",&b);
				insertion(b);
				break;

			case 2:
					deletion();
					break;

			case 3:
					display();
					break;

			case 4:
					delete_rear();
					break;

			case 5:
					printf("enter the data to insert\n");
					scanf("%d",&a);
					printf("entar position to insert\n");
					scanf("%d",&n);

					insertionposition(a,n);
					break;
			case 6:
					printf("enter the position where you need to delete the data\n");
					scanf("%d",&n);
					delete_form_position(n);
					break;

			case 7:
					printf("enter the key to search\n");
					scanf("%d",&k);
					search(k);
					break;
			default:
					exit(0);


		}
	}
	
}
