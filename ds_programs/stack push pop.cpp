#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct arrstack
{
	int top;
	int capacity;
	char *array;
};

struct arrstack* create(int cap)
{
	struct arrstack *stack;
	stack = (struct arrstack*)malloc(sizeof(struct arrstack));
	stack->capacity=cap;
	stack->top = -1;
	stack->array = (char*)malloc(sizeof(stack->capacity));
	return(stack);
}

isfull(struct arrstack *stack)
{
	if(stack->top == stack->capacity-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

isempty(struct arrstack *stack)
{
	if(stack->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(struct arrstack *stack,char item)
{
	if(!isfull(stack))
	{
		stack->top++;
		stack->array[stack->top] = item;
	}
}

char pop(struct arrstack *stack)
{
	int item;
	if(!isempty(stack))
	{
		item = stack->array[stack->top] ;
		stack->top--;
		return (item);
	}
	return(-1);
}
// something went worng here recheck
void display(struct arrstack *stack)  
{
	int i;
	if(isempty(stack))
	{
		printf("stack full");
		return;
	}
	printf("\n elements are \n ");
	for(i=stack->top;i>=0;i--)
	{
		
		printf("%c \n",stack[i]);
		
	}
}



int main()
{
	struct arrstack *stack;
	stack = create(6);

	int cap,choice;
    char item;
	while(1)
	{
	
	printf("STACK IMPLEMENTATION \n");
	printf(" 1.push\n 2. pop\n 3.display \n 4. exit \n \n  enter ur choise : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("enter item : ");
		fflush(stdin);
		        scanf("%c",&item);
		push(stack,item);
		break;
		
		case 2:  item = pop(stack); 
		 if(item == -1) 
		printf("stack is empty\n\n");
		else
		{
		printf("item poped is %c\n \n",item);
	    }
	    break;
	    
	    case 3:
	    	printf("stack elements are");
	    	display(stack);
	    	break;
	    case 4: return 0;
	    break;
	    
	    default : printf("invalid choice");
	}
}                                                                                                                                                               
	getch();
	return 0;
}
