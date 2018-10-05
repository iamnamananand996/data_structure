#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
	char info;
	struct Node *left; //= NULL;
	struct Node*right; //= NULL;
	
};


int toInt(char s[])
{
    int num = 0;
    int i;
    for ( i=0; i<strlen(s);  i++)
        num = num*10 + ((s[i])-48);
    return num;
}



int eval(struct Node *root)
{
	int l_val;
	int r_val;
    // empty tree
    if (!root)
        return 0;
 
    // leaf node i.e, an integer
    if (!root->left && !root->right)
        return toInt(root->info);
 
    // Evaluate left subtree
     l_val = eval(root->left);
 
    // Evaluate right subtree
    r_val = eval(root->right);
 
    // Check which operator to apply
    if (root->info=="+")
        return l_val+r_val;
 
    if (root->info=="-")
        return l_val-r_val;
 
    if (root->info=="*")
        return l_val*r_val;
 
    return l_val/r_val;
}


struct node *newNode(char item)
{
    struct Node *temp =  (struct Node *)malloc(sizeof(struct Node));
    temp->info = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node *insert(struct Node *node,char key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (toInt(key) < toInt(node->info))
        node->left  = insert(node->left, key);
    else if (toInt(key)  > toInt(node->info))
        node->right = insert(node->right, key);   
 
    /* return the (unchanged) node pointer */
    return node;
}


int main()
{
	struct Node *root = NULL;
	
	root = insert(root,"+");
	
	        insert(root,"*");
	        insert(root,"5");
	        insert(root,"4");
	        insert(root,"-");
	        insert(root,"100");
	        insert(root,"20");
	        
	        eval(root);
	        
	        getch();
	        return 0;
	    
	        
}
