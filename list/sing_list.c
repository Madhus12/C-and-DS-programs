#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head =NULL;

void insertion(int a)
{
	struct node *link = (struct node*)malloc(sizeof(struct node));

	link ->data = a;

	link ->next = head;

	head = link;

}

void display()
{
	struct node *ptr = head;
	while(ptr!=NULL)
	{
		printf("%d=>",ptr->data);
		ptr=ptr->next;
	}
}

void delete_front()
{
	struct node *ptr1;
	ptr1 = head;
	head=head->next;
	free(ptr1);

}

void delete_rear()
{
	struct node *ptr1,*ptr2;
	ptr1 = head;

	while(ptr1->next!=NULL)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
	}
	ptr2->next=NULL;
	free(ptr1);

}

void insert_rear(int a)
{
	struct node *ptr1 = head;

	struct node *link1=(struct node*)malloc(sizeof(struct node));

	link1->data=a;

	link1->next=NULL;
	while(ptr1->next!=NULL)
	{
		ptr1=ptr1->next;
	}
	ptr1->next=link1;

}

void insert_pos(int pos,int data1)
{
	struct node *ptr1,*ptr2;
	int i=0;
	ptr1 = head;
	struct node *link2=(struct node*)malloc(sizeof(struct node));
	link2->data=data1;
	while(i!=pos)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
		i+=1;
	}
	ptr2->next=link2;
	link2->next=ptr1;
}
void delete_position(int dpos)
{
	struct node *ptr1,*ptr2;
	int i =1;
	ptr1=head;
	while(i!=dpos)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
		i+=1;
	}
	ptr2->next=ptr1->next;
	free(ptr1);

}

void reverse()
{
	struct node *prev,*cur,*next;
	prev=NULL;	
	cur=head;
	next=NULL;
	while(cur!=NULL)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	head=cur;
}
		
		
		
		
		
		

void main()
{
	int choice,a,ar,pos,posa,dpos;
	while(1)
	{
		printf("\nenter the choice\n");
		printf("1 for insertion \n2 display\n3 for delete front\n4 for delete rear\n5 for insert rear\n6 for insert from position\n 7 for delete position\n 8 to reverse \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
					printf("enter the to insert\n");
					scanf("%d",&a);
					insertion(a);
					break;

			case 2:
					display();
					break;

			case 3: 
					delete_front();
					break;

			case 4:
					delete_rear();
					break;

			case 5:
					printf("enter the data to insert\n");
					scanf("%d",&ar);
					insert_rear(ar);
					break;

			case 6:
					printf("enter the position to insert");
					scanf("%d",&pos);
					printf("enter the data to insert");
					scanf("%d",&posa);
					insert_pos(pos,posa);
					break;

			case 7:
					printf("enter the position to delete the data\n");
					scanf("%d",&dpos);
					delete_position(dpos);
					break;

			case 8:
					reverse();
					break;
			default:
					exit(0);
		}
	}

}
