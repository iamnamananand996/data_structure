#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100


// Java implementation of De-queue using circular
// array
  
// A structure to represent a Deque
typedef struct 
{
    //static final int MAX = 100;
    int  *arr;
    int  front;
    int  rear;
    int  size;
}queue;
     
  /*  public Deque(int size)
    {
        arr = new int[MAX];
        front = -1;
        rear = 0;
        this.size = size;
    }
  
    // Operations on Deque:
    void  insertfront(int key);
    void  insertrear(int key);
    void  deletefront();
    void  deleterear();
    bool  isFull();
    bool  isEmpty();
    int  getFront();
    int  getRear();*/
  
    // Checks whether Deque is full or not.
    
    queue* create(int size)
    {
    	queue *temp;
    	temp = (queue*)malloc(sizeof(queue));
    	temp->size = size;
    	temp->front = -1;
    	temp->rear = -1;
    	temp->arr = (int*)malloc(sizeof(int)*temp->size);
    	
    	return temp;
	}
	
    int isFull(queue *q)
    {
        return ((q->front == 0 && q->rear == q->size-1)||
            q->front == q->rear+1);
    }
  
    // Checks whether Deque is empty or not.
    int isEmpty (queue *q)
    {
        return (q->front == -1);
    }
  
    // Inserts an element at front
    void insertfront(int key,queue *q)
    {
        // check whether Deque if  full or not
        if (isFull(q))
        {
            printf("Overflow"); 
            return;
        }
  
        // If queue is initially empty
        if (q->front == -1)
        {
            q->front = 0;
            q->rear = 0;
        }
         
        // front is at first position of queue
        else if (q->front == 0)
            q->front = q->size - 1 ;
  
        else // decrement front end by '1'
            q->front = q->front-1;
  
        // insert current element into Deque
        q->arr[q->front] = key ;
    }
  
    // function to inset element at rear end
    // of Deque.
    void insertrear(int key,queue *q)
    {
        if (isFull(q))
        {
            printf(" Overflow ");
            return;
        }
  
        // If queue is initially empty
        if (q->front == -1)
        {
            q->front = 0;
            q->rear = 0;
        }
  
        // rear is at last position of queue
        else if (q->rear == q->size-1)
            q->rear = 0;
  
        // increment rear end by '1'
        else
            q->rear = q->rear+1;
         
        // insert current element into Deque
        q->arr[q->rear] = key ;
    }
  
    // Deletes element at front end of Deque
    void deletefront(queue *q)
    {
        // check whether Deque is empty or not
        if (isEmpty(q))
        {
            printf("Queue Underflow\n");
            return ;
        }
  
        // Deque has only one element
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
            // back to initial position
            if (q->front == q->size -1)
                q->front = 0;
  
            else // increment front by '1' to remove current
                // front value from Deque
                q->front = q->front+1;
    }
  
    // Delete element at rear end of Deque
    void deleterear(queue *q)
    {
        if (isEmpty(q))
        {
            printf(" Underflow");
            return ;
        }
  
        // Deque has only one element
        if (q->front == q->rear)
        {
            q->front = -1;
            q->front = -1;
        }
        else if (q->rear == 0)
            q->rear = q->size-1;
        else
            q->rear = q->rear-1;
    }
  
    // Returns front element of Deque
    int getFront(queue *q)
    {
        // check whether Deque is empty or not
        if (isEmpty(q))
        {
            printf(" Underflow");
            return -1 ;
        }
        return q->arr[q->front];
    }
  
    // function return rear element of Deque
    int getRear(queue *q)
    {
        // check whether Deque is empty or not
        if(isEmpty(q) || q->rear < 0)
        {
            printf(" Underflow\n");
            return -1 ;
        }
        return q->arr[q->rear];
    }
  
    // Driver program to test above function
 int main(void)
 {
 	queue *q;
 	int size,ch,key;
 	
 	printf("enter size of queue :");
 	scanf("%d",&size);
 	
 	q = create(size);
 
 	while(1)
 	{	
 	printf("1.insert from rear \n2. insert from front \n 3.delete from rear \n 4. delete from front \n 5. dispaly status ");
 	printf("\n6.exit\n");
 	printf("enter ur choice  : ");
 	scanf("%d",&ch);
 
	 
 	switch(ch)
 	{
 		case 1: printf("enter element : ");
 		scanf("%d",&key);
 		insertrear(key,q);
 		break;
 		
 		case 2: printf("enter element : ");
 		scanf("%d",&key);
 		insertfront(key,q);
 		break;
 		
 		case 3: 
 		     deleterear(q);
 		     printf("deleted from rear");
 		     
 		break;
 		
 			case 4: 
 		     deletefront(q);
 		     printf("deleted from front");
 		     
 		break;
 		
 		case 5: 
 		     
 		     printf("front : %d   rear : %d",getFront(q),getRear(q));
 		     
 		break;
 		
 		case 6: exit(0);
 		
 		default: printf("invalid input ");
 	
 		
 		
	 }
	 
}
 	//q = (queue*)calloc(q->size,sizeof(queue));
 	
 /*
 	insertrear(10,q);
 	deleterear(q);
 	
 	
 	insertrear(10,q);
 	insertrear(10,q);
 	insertrear(10,q);
 	insertrear(10,q);
 	insertrear(10,q);
 	
 	printf("after deletion  : %d %d",));
 	*/
 	
 	
 	getch();
 	return 0;
 }
