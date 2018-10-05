#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct BinaryTreeNode
{
	int info;
	struct BinaryTreeNode *left;
	struct BinaryTreeNode *right;
};

void preOrder(struct BinaryTreeNode *root)

//root =1;
{
	if(root)
	{
		printf("%d",root->info);
		preOrder(root->left);
		preOrder(root->right);
	}
}
 
 
 void insert(struct BinaryTreeNode *root,int data)
{
	struct BinaryTreeNode *par;
	struct BinaryTreeNode *n = malloc(sizeof(struct BinaryTreeNode));
	
	n->left = NULL;
	n->info = data;
	n->right = NULL;
     
	 if(root ==NULL	)
	 {
	 	root = n;
	 	//return (create(data));
	 }
	 else 
	 {
	 	par = root;
	 	while(par != NULL)
	 	{
	 		if(par->info > data)
	 		{
			 
	 		if(par->left == NULL)
	 		   par->left = n;
	 		   
	 		   par = par->left;
	 	    }
		 
		 if(par->info < data)
		 {
		 	if(par->right == NULL)
		 	   par->right = n;
		 	   
		 	   par= par->right;
		 }
	}
 }

}

struct BinaryTreeNode *create(int item)
{
    struct BinaryTreeNode *temp =  (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    temp->info = item;
    temp->left = temp->right = NULL;
    return (temp);
}

int main(void)
{
	struct BinaryTreeNode *n=NULL;
	int ch,element;
//	n =create(5);

while(1)
{
	

     printf("1.insert\n2.preorder\n 3.exit");
     printf("\n\nenter ur choice : ");
     scanf("%d",&ch);
     
     switch(ch)
     {
     	case 1: printf("enter the element want to enter :");
     	        scanf("%d",&element);
		         insert(n,element);
     	         break;
     	         
        case 2: preOrder(n);
		        break;
         case 3: exit(0);
		 
		 default : printf("invalid option");					         
	 }
}
     
	
	//preOrder(n);
	getch();
	return 0;
	
}
