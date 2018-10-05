#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct ListNode
{
	int vertexNo;
	struct ListNode *next;
};

struct Graph
{
	int V;
	int E;
	struct ListNode** Adj;
};

struct Graph *adjListOfGraph()
{
	int i,x,y;
	struct Graph *G;
	struct ListNode *t,*temp;
	 
	 G = (struct Graph*)malloc(sizeof(struct Graph));
	 printf("enter the no. of vertex and edge ");
	 
	 scanf("%d%d",&G->V,&G->E);
	 
	 G->Adj = malloc(G->V * sizeof(struct ListNode*));
	 for(i =0;i<G->V;i++)
	 {
	 	G->Adj[i]->vertexNo = i;
	 	G->Adj[i]->next = G->Adj[i] + i;
	 }
	 
	 for(i =0;i<G->E;i++)
	 {
	 	printf("enter edge (sorce node and destination )");
	 	scanf("%d%d",&x,&y);
	 	
	 	temp = (struct ListNode*) malloc(sizeof(struct ListNode));
	 	
	 	temp->vertexNo = y;
	 	temp->next = G->Adj[x];
	 	
	 	
	 	t = G->Adj[x];
	 	while(t->next != G->Adj[x])
	 	{
	 		t = t->next;
		 }
		 t->next = temp;
	 }
	 
	 return(G);
}

int main()
{
       adjListOfGraph();
	   getch();
	   return 0;	
}
