#include<stdio.h>
#include<stdlib.h>
typedef struct ll{
	int data;
	struct ll *link;
}node;
node *head;
void insertAtBeg(int);
void insertAtLast(int);
void insertAtRandom(int, int);
void traverse();
int main(void)
{
	int choice, item;
	while(1){
	printf("\nPress 1 to insert At Beg\nPress 2 to insert at last\nPress 3 to insert after specificified node\nPress 4 to traverse the list.");
	printf("\n\nenter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : 
				printf("\nEnter the item to be inserted\n");
				scanf("%d",&item);
				insertAtBeg(item);
				break;
		case 2:
				printf("\nEnter the item to be inserted\n");
				scanf("%d",&item);
				insertAtLast(item);
				break;
		case 3: 
				{
				int position;
				printf("\nEnter the item to be inserted\n");
				scanf("%d",&item);
				printf("\nEnter the position :");
				scanf("%d",&position);
				insertAtRandom(item,position);
				break;
			}
		case 4: 
				traverse();
				break;
		deafault:
				printf("\ninvalid choice made.\n");
	}
	}
}


void insertAtBeg(int item)
{
	node *ptr;
	ptr = (node*)malloc(sizeof(node));
	if(ptr==NULL)
	{
		printf("OVERFLOW\n");
	}
	else{
		ptr->data = item;
		ptr->link = head;
		head = ptr;
		printf("\nNode is inserted successfully.\n");
	}
}

void insertAtLast(int item)
{
	node *ptr, *tmp;
	ptr = (node*)malloc(sizeof(node));
	if(ptr==NULL)
	{
		printf("OVERFLOW");
	}
	else{
		ptr->data = item;
		if(head == NULL)
		{
			ptr->link = head;
			head = ptr;
			printf("\n Inserted Successfully");
		}
		else{
			tmp = head;
			while(tmp->link != NULL)
			{
				tmp = tmp->link;
			}
			tmp->link = ptr;
			ptr->link = NULL;
			printf("\n inserted successfully");
		}
	}
}

void insertAtRandom(int item, int position)
{
	node *ptr,*tmp;
	int i;
	ptr = (node*)malloc(sizeof(node));
	if(ptr == NULL)
	{
		printf("OVERFLOW");
	}
	else{
		if(head == NULL)
		{
			insertAtBeg(item);
		}
		else{
			ptr->data = item;
			tmp = head;
			for(i=0; i<position; i++)
			{
				tmp = tmp->link;
				if(tmp == NULL)
				{
					printf("Can't insert'");
					return;
				}
			}
			ptr->link = tmp->link;
			tmp->link = ptr;
			printf("\nInserted Successfully\n");
		}
	}
	
}

void traverse()
{
	node *tmp;
	tmp = head;
	while(tmp != NULL)
	{
		printf("%d-> ",tmp->data);
		tmp = tmp->link;
	}
}
