#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>
int size;

struct queue
{
	int rear;
	int front;
	int *array;
	
};

struct queue *create(int size)
{
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	q->array = malloc(size*sizeof(q->array));
	q->front = q->rear = -1;
	return q;
}

void insert(struct queue *q,int x)
{
	q->rear = x;
	q->rear++;
}

void display(struct queue *q)
{
	printf("%d",q->front);
}

int del(struct queue *q)
{
	printf("%d",q->front);
	return(q->front++);
}

int main() {

int elem,ch;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	    printf("enter teh size :");
	    scanf("%d",&size);
	    //struct queue *q;
	    
	    //q= (struct queue*)malloc(sizeof(struct queue));
	    int q = create(size);
	    while(1)
	    {
	    	printf("1.insret \n 2.delete\n 3.display \n 4.exit");
	    	printf("enter ur choice : ");
	    	
	    	scanf("%d",&ch);
	    	
	    	switch(ch)
	    	{
	    		case 1:printf("enter the elem want to inster :");
				        scanf("%d",&elem); 
				       insert(q,elem);
	    		         break;
	    		case 2: del(q);
				          break;
				          
				case 3: display(q);
				         break;
					case 4:exit(0);
					
					default : printf("invalid option");
					
						           
				                      
			}
		}
		getch();
		return 0;
	}
