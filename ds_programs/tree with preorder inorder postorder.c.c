#include<stdio.h>
#include<stdlib.h>
  
struct node
{
    int key;
    struct node *left, *right;
};
  
// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
  
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
 
    /* return the (unchanged) node pointer */
    return node;
}

void preorder(struct node *root)
  {
  	if(root)
  	{
  	     printf("%d\n",root->key);
		  preorder(root->left);
		  preorder(root->right);
	}
  }
  
  void postorder(struct node *root)
  {
  	if(root)
  	{
  		postorder(root->left);
  		postorder(root->right);
  		printf("%d\n",root->key);
	  }
  }
  
  
/*  struct node *del(struct node *root,int data)
  {
  	 struct node *temp;
  	 if(root == NULL)
  	 {
  	 	printf("vo such element is their ");
  	 	
	   }
	   else if(data < root->key)
	          root->right = del(root->right , data);
	          
	          else 
	          {
	          	if(root->left && root->right)
	          	{
	          		temp = findmax(root->left);
	          		root->key = temp->key;
	          		root->left = del(root->left,root->key);
	          		
				  }
				  else
				  {
				  	temp = root;
				  	if(root->left == NULL)
				  	     root = root->right;
				  	     
				  	     if(root->right == NULL)
				  	        root = root->left;
				  	        
				  	        free(temp);
				  }
			  }
			  return(root);
  }*/
// Driver Program to test above functions
int main()
{  
int ch,element;
struct node *root = NULL;
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
  
    // print inoder traversal of the BST
    inorder(root); */
     root = insert(root,40);
    while(1)
{
	

     printf("1.insert\n2.preorder\n3.preorder\n4.postoder \n5.exit");
     printf("\n\nenter ur choice : ");
     scanf("%d",&ch);
     
     switch(ch)
     {
     	case 1: printf("enter the element want to enter :");
     	        scanf("%d",&element);
		         insert(root,element);
     	         break;
     	         
        case 2: inorder(root);
		        break;
         case 4: exit(0);
         
         case 3 : preorder(root);
                   break;
                   
          case 5:postorder(root);
		            break;         
		 
		 default : printf("invalid option");					         
	 }
}
  
  getch();
    return 0;
}
