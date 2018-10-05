# include <stdio.h>
# include <conio.h>

int raed(int mat[][],int col,int row);

int read(int mat[][],int row,int col)
{
	int i,j,count;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		if(mat[i][j] == 0)
		count++;
	}
}
int main()
{
int mat[10][10] ;
int i, j, row, col ;

printf("Enter the order of the matrix : ") ;
scanf("%d %d", &row, &col) ;
printf("\nEnter the elements of the matrix : \n\n") ;
for(i = 0 ; i < row ; i++)
  for(j = 0 ; j < col ; j++)
    scanf("%d", &mat[i][j]) ;
printf("\n\nThe elements in the matrix are: \n\n") ;

for(i = 0 ; i < row ; i++){
  for(j = 0 ; j < col ; j++){
    printf("%d", mat[i][j]) ;
    printf("\t");
  }
  printf("\n");
}
getch() ;
return 0;
}
