#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
	
};

/*void insert(struct tree *root,int data)
{
	struct tree *temp;
	struct tree *n = (struct tree*)malloc(sizeof(struct tree));
	
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	
	if(root == NULL)
	 {
	 	root = n;
	 }
	 
	 temp = root;
	 
	while(temp != NULL)
	{
	  
	if(temp->data >data)
	{
		if(temp->left == NULL)
		{
			temp->left = n;
			printf("done");
		}
		temp = temp->left;
		
	}
	else
	{
		if(temp->data < data)
		{
			if(temp->right == NULL)
			{
				temp->right = n;
				printf("done");
			}
		}
		temp = temp->right;
	}
    }
}

struct tree* insert(struct tree *root,int data)
{
		
	if(root == NULL)
	{
	    struct tree *temp = (struct tree*)malloc(sizeof(struct tree));
		temp->data = data;
		temp->left = NULL;
		temp->left =  NULL;
		
		return temp;
	}
	
	if(root->data > data)
	{
		root->left = insert(root->left,data);
	}
	if(root->data < data)
	{
		root->right = insert(root->right,data);
	}
	
	return root;
}

void display(struct tree *root)
{
	if(root)
	{
		printf("%d   ",root->data);
		display(root->left);
		display(root->right);
	}
} */


struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// A utility function to do inorder traversal of BST
void diaplay(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
  
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->data)
        node->left  = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);   
 
    /* return the (unchanged) node pointer */
    return node;
}



int main()
{
	int ch,elem;
	struct node *root ;
	root = NULL;
	root = (root,40);
	while(1)
{
	printf("1.insert\n\n2.display\n\nexit");
	printf("\n\nenter u choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("enter the element want to insert : ");
		         scanf("%d",&elem);
		         insert(root,elem);
		         break;
		         
		         case 2: display(root);
		                  break;
		                  
		                  case 3: exit(0);
	}
}
getch();
return 0;
}
