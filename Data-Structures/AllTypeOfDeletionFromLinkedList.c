#include<stdio.h>
#include<stdlib.h>

typedef struct ll 
{
	int data;
	struct ll *link;
}node;

node *head;

void insert(int);
void begDelete();
void endDelete();
void deleteAtRandom(int);
void traverse();

int main(void)
{
	int choice, item;
	while(1)
	{
	printf("\nChoose from the following options given below\n\n");
	printf("\n****************************************************\n");
	printf("\nPress 1 for insertion.\nPress 2 for deletion from beginning.\nPress 3 for deletion from end.\nPress 4 for deletion at specific position.\nPress 5 to display. \nPress 6 to Exit.");
	printf("\n\n****************************************************\n\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("\nenter the element to be inserted : ");
				scanf("%d",&item);
				insert(item);
				break;
			}
		case 2:
			{
				begDelete();
				break;
			}
		case 3:
			{
				endDelete();
				break;
			}
		case 4:
			{
				int position;
				printf("\nEnter the position : ");
				scanf("%d",&position);
				deleteAtRandom(position);
				break;
			}
		case 5:
			{
			    traverse();
				break;
			}
		case 6:
			{
				exit(0);
				break;
			}
		default:
			{
				printf("\nYou have made a wrong choice.");
			}
		
	}
}
		
}

void insert(int item)
{
	node *ptr;
	ptr = (node*)malloc(sizeof(node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		ptr->data = item;
		ptr->link = head;
		head = ptr;
		printf("\nnode is inserted\n");
	}
}

void begDelete()
{
	node *ptr;
	if(head == NULL)
	{
		printf("\nUNDERFLOW\n");
	}
	else
	{
		ptr = head;
		head = ptr->link;
		free(ptr);
		printf("\nNode is deleted.\n");
	}
}

void endDelete()
{
	node *ptr, *tmp;
	if(head == NULL)
	{
		printf("\nUNDERFLOW\n");
	}
	else if(head->link == NULL)
	{
		head = NULL;
		free(head);
		printf("\nNode is deleted.\n");
	}
	else{
		tmp = head;
		while(tmp->link != NULL)
		{
			ptr = tmp;
			tmp = tmp->link;
		}
		ptr->link = NULL;
		free(tmp);
		printf("\nNode is deleted.\n");
	}
}

void deleteAtRandom(int position)
{
	node *ptr, *tmp;
	int i;
	if(head == NULL)
	{
		printf("\nUNDERFLOW\n");
	}
	else
	{
		tmp = head;
		for(i=0; i<position-1; i++)
		{
			ptr = tmp;
			tmp = tmp->link;
			if(tmp == NULL)
			{
				printf("There are less than %d elements in the list.\n",position);
				return;
			}
		}
		ptr->link = tmp->link;
		free(tmp);
		printf("\nnode at %d position is deleted.\n",position);
	}
}

void traverse()
{
	node *ptr;
		if(head == NULL)
		printf("\nList is Empty.\n");
		else
		{
		ptr = head;
		while(ptr != NULL)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->link;
		}
	}
}
