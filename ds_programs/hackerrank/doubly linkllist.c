#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct list
{
	int data;
	struct list *prev;
	struct list *next;
	
};

void insertstart(struct list **start,int item)
{
	struct list *temp = (struct list*)malloc(sizeof(struct list));
	
	temp->data = item;
	temp->prev = NULL;
	temp->next = *start;
	*start = temp;
}

int del(struct list **start)
{
	int item;
	struct list *temp;
	item = temp->data;
	if(*start == NULL)
	   return ;
	   
	   temp = *start;
	 *start = (*start)->next;
	   (*start)->prev = NULL;
	 
	 //temp = temp->next;
	 //temp->prev = NULL;
	   
	   free(temp);
	   
	   return item;
}

void dellast(struct list **start)
{
	struct list *temp;
	if(*start == NULL)
	   return;
	   
	   temp = *start;
	   while(temp->next != NULL)
	        temp = temp->next;
	        
	        if((*start)->next == NULL)
	            *start = NULL;
	        temp->prev->next =NULL;
			
			free(temp);
			    
}

void insertlast(struct list **start,int item)
{
	struct list *temp = (struct list*)malloc(sizeof(struct list));
	struct list *t = (struct list*)malloc(sizeof(struct list));
	temp->data = item;
	//temp->prev = NULL;
	temp->next = NULL;
	
	if(*start == NULL)
	{
	  temp->prev = NULL; 
	  *start = temp;
    }
    
    else
    {
    	t = *start;
    	while(t->next != NULL)
    	     t = t->next;
    	     
    	     
    	     temp->prev = t;
    	     t->prev = temp;
    	
	}
	  
	
	  
}


void print(struct list **start)
{
	struct list *temp;
	temp = *start;
	while(temp != NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->next;
	}
}

void insertAt(struct list *ptr,int item)
{
	struct list *temp = (struct list*)malloc(sizeof(struct list));
	
	temp->data = item;
	temp->prev = ptr;
	temp->next = ptr->next;
	
}

void delAt(struct list *ptr)
{
	struct list *temp;
	ptr->next->prev = ptr->prev;
	ptr->prev->next = ptr->next;
	
	free(ptr);
	
}

struct list* serch(struct list **start,int item)
{
	struct list *temp;
	
	temp = *start;
	while(temp != NULL)
	{
		if(temp->data == item)
		{
			return(temp);
		
		}
			temp = temp->next;
	}
}



int main()
{
	struct list *start = NULL;
	int ch,elem,x;
	struct list *ptr;
	
	insertstart(&start,10);
	insertstart(&start,70);
	insertstart(&start,20);
	insertstart(&start,30);
	insertstart(&start,50);
	
	print(&start);
	ptr = serch(&start,20);
	insertAt(ptr,254);
	print(&start);
	//insertAt()
	
/*	while(1)
	{
		printf("1.insert\n\n2.insertlast\n\n3.display\n\n4.exit\n\n 5.ddelet ");
		printf("\n\nenter the choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("enter t5he element want to insert : ");
			scanf("%d",&elem);
			insertstart(&start,elem);
			break;
			
			case 2:printf("enter the element : ");
			scanf("%d",&elem);
			insertlast(&start,elem);
			break;
			
			case 3: print(&start);
			break;
			
			case 5: x = del(&start);
			       printf("deleted item  %d",x);
			       break;
			       
			       
			case 6: dellast(&start);
			        break;
			        
			        
			case 4: exit(0);
		}
		
	} 
	*/
	getch();
	return 0;
}


