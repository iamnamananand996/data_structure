#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int *memory(int n)
{
	int *temp;
	temp = (int*)malloc(n*sizeof(int));
	if(temp == NULL)
	{
		printf("erron malloc is failed to allocate memory");
		getch();
		exit(0);
	}
	printf("allocation secced");
	return temp;
}

int *rememory(int *ptr, int n)
{
	int *temp;
	temp = (int*)realloc(ptr,n*sizeof(int));
	if(temp == NULL)
	{
		printf("alloction not secced");
		getch();
		exit(0);
	}
	printf("allocation suceed");
	return temp;
}


int *readelement(int *array, int no)
{
	int i;
	array = memory(no);
	printf("enter the elements one by one");
	for(i=0;i<no;++i)
	{
		scanf("%d",(array+i));
		printf("\n");
	}
	printf("elements are succesfully entered");
	return array;
}


void display(int *array,int no)
{
	int i;
	
	if(no==0)
	{
		printf("list is empty");
		return;
	}
	printf("the elements are");
	printf("index : value  ");
	
	for(i=0;i<no;i++)
	{
		printf("%d \t %d \n",i+1,array[i]);
		
	}
	printf("\n");
 } 
 
 
 int *insert(int *array,int *no,int element,int p)
 {
 	int count;
 	array = rememory(array,(*no+1));
 	count =*no-1;
 	while(count>=p)
 	{
 		array[count+1] = array[count];
 		count--;
	 }
	 array[p] = element;
	 *no = *no+1;
	 printf("item inserted");
	 return array;
 }
 
 int *delet(int *array, int *no,int p)
 {
 	int i;
 	printf("deleted element: %d ",array[p]);
 	if(*no == 1)
 	{
 		*no = 0;
 		free(array);
 		return NULL;
	 }
	 for(i=p;i<*no;i++)
	 {
	 	array[i] = array[i+1];
	 }
	 
	 array = rememory(array,(*no-1));
	 *no = *no-1;
	 return array;
 }
 
 
 int main()
 {
 	int *array;
 	int no,element,p;
 	int ch;
 	array =NULL;
 	do
 	{
 		printf("\n\t\t Array Demeostration\n\n");
 		printf("\n\t\t 1.Create array\n\n");
 		printf("\n\t\t2.Display array\n\n");
 		printf("\n\t\t 3.Insert Element\n\t\t");
 		printf("\n\t\t4.Delete\n");
 		printf("\n\t\t5.Exit : ");
 		printf("\n\n\t\tEnter choice : ");
 		scanf("%d",&ch);
 		
 		switch(ch)
 		{
 			case 1: if(!array)
 			{
 				printf("enter the size of aaray");
 				scanf("%d",&no);
 				array = readelement(array,no);
			 }
			 else
			 {
			 	printf("list already exist");
			 }
			 break;
			 
		 case 2: display(array,no);
		 break;
		 
		 case 3: if(!array)
		 {
		 	printf("insufficent momory");
		 	printf("try option 1 acclocate memory");
		 }
		 else
		 {
		 	display(array,no);
		 	printf("enter valid position");
		 	scanf("%d",&p);
		 	
		 	if((p<0)|| (p>=no))
		 	{
		 		printf("invalid position");
			 }
			 else
			 {
			 	printf("enter the element to insert");
			 	scanf("%d",&element);
			 	array = insert(array,&no,element,p);
			 }
		}
			 break;
		 
		 case 4: if(!array)
		 {
		 	printf("insuficiant memory");
		 	printf("try option 1 to allocate memory");
		 }
		 else
		 {
		 	display(array,no);
		 	printf("enter the valid position : ");
		 	scanf("%d",&p);
		 	if((p<0)||(p>=no))
		 	{
		 		printf("invalid position");
			 }
			 else
			 {
			 	array = delet(array,&no,p);
			 }
		 }
		 break;
		 
	case 5: return 0;
	
	default: printf("invalid option");
 }
 fflush(stdin);
 getch();
}while(1);
}
