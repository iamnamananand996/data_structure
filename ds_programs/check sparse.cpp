#include<stdio.h>
#include<conio.h>
int main()
{
	static int a[10][10];
	int i,j,m,n;
	int count = 0;
	printf("enter the order of matrrix");
	scanf("%d%d",&m,&n);
	printf("enter the matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				count++;
			}
		}
	}
	printf("entered matrix is");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	if(count > ((m*n)/2))
	{
		printf("given matrix is saprase matrix");
	}
	else
	{
		printf("given matrix is not sparase matrix");
	}
	getch();
	return 0;
}
