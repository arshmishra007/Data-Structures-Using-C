#include<stdio.h>
#include<stdlib.h>

//creating the structure of the node

struct node{
	int data;
	struct node *left;
	struct node *right;
};

//declaring the global variable

struct node *root =NULL;

void insert()
{
	struct node *temp,*parent;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter the Node Data :\n");
	scanf("%d",&temp->data);
	temp ->left =NULL;
	temp ->right =NULL;
	parent =root;
	if(root==NULL)
	{
		root=temp;
		//first node connected with root
	}
	else
	{
		//creating the current node
		struct node *current;
		current =root;
		
		while(current)
		{
			parent = current;
			if(temp->data>current->data)
			{
				current =current->right;
			}
			else
			{
				current = current->left;
			}
			
		}
		if(temp->data>parent->data)
		{
			parent->right = temp;
		}
		else
		{
			parent->left=temp;
		}
	}
	
}

//displaying the elements the binary search tree
/*
types of traversal are 1)inorder 2)preorder 3)postorder
*/

void inorder(struct node *temp)
{
	if(temp->left)
	{
		inorder(temp->left);
	}
	printf("%d-->",temp->data);
	if(temp->right)
	{
		inorder(temp->right);
	}
}

void postorder(struct node *temp)
{
	if(temp->left)
	{
		postorder(temp->left);
	}
	if(temp->right)
	{
		postorder(temp->right);
	}
	printf("%d-->",temp->data);
}

void preorder(struct node *temp)
{
	printf("%d-->",temp->data);
	if(temp->left)
	{
		preorder(temp->left);
	}
	if(temp->right)
	{
		preorder(temp->right);
	}
	
}

int main()
{
	int ch;
    while(1)
    {
    		printf("Tree Operations here are as follows : \n");
	        printf("_._._.__._._.__._._.__._._.__._._.__._._._\n");
	        printf("1) Inserting a Node \n");
	        printf("2) Preorder traversal \n");
	        printf("3) postorder traversal \n");
	        printf("4) inorder traversal \n");
	
	        scanf("%d",&ch);
	        switch(ch)
	        {
	        	case 1 : insert();
	        	break;
	        	case 2 : preorder(root);
	        	break;
	        	case 3 : postorder(root);
	        	break;
	        	case 4 : inorder(root);
	        	break;
	        	default : printf("enter valid number! \n");
	        	         
			}
	}
	return 0;
	
}

