#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *root =NULL;
int len;

void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delete(void);

void main()
{
	int ch;
	
	while(1)
	{
		printf("Single Linked List Operations\n\n");
		printf("1 -> append\n");
		printf("2 -> addatbegin\n");
		printf("3 -> addatafter\n");
		printf("4 -> length\n");
		printf("5 -> display\n");
		printf("6 -> delete\n");
		printf("7 -> quit\n");
		printf("\n");
		printf("Enter Your Choice : \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: append();
			        break;
			case 2: addatbegin();
			        break;
			case 3: addatafter();
			        break;
			case 4: len = length();
			        printf("The Length is : %d",len);
					break;
			case 5: display();
			        break;
			case 6: delete();
			        break;
			case 7: exit(1);
			        break;
			default: printf("Enter the correct data \n");
															        
		}
	}
}


void append()
{
	struct node * temp;
	temp  = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter the node data \n");
	scanf("%d",&temp->data);
	temp->link = NULL;
	
	if(root == NULL)
	{
		root = temp;
	}
	else
	{
		struct node *p;
		p = root;
		
		while(p->link !=NULL)
		{
			p = p->link;
		}
		p->link = temp;
	}
	
	
	
	
	
}


int length()
{
	int count =0;
	struct node *temp;
	temp = root;
	while(temp!=NULL)
	{
		count++;
		temp = temp->link;
		
	}
	return count;
}

void display()
{
	struct node *temp;
	temp = root;
	
	if(temp==NULL)
	{
		printf("List is Empty \n");
		
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
}



void delete()
{
 	struct node *temp;
 	int loc;
 	printf("Enter the location to delete \n");
 	scanf("%d",&loc);
 	
 	if(loc > length())
 	{
 		printf("Invalid Location \n");
 		
	 }
	 else if(loc == 1)
	 {
	 	temp = root;
	 	root = temp->link;
	 	temp->link = NULL;
	 	
	 	//now the first node is free
	 	free(temp);
	 }
	 else
	 {
	 	struct node *p =root,*q;
	 	int i = 1;
	 	if(i<loc-1)
	 	{
	 		p = p->link;
		 }
		 q = p->link;
		 p->link = q ->link;
		 q->link = NULL;
		 free(q);
	 }
	 
}

void addatafter()
{
	struct node *temp,*p;
	int loc,len,i;
	printf("Enter the location : \n");
	scanf("%d",&loc);
	len = length();
	if(loc> len)
	{
		printf("Invalid Location \n");
		printf("The number of elements present in the list are : %d",len);
	}
	else
	{
		p =root;
		while(i<loc)
		{
			p=p->link;
			i++;
		}
		temp = (struct node *)malloc(sizeof(struct node));
		printf("Enter Node Data : \n");
		scanf("%d",&temp->data);
		temp->link = NULL;
		temp->link = p->link;
		p->link=temp;
		
	}
}

void addatbegin()
{
	
}


