#include<stdio.h>
#include<conio.h>
int zero();
int successor(int x);

int main()
{
	int x,y,z;
	 y=zero();
	 printf("%d",y);
	printf("enter the vlaue of x");
    scanf("%d",&x);
	z=successor(x);
	printf("%d",z);
	getch();
	return 0;
}
int zero()
{
   int a= 0;
   return a;
 } 
int successor(int x)
{
  if(x==10) return x;
else
return x+1;
}
