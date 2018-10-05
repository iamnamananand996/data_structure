#include<stdio.h>
#include<conio.h>

void c(int *a);

void c(int *a)
{
	int i;
	i=a;
	 printf("%d\n",i);
	 //printf("%d\n",*a);
	 //printf("%d",&a);
	//return a;
}

int main()
{
	int s,*a,z;
	printf("enter no : ");
	scanf("%d",&s);
	a = s;
    c(&a);
	 printf("%d",a);
	
//	printf("%d\n",a);
//	printf("%d\n",&a);
//	printf("%d\n",*a);
	getch();
	return 0;
	
}
