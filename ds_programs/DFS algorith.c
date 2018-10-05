#include<stdio.h>
#include<conio.h>
#include<stdio.h>


#define MAX 100  
 
#define initial 1
#define waiting 2
#define visited 3
#define SIZE 100

int stack[SIZE], top = -1;
int n;
int state[SIZE];
int adj[SIZE][SIZE];

void insertStack(int value){
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
      //printf("\nInsertion success!!!");
   }
}

int deleteStack(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      //printf("\nDeleted : %d", stack[top]);
      //top--;
      return(stack[top--]);
   }
}

int isEmptyStack()
{
	if(top == -1)
	  return 1;
	  else
	  return 0;
}

void DF_Traversal()
{
    int v;
    
    for(v=0; v<n; v++) 
        state[v] = initial;
    
    printf("Enter Start Vertex for DFS: \n");
    scanf("%d", &v);
    DFS(v);
}

void DFS(int v)
{
    int i;
    
    insertStack(v);
    state[v] = waiting;
    
    while(!isEmptyStack())
    {
        v = deleteStack( );
        printf("%d ",v);
        state[v] = visited;
        
        for(i=0; i<n; i++)
        {
            if(adj[v][i] == 1 && state[i] == initial) 
            {
                insertStack(i);
                state[i] = waiting;
            }
        }
    }
    printf("\n");
}

void create_graph()
{
    int count,max_edge,origin,destin;
 
    printf("Enter number of vertices : ");
    scanf("%d",&n);
    max_edge = n*(n-1);
 
    for(count=1; count<=max_edge; count++)
    {
        printf("Enter edge %d( -1 -1 to quit ) : ",count);
        scanf("%d %d",&origin,&destin);
 
        if((origin == -1) && (destin == -1))
            break;
 
        if(origin>=n || destin>=n || origin<0 || destin<0)
        {
            printf("Invalid edge!\n");
            count--;
        }
        else
        {
            adj[origin][destin] = 1;
        }
    }
}

int main()
{
	create_graph();
    DF_Traversal();
    return 0;
}
