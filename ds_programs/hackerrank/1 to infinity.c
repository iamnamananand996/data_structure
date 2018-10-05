#include<stdio.h>
#include<conio.h>

int add(int i)
{
	
	//i = i+1;
	
	printf("%d ",i);
	//break;
	
	add(i+1);
	//return i;
}

int main()
{
	int i =1;
	add(i);
	return 0;
}


