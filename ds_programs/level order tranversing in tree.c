#include<stdio.h>
#include<conio.h>
#include<stdlib.h>         // not done yet

struct node 
{
	int key;
	struct node *left;
	struct node *right;
	struct node *next;
};

struct Queue
{
    struct node *front,*rear;
};


void levelOrder(struct node *root)
{
	struct node *temp;
	struct Queue *Q = (int*)createQueue();
	
	if(!root)
	   return;
	   
	   enQueue(Q,root);
	   
	   while(!isEmpty(Q))
	   {
	   	  temp = (int*)deQueue(Q);
	   	  printf("%d\n",temp->key);
	   	  
	   	  if(temp->left)
	   	     enQueue(Q,temp->left);
	   	     
	   	     if(temp->right)
	   	         enQueue(Q,temp->right);
	   }
	   deleteQueue(Q);
}

//struct node *
int deQueue(struct Queue *q)
{
    // If queue is empty, return NULL.
    if (q->front == NULL)
       return NULL;
 
    // Store previous front and move front one node ahead
    struct node *temp = q->front;
    q->front = q->front->next;
 
    // If front becomes NULL, then change rear also as NULL
    if (q->front == NULL)
       q->rear = NULL;
    return temp;
}


void enQueue(struct Queue *q, int k)
{
    // Create a new LL node
    struct node *temp = newNode(k);
 
    // If queue is empty, then new node is front and rear both
    if (q->rear == NULL)
    {
       q->front = q->rear = temp;
       return;
    }
 
    // Add the new node at the end of queue and change rear
    q->rear->next = temp;
    q->rear = temp;
}



//struct node *
int newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 


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

//struct Queue *
int createQueue()
{
	struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = NULL;
	q->rear = NULL;
	return q;
}



int main()
{  
int ch,element;
struct node *root = NULL;


root = insert(root,40);
    while(1)
{
	

     printf("1.insert\n2.delete\n3.exit");
     printf("\n\nenter ur choice : ");
     scanf("%d",&ch);
     
     switch(ch)
     {
     	case 1: printf("enter the element want to enter :");
     	        scanf("%d",&element);
		         insert(root,element);
     	         break;
     	         
        case 2: levelOrder(root);
		        break;
         case 3: exit(0);
         
         
                   
           
		 
		 default : printf("invalid option");					         
	 }
}
  
  getch();
    return 0;
}
