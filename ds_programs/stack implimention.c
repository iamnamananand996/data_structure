#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
	
};


struct node* create()
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));
	return(n);
	
}

void push(struct node **s,int item)
{
	
	struct node *n;
	n = create();
	
	if(n != NULL)
	{
	
	n->info = item;
	n->next = *s;
	
	*s = n;
}

}

int peek(struct node **s)
{
	if(*s == NULL)
	{
		printf("stack is empty ");
		return;
	}
	
	else
	{
		return((*s)->info);
	}
}

int pop(struct node **s)
{
	int item;
	struct node *r;
	
	if(*s ==NULL)
	{
		printf("stuck is underflow");
		return;
	}
	else
	{
		item = (*s)->info;
		r = *s;
		*s = r->next;
		free(r);
		return(item);
	}
}

void del(struct node **s)
{
	while((*s) != NULL)
	{
		pop(s);
	}
}

int main(void)
{
	struct node *stack;
	int ch,item,z;
	while(1)
	{
	
	printf("1.push \n2.peek(display)\n3.pop ) \n4.remove whole stack \n5.exit\n");
	printf("\n enter ur choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("enter the no wnat to insert : ");
		        scanf("%d",&item);
		        push(&stack,item);
		        printf("inserted sussefully");
		        break;
		        
		case 2: printf("%d is poped ",peek(&stack));
		         break;
		         
	    case 3: z=pop(&stack);
	             printf("pop succesfully  %d",z);
	             break;
	             
	    case 4: del(&stack);
		         printf("whole stack is removed");
				 break;
				  
		case 5: exit(0);
		
		default : printf("invalid input");
	             
	}
}
getch();
return 0;
}
