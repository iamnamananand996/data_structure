#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 int i;
 
void *insert(int *array,int size,int element, int pos)
{
	array = (int*)realloc(array, (size+1) * sizeof(int));
	int count = size-1;
	
	while(count >= pos)
	{
		array[count + 1]  = array[count];
		count--;
	}
	array[pos] = element;
	printf("inserted");
}

void *del(int *array, int pos,int size)
{
	for(i=pos;i<size;i++)
	{
		array[i] = array[i+1];
		
	}
	array = (int*)realloc(array, (size-1) * sizeof(int));
	size--;
	printf("deleted");
}

void *display(int *array,int size)
{
	for(i=0;i<size;i++)
	{
		printf("element [%d]  = %d",i+1,array[i]);
	}
}

void *read(int *array,int size)
{
	array = (int*)malloc(size * sizeof(int));
	
	printf("enter the element one by one : ");
	
	for(i =0;i<size;i++)
	{
		printf("enter element %d : ",i+1);
		scanf("%d",(array + i));
	}
}

int main()
{
	int size;
	
	printf("enter the size of array : ");
	scanf("%d",&size);
	
	while(1)
	{
		printf("");
	}
}
