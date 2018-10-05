#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
	float coff;
	int exp;
	 struct node *next;
	 
};

struct poly
{
	float coff;
	int exp;
};

void read(struct node **s,float x,int y)
{
	struct node *temp;
	temp = *s;
	
	if(*s == NULL)
	{
		*s = (struct node*)malloc(sizeof(struct node));
		temp = *s;
		
	}
	else 
	{
		while(temp->next != NULL)
		temp = temp->next;
		
		temp->next = (struct node*)malloc(sizeof(struct node));
		temp = temp->next;
		
	}
	temp->coff = x;
	temp->exp = y;
	temp->next = NULL;
}


void display(struct node *s)
{
	while(s != NULL)
	{
		printf("%.1fx^%d : ",s->coff,s->exp);
		s = s->next;
	}
	printf("\t");
}

void add(struct node *x,struct node *y,struct node **s)
{
	struct node *z;
	
	if(x == NULL && y == NULL)
	    return;
	
	while(x != NULL && y !=NULL)
	{
		if(*s == NULL)
		{
			*s = (struct node*) malloc(sizeof(struct node));
			z = *s;
		}
		else
		{
			z->next = (struct node*)malloc(sizeof(struct node));
			z = z->next;
		}
		
		if(x->exp < y->exp)
		{
			z->coff = y->coff;
			z->exp = y->exp;
			y = y->next;
			
		}
		else 
		{
			if(x->exp > y->exp)
			{
				z->coff = x->coff;
				z->exp = x->exp;
				x = x->next;
			}
			else
			{
				if(x->exp == y->exp)
				{
					z->coff = x->coff + y->coff;
					z->exp = x->exp;
					x = x->next;
					y = y->next;
				}
			}
		}
	}
	
	while( x != NULL)
	{
		if(*s == NULL)
		{
			*s = (struct node*)malloc(sizeof(struct node));
			z = *s;
		}
		else
		{
			z->next = (struct node*)malloc(sizeof(struct node));
			
			z = z->next;
		}
		z->coff = x->coff;
		z->exp = x->exp;
		x = x->next;
	}
	
	while(y != NULL)
	{
		if(*s == NULL)
		{
			*s = (struct node*) malloc(sizeof(struct node));
			z = *s;		
		}
		else
		{
			z->next = (struct node*)malloc(sizeof(struct node));
			z = z->next;
		}
		
		z->coff = y->coff;
		z->exp = y->exp;
		y = y->next;
	}
	
	z->next = NULL;
}

int main(void)
{
	struct node *first,*second,*total;
	struct poly *x;
	struct poly *y;
	int s1,s2,i;
	
	printf("enter the size if 1st plynomial : ");
	scanf("%d",&s1);
	printf("enter the size of 2nd polynimail : ");
	scanf("%d",&s2);
    first= second = total = NULL; 
	       x= (struct poly*)malloc(sizeof(struct poly)*s1);
	        y= (struct poly*)malloc(sizeof(struct poly)*s2);
	
	for(i = 0; i<s1;i++)
	{
		printf("enter poly %d cofff : ",i+1);
		scanf("%f",&x->coff);
		printf("enter %d exp : ",i+1 );
		scanf("%d",&x->exp);
		read(&first,x->coff,x->exp);
		
	}
	display(first);
	
		for(i = 0; i<s2;i++)
	{
		printf("enter poly %d cofff : ",i+1);
		scanf("%f",&y->coff);
		printf("enter %d exp : ",i+1 );
		scanf("%d",&y->exp);
		read(&second,y->coff,y->exp);
		
	}
	display(second);
	
	add(first,second, &total);
	display(total);
	
	getch();
	return 0;
	
	
}
