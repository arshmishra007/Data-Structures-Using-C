#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY], top=-1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void peek(void);






void main()
{  
    int ch;
	int ele; 
	int item;

	while(1)
	{   
		printf("1 is for push \n");
		printf("2 is for pop \n");
		printf("3 is for peek \n");
		printf("4 is for traverse \n");
		printf("5 is for quit \n");
		
		printf("Enter Your Choice \n");
		scanf("%d", &ch);
		
		
		switch(ch)
		{
			case 1: printf("Enter the element to be inserted \n");
			        scanf("%d",&ele);
			        push(ele);
			        break;
			case 2: item = pop();
			        if(item ==0)
			        {
			        	printf("Stack is underflow \n");
					}
					else
					{
						printf("Popped item is %d \n",item);
					}
			        break;
			case 3: peek();
			        break;
			case 4: traverse();
			        break;
			case 5: exit(0);
			        break;
			default : printf("Invalid Input \n");								       
		}
	}
}


// pushing the value inside the stack
void push(int element)
{
	if(isFull())
	{
		printf("Stack is Full \n");
	}
	else
	{
		//increasing the top value
		
		top++;
		stack[top]=element;
		printf("element pushed is %d \n",element);
	}
}

int isFull()
{
	if(top == CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// deleting the value inside the stack
int pop()
{
	int ele;
	if(isEmpty())
	{
		return 0;
	}
	else
	{
	    return stack[top--];
	}
	return top;
}

int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// peek operation

void peek()
{
	if(isEmpty())
	{
		printf("Stack is empty\n");
		
	}
	else
	{
		printf("The top most element of the stack is : %d \n",stack[top]);
		
		
	}
}


// traversing in the stack

void traverse()
{
	int i;
	if (isEmpty())
	{
		printf("No Elements \n");
	}
	else
	{
		printf("The stack elements are : \n");
		for(i =0;i<=top;i++)
		{
			printf("%d \n",stack[i]);
		}
	}
}

























