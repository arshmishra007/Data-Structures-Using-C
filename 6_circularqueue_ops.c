#include<stdio.h>
#define CAPACITY 5

int front =-1;
int rear =-1;

int cqueue[CAPACITY];

void insert(int ele)
{
	if((front == rear+1)|| (rear ==CAPACITY-1))
	{
		printf("Queue is full \n");
	}
	else if(front ==-1 && rear ==-1)
	{
		front =rear = 0;
		//inserting the first element
		 cqueue[rear]=ele;
	}
	else if(rear == CAPACITY-1)
	{
		rear =0;
		cqueue[rear]=ele;
	}
	else
	{
		rear++;
		cqueue[rear]=ele;
	}
}

void deletion()
{   int ele;
	if(front==-1&& rear==-1)
	{
		printf("Queue is Empty \n");
	}
	else if(front==rear)
	{
		//deleting the last node
		
		ele = cqueue[front];
		front = rear = -1;
		
	}
	else if(front ==CAPACITY-1)
	{
		ele =cqueue[front];
		front =0;
	}
	else
	{
		ele = cqueue[front];
		front++;
	}
	
	printf("Element Deleted is : %d\n ",ele);
	
	
}

void display()
{
	int p;
	
	for(p=front;p<=rear;p++)
	{
	  printf("%d-->",cqueue[p])	;
	} 
}

void main()
{
	int ch;
	int ele;
    while(1)
    {
    		printf("Circular Queue Operations \n");
        	printf("__________________________\n");
	        printf("1 -> insertion \n");
	        printf("2 -> deletion \n");
        	printf("3 -> display \n");
	        printf("__________________________\n");
	        printf("Enter Your Choice \n");
	        scanf("%d",&ch);
	        
	        switch(ch)
	        {
	        	case 1: printf("Performing Insertion \n");
	        	        printf("Enter the element \n");
	        	        scanf("%d",&ele);
	        	        insert(ele);
	        	        break;
	        	case 2: printf("Performing Deletion \n");
				        deletion();
						break;
				case 3: printf("Display Operation \n");
				        display();
						break;
				default : printf("Enter the valid number \n");				        
			}
	}

	
}


