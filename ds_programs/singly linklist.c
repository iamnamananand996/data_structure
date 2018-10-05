#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
	
};

struct node *START = NULL;
struct node *create()
{
	struct node *n;
	n = (struct node*)malloc (sizeof(struct node));
	return n;
}

void insert()
{
	struct node *temp,*t;
	temp = create();
	printf("enter the no. :");
	scanf("%d",&temp->info);
	temp->link = NULL;
	
	
	if(START == NULL)
	{
		START = temp;
	}
	else
	{
		t= START;
		while(t->link != NULL)
		{
			t = t->link;
		}
		t->link = temp;
	}
}

void del()
{
	struct node *r;
	
	if(START == NULL)
	{
		printf("list is empty");
		
	}
	else
	{
		r = START;
		START = START->link;
		free(r);
	}
}


void viewlist()
{
	struct node *t;
	if(START == NULL)
	{
		printf("list is empty");
		
	}
	else
	{
		t = START;
		while(t != NULL)
		{
			printf("%d\n",t->info);
			t = t->link;
		}
	}
}


void serch(int x)
{
	int i=0;
	struct node *t;
	if(START == NULL)
	{
		printf("list is empty");
		
	}
	else
	{
		t = START;
		while(t != NULL)
		{
			if(x == t->info)
			printf("%d is at  position : %d\n\n",t->info,i+1);
			
			t = t->link;
			i++;
		}
	}
}

int main()
{
	int ch,x;
	while(1)
	{
	
	printf("1.insert \n 2.delete \n 3.display \n 4.serchimg \n 5.exit\n");
	printf("enter ur choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		insert();
		break;
			
		case 2:
		del();
		break;
				
		case 3:
		viewlist();
		break;
		
		case 4: printf("enter the no. want to serch :");
		        scanf("%d",&x);
		        serch(x);
		        break;
					
		case 5:
		exit(0);
		
		default : printf("invalid input");
						
						
	}
  }
  getch();
  return 0;
}
