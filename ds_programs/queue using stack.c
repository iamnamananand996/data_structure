/* Program to implement a queue using two stacks */
#include<stdio.h>
#include<stdlib.h>
 
/* structure of a stack node */
struct sNode
{
    int data;
    struct sNode *next;
};
 
/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data);
 
/* Function to pop an item from stack*/
int pop(struct sNode** top_ref);
 
/* structure of queue having two stacks */
struct queue
{
    struct sNode *stack1;
    struct sNode *stack2;
};
 
/* Function to enqueue an item to queue */
void enQueue(struct queue *q, int x)
{
    push(&q->stack1, x);
}
 
/* Function to dequeue an item from queue */
int deQueue(struct queue *q)
{
    int x;
    /* If both stacks are empty then error */
    if(q->stack1 == NULL && q->stack2 == NULL)
    {
        printf("Q is empty");
        getchar();
        exit(0);
    }
 
/* Move elements from satck1 to stack 2 only if
stack2 is empty */
if(q->stack2 == NULL)
{
    while(q->stack1 != NULL)
    {
        x = pop(&q->stack1);
        push(&q->stack2, x);
         
    }
}
 
x = pop(&q->stack2);
return x;
}
 
/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data)
{
    /* allocate node */
    int i;
    struct sNode* new_node =
        (struct sNode*) malloc(sizeof(struct sNode));
        if(new_node == NULL)
        {
            printf("Stack overflow \n");
            getchar();
            exit(0);
             
        }
 
/* put in the data */
new_node->data = new_data;
 
/* link the old list off the new node */
new_node->next = (*top_ref);
 
/* move the head to point to the new node */
(*top_ref) = new_node;
//i++;
//return i;
}
 
/* Function to pop an item from stack*/
int pop(struct sNode** top_ref)
{
    int res,i=0;
    struct sNode *top;
     
    /*If stack is empty then error */
    if(*top_ref == NULL)
    {
        printf("Stack overflow \n");
        getchar();
        exit(0);
         
    }
    else
    {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
         
    }
    //i++;
    //return i;
}

int display(struct queue *q)
{
	if(q->stack1 == NULL && q->stack2 == NULL)
	{
		printf("both stach is empaty");
		return ;
	}
	else if(q->stack2 == NULL)
	{
		printf("stack 2 is empaty");
	    return	(q->stack1->next);
	 
	}
	else
	{
		printf("stack1 and stack 2 %d both have some value %d",q->stack1->next,q->stack2->next);
		return;
	}
	
	
}
 
/* Driver function to test anove functions */
int main()
{
    /* Create a queue with items 1 2 3*/
    int ch,x;
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->stack1 = NULL;
    q->stack2 = NULL;
   /*enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
     
    /* Dequeue items 
    printf("%d ", deQueue(q));
    printf("%d ", deQueue(q));
    printf("%d ", deQueue(q));
    printf("%d",display(q));
 */
 while(1)
 {
 
      printf("queue using 2 stack\n\n");
      printf("1.insert\n2.delete\n3.display\n4.exit\n\n");
      printf("enter ur choice : ");
      scanf("%d",&ch);
      
      switch(ch)
      {
      	case 1: printf("enter the element : ");
      	scanf("%d",&x);
      	 enQueue(q, x);
      	 break;
      	 
      	 case 2: 
      	 	printf("poped item  : %d",deQueue(q));
      	 	break;
      	 	
      	 case 3:printf("%d",display(q));
		   break;
		   
		   case 4: exit(0);
		   
		   default : printf("invalid input ");
		   	
	  }
 
 }
 
 
 
 
 
 
getchar();
return 0;
}
