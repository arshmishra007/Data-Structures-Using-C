#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *top = NULL;


void push()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("ENTER THE NODE DATA \n");
	scanf("%d",&temp->data);
	temp->link=top;
	top = temp;
}

void pop()
{
	struct node *temp;
	temp = top;
	if(temp == NULL)
	{
		printf("No Nodes Are there \n");
	}
	else
	{
		printf("%d element is popped now \n",temp->data);
		top = top->link;
		temp->link = NULL;
		free(temp);
	}
}


void traverse()
{
	struct node *temp;
	if(top ==NULL)
	{
		printf("Stack is Empty \n");
	}
	else
	{
		temp = top;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp = temp->link;
		}
	}
}


int main()
{
	int ch;
	while(1)
	{
		printf("Stack Implementation Using LinkedList \n");
    	printf("1 -> pushing an element \n");
	    printf("2 -> popping an element \n");
    	printf("3 -> traverse operation \n");
    	printf("Enter your choice \n");
    	
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1: push();
    		break;
    		case 2: pop();
    		break;
    		case 3: traverse();
    		break;
    		default : printf("Enter a valid Number \n");
		}
	}
	
	return 0;
}
