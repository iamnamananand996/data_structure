#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//int read(struct term a[],int x[][],int row,int col);

 struct term
{
	int col;
	int row;
	int value;
 }; 
 
 int read(struct term a[],int z[][],int row,int col)
{
	int i,j,count = 0,n=0;//y=0,z=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("p[%d][%d] : ",i,j);
			scanf("%d",&z[i][j]);
			if(z[i][j] != 0)
			{
				count++;
				a[i].row = i;
				
				a[i].col = j;
				
				a[i].value = z[i][j];
				
				printf("%d\t%d\t%d\n\n",i,j,z[i][j]);
				
				n++;//y++;z++;
				
			}
		}
	}
	return(n);
}
 void transpose(struct term a[] ,struct term b[])
 {
 	int i,j,n,currentb;
 	n= a[0].row = a[0].col;
 	b[0].col = a[0].row;
 	b[0].value = n;
 	
 	if(n>0)
 	{
 		currentb = 1;
 		for(i =0;i<a[0].col;i++)
 		{
 			for(j = 1;j<= n;j++)
 			{
 				if(a[j].col == i)
 				{
 					b[currentb].row = a[j].col;
 					b[currentb].col = a[j].row;
 					b[currentb].value = a[j].value;
 					currentb++;
				 }
			 }
		 }
	 }
 }




int main(void)
{
	struct term a[100];
	struct term b[100];
	int z[100][100];
	
	read( a[100],z[100][100],row,col);
	getch();
	retrun 0;
}
