#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//int read(struct poly *p,int row,int col);
//void print(struct poly *p,int row,int col);

struct poly
{
	int *rows[100];
	int *cols[100];
	int *val[100][100];
	int *value[100];
	
};

int read(struct poly *p,int row,int col)
{
	int i,j,count = 0,x=0;//y=0,z=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("p[%d][%d] : ",i,j);
			scanf("%d",&p->val[i][j]);
			if(p->val[i][j] != 0)
			{
				count++;
				p->rows[i] = i;
				
				p->cols[j] = j;
				
				p->value[i] = p->val[i][j];
				
				printf("%d\t%d\t%d\n\n",p->rows[i],p->cols[j],p->value[x]);
				
				x++;//y++;z++;
				
			}
		}
	}
	return(count);
}
void print(struct poly *p,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d \t",p->val[i][j]);
		}
		printf("\n");
	}
}

 void transpose(struct poly *p,struct poly *a,int count,int col )
 {
 	int temp,i,j;
	 temp = p->value[0];
	 a->rows[0] = p->cols[0];
	 a->value[0] = temp;
	 
	 if(count>0)
	 {
	 	for(i=0;i<col ;i++)
	 	{
	 		for(j=0;j<=count ;j++)
	 		{
	 			if(p->cols[j] == i)
	 			
	 			{
	 				a->rows[i] = p->cols[j];
	 				a->cols[j] = p->rows[i];
	 				a->value[i] = p->value[j];
	 				i++;
	 				j++;
				}
			}
		}
	 }
	 
 }
 


int main()
{
	struct poly *p,*a;
	int row;
	int col;
	int count;
	
	printf("enter value of row and col : ");
	scanf("%d%d",&row,&col);
	
	p = (struct poly*)calloc((row*col),sizeof(struct poly));
	
	printf("enter thje value : ");
	count = read(p,row,col);
	printf("enter elements are  : \n");
	print(p,row,col);
	printf("no of NON zero are : %d",count);
	transpose(p,a,count,col );
	print(a,row,col);
	
	getch();
	return 0;
}
