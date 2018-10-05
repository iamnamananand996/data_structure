#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create(void);
void display(void);
void insert(void);
void delet(void);

int a[100];
int no=0;

void create(void)
{
	int i,no;
	printf("enter size of array");
	scanf("%d",&no);
	printf("enter elements");
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
}

void display(void)
{
	int i,no; 
	if(no==0)
	{
		printf("list is empty");
		return;
	}
	printf("array elements are");
	printf("index  :  \t value ");
	
	for(i=0;i<no;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}


void insert(void)
{
	int element,p,count;
	if(no == 0)
	{
		printf("list is empty");
		return;
		
	}
	
	display();
	printf("enter valid position");
	scanf("%d",&p);
	if((p<=0) || (p>no))
	{
		printf("invalid position");
		return;
	}
	printf("enter element to insert");
	scanf("%d",&element);
	count = no;
	while(count >= p)
	{
		a[count+1] = a[count];
		count--;
		
	}
	no++;
	printf("intered succed");
}



void delet(void)
{
	int element,p,i;
	if(no == 0)
	{
		printf("list empaty");
		return;
	}
	display();
	printf("enter valid position");
	scanf("%d",&p);
	
	if((p<=0) || (p>no))
	{
		printf("invalid position");
		return;
	}
	printf("deleted elements : %d",a[p]);
	
	for(i=p;i<no;i++)
	{
		a[i] = a[i+1];
	}
	no--;
}




int main()
{
	int ch;
	printf("Array demo\n");
	printf("1.creat array\n");
	printf("2.display array\n");
	printf("3.insert array\n");
	printf("4.delete \n");
	printf("5.exit\n\n");
	printf("enter choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			create();
			break;
			
		case 2:
			display();
			break;
			
			
		case 3:
			insert();
			break;
			
			
		case 4:
		delet();
		break;
		
		
		case 5: 
		return 0;
		
		default : printf("invalid option");	
	}
	getch();
	return 0;

	
}
