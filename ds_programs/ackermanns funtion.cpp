#include<stdio.h>
#include<conio.h>

int AF(int m,int n)
{
	if(m==0)
	{
		
		n+1;
	}
	if(m>0&&n==0)
	{
	//	AF(m,0);
		AF(m-1,1);
		
	}
	if(m>0,n>0)
		AF(m-1,AF(m,n-1));
	
	printf("%d",n);
	return n;
}

int main()
{
	int x;
	x=AF(1,3);
	printf("\n\n%d",x);
	getch();
	return 0;
}
