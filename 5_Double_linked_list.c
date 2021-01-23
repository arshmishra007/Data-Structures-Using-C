#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
	
};

struct node *root = NULL;


void append()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter the nod data \n");
	scanf("%d",&temp->data);
	temp->left =NULL;
	temp->right=NULL;

	if(root ==NULL)
	{
		root = temp;
	}
	else
	{
		
		struct node *p;
		p = root;
		while(p->right !=NULL)
		{
			p = p->right;
		}
		p->right = temp;
		temp -> left =p;
	}
}


void addatbegin()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("enter the node data \n");
	scanf("%d",&temp->data);
	temp->left = NULL;
	temp ->right = NULL;
	
	if(root==NULL)
	{
		root = temp;
	}
	else
	{
		
		temp->right = root;
		root->left = temp;
		root = temp;
	}
}

int length()
{
	struct node *temp = root;
	int count = 0;
	while(temp!=NULL)
	{
		count++;
		temp = temp->right;
	}
	
	return count;
}

void display()
{
	struct node *temp = root;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp = temp->right;
	}
}



void addatafter()
{
	struct node *temp,*p;
	int loc,len,i=1;
	printf("Enter the location u want to  enter the node : \n");
	scanf("%d",&loc);
	len = length();
	if(loc>len)
	{
		printf("Invalid Location Entered!!!!! \n");
		printf("The list contains %d number of nodes",len);
	}
	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		printf("Enter the node data\n");
		scanf("%d",&temp->data);
		temp->left = NULL;
		temp->right = NULL;
		p = root;
		while(i<loc)
		{
			p=p->right;
			i++;
		}
		temp->right = p->right;
		p->right->left = temp;
		
		temp->left = p;
		p->right=temp;
	}
}

int main()
{
	int ch,len;
	while(1)
	{
		printf("Double Linked List Operations \n");
		
		printf("1 -> append \n");
		printf("2 -> addatbegin \n");
		printf("3 -> addatafter \n");
		printf("4 -> display \n");
		printf("5 -> length \n");
		
		printf("__________________ \n");
		printf("Enter Your Choice : \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:append();
			break;
			case 2:addatbegin();
			break;
			case 3:addatafter();
			break;
			case 4:display();
			break;
			case 5:len = length();
			printf("the list is having %d number of nodes \n",len);
			break;
			default : printf("Enter a valid number \n");
			
			
		}
	}
}




























