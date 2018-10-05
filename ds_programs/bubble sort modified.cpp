#include<stdio.h>
#include<conio.h>
void sort(int a[],int n);
int main()
{
	int a[] = {12,34,667,1,345,22};
	int i;
	sort(a,6);
	for(i=0;i<=5;i++)
	{
		printf("%d \n",a[i]);
	}
	getch();
	return 0;
}

void sort(int a[],int n)
{
	int round,i,j,temp,flag;
	for(round=1;round<=n-1;round++)
	{
		flag = 0;
		for(i=0;i<=n-1-round;i++)
		{
			if(a[i]>a[i+1])
			{
				flag = 1;
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
	    }
		if(flag==0)
		{
			printf("round : %d",round);
			return;
		}
	}
}
