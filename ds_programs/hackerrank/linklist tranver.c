#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct linklist
{
	int data;
	struct linklist *link;
	
};

struct linklist *read(struct linklist *start,int item)
{
	struct linklist *temp;
	temp = (struct linklist*)malloc(sizeof(struct linklist));
	temp->data = item;
	temp->link =NULL;
	
if(start == NULL)
     {
	 
    start = temp;
}
    temp = start;
    while(temp->link != NULL)
    {
    	temp = temp->link;     
	}
    
    start = temp;
    
    return start;
}

void print(struct linklist *start)
{
	struct linklist *temp;
//	temp = (struct linklist*)malloc(sizeof(struct linklist));
	
	temp = start;
	while(temp != NULL)
	{
		
		printf("%d     ",temp->data);
		temp =temp->link;
	}
}

int main(void)
{
	struct linklist *start = NULL;
	int ch,elem;
	while(1)
	{
		printf("1.insert \n\n2.display \n\nexit");
		printf("enter the choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("enter t5he element want to insert : ");
			scanf("%d",&elem);
			start= read(start,elem);
			break;
			
			case 2: print(start);
			break;
			
			case 3: exit(0);
					}
		
		
	}
	getch();
	return 0;
}
