#include<stdio.h>
#include<conio.h>

int matrix[100][100];
int state[100];
int n;

void dfs(int);

void create()
{
  int i,j;
  printf("enter the no of vertex : ");
  scanf("%d",&n);
  printf("\n enter the matrix \n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      scanf("%d",&matrix[i][j]);
    }
  }
}
void traverse()
{
   int i,v;
   for(i=1;i<=n;i++)
     state[i] = 0;
   printf("enter the source vertex : ");
   scanf("%d",&v);
   dfs(v);
}

void dfs(int v)
{  int i;
    printf("%d  \t ",v);
    state[v] = 1;
   for(i=1;i<=n;i++)
   {
      if(!state[i] && matrix[v][i])
	 dfs(i);
   }
}

void check()
{
   int i;
 for(i=1;i<=n;i++)
   {
      if(!state[i])
      {
	printf("graph is not connect ");
	return;
      }
   }

     printf("graph is connect ");
}

int main()
{
   int i;
   system("cls");
   create();
   traverse();
    check();

   getch();
   return 0;
}
