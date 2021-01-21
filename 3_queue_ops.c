#include<stdlib.h>
#define CAPACITY 5

int queue[CAPACITY];
int front = 0;
int rear = 0;


void insert()
{
	if(CAPACITY==rear)
	{
		printf("Queue is Full \n");
	}
	else
	{
		int ele;
		printf("Enter the Element to Insert \n");
		scanf("%d",&ele);
		queue[rear]=ele;
		rear++;
	}
}


void traverse()
{
	if(front==rear)
	{
		printf("Queue is Empty\n");
		
	}
	else
	{
		printf("The queue elements are");
		for(i=front;i<=rear;i++)
		{
			printf("%d-->",queue[i]);
		}
	}
}

void deletion()
{
	if(front==rear)
	{
		printf("Queue is Empty! \n");
	}
	else
	{
		printf("deleted : %d",queue[front]);
		for(i=0;i<rear-1;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
	
	
}

int main()
{
	int choice;
	while(1)
	{
			printf("Queue Operations Are : \n");
	        printf("1 -> Insert\n");
	        printf("2 -> Delete \n");
        	printf("3 -> Traverse \n");
        	
        	printf("Enter Your Choice :");
        	scanf("%d",&choice);
        	
        	switch(choice)
        	{
        		case 1: insert();
        		break;
        		case 2: deletion();
        		break;
        		case 3: traverse();
        		break;
        		default : Printf("Enter a valid number \n");
			}
	}

	return 0;
}
