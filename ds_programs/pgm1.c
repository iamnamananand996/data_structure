#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int array[100];
int size;
int i;

void create()
{
	printf("enter the size of array :");
	scanf("%d",&size);
	
	printf("\n\nenter the element want to insert : ");
	for( i= 0;i<size;i++)
	{
		printf("enter %d element :",i+1);
		scanf("%d",&array[i]);
	}
}

void display()
{
	for(i =0;i<size;i++)
	{
		printf("\n\n%d element ",i+1);
		printf("%d",array[i]);
	}
}

void insert()
{
	int pos,element,count; 
	
	printf("enter the position want to insert the elemnt :");
	scanf("%d",&pos);
	printf("\n\nenter the element :");
	scanf("%d",&element);
	
	count = size;
	while(count >=pos)
	{
		array[count + 1] = array[count];
		count--;
	}
	array[pos] = element;
	size++;
	printf("insetion succces ");
}

void del()
{
	int pos;
	printf("enter the postion want to delete");
	scanf("%d",&pos);
	
	for(i=pos;i<size;i++)
	{
		array[i] = array[i+1];
	}
	size--;
	printf("deleled");
}


int main()
{
	int ch;
	
	while(1)
	{
		printf("1.create \n 2.insert \n 3.display \n 4.delete \n5.exit\n");
		printf("enter the choice :");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: create();
			         break;
			         
			case 2: insert();
			         break;
			
			case 3: display();
			         break;
					 
			case 4: del();
			        break;		 
			case 5 : exit(0);
			
			default : printf("invalid input ");		 		          
		}
	}
	getch();
	return 0;
}
