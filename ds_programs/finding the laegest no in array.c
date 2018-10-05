#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],temp,i,len = 0;
	printf("enter elemnet");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	temp = a[0];
	for(i=0;i<10;i++)
	{
		if(a[i] > temp)
		    temp = a[i];
	}
	while(temp > 0)
	{
		len = len +1;
		temp  = temp /10;
	}
	
	printf("%d is big",len);
	
	getch();
	return 0;
}
