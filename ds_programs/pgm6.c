#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int front = 0;
int rear = 0;
int queue[100];
int size;

void full()
{
	if(front)
	 rear = front -1;
	 else 
	 rear = size -1;
}

void empty()
{
	rear = front = 0;
}

void insert(int item)
{
	rear = (rear + 1) % size;
	if(rear == front)
	{
	
	  full();
	  printf("queue is full");
	  return;
    }
	 
	 queue[rear] = item;
}

void del()
{
	if(rear == front)
	   {
	   	empty();
	   	printf("queue is empty");
	   	return;
	   }
	   
	   front = (front + 1) % size;
	   
	   printf("%d is deleted ", queue[front]);
}

void display()
{
	int i;
	if(rear == front )
	{
	
	  printf("queuue is empty");
	  return;
    }
	  
	  i = (front +1)%size;
	  
	  while(i != rear)
	  {
	  	printf("%d \n ",queue[i]);
	  	i = (i+1)%size;
	  }
	  printf("%d",queue[rear]);
}


int main()
{
	int ch;
	int item;
	printf("enter the size of queue : ");
	scanf("%d",&size);
	while(1)
	{
		printf("1.insert \n 2.delete\n 3.display\n 4. exit ");
		printf("enter  ur choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("enter the element want to insert : ");
			       scanf("%d",&item); 
			       insert(item);
			       break;
			       
			case 2: del();
			break;
			case 3: display();
			        break;
		   
		   
		    case 4: exit(0);
			
			default : printf("invalid input ");       
		}
	}
	
	getch();
	return 0;
}
