#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <stdbool.h>

struct Node 
{
    int key;
    struct Node *left, *right;
    bool rightThread;  
};







struct Node *newNode(int item)
{
    struct Node *temp =  (struct Node *)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 


struct Node* insert(struct Node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) 
	return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
 
    /* return the (unchanged) node pointer */
    return node;
}
 
 
 struct Node* leftMost(struct Node *n)
{
    if (n == NULL)
       return NULL;
 
    while (n->left != NULL)
        n = n->left;
 
    return n;
}
// C code to do inorder traversal in a threaded binary tree
void inOrder(struct Node *root)
{
    struct Node *cur;
	cur = leftMost(root);
    while (cur != NULL)
    {
        printf("%d ", cur->key);
 
        // If this node is a thread node, then go to
        // inorder successor
        if (cur->rightThread)
            cur = (struct Node*)cur->rightThread;// = cur->rightThread;
        else // Else go to the leftmost child in right subtree
            cur = leftMost(cur->right);
    }
}



int main()
{  
//int ch,element;
struct Node *root = NULL;



 root = insert(root,1);
 
       insert(root,1);
       insert(root,42);
       insert(root,53);
       insert(root,24);
       insert(root,95);
 
    inOrder(root);
  
  getch();
    return 0;
}
