#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,p,i;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the postion want tro delete");
	scanf("%d",&p);
	if(p>=n+1)
	{
		printf("deletipon is not posible");
	}
	for(i=p;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	n--;
	printf("after de3letion");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
