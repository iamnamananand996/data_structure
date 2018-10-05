#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct graph
{
	int V;
	int E;
	int **Adj;
};


struct graph* adjMatrixOfGraph()
{
	int u,v,i;
	struct graph *G = (struct graph*) malloc(sizeof(struct graph));
	
	printf("enter the edge and vertices : ");
	scanf("%d%d",&G->E,&G->V);
    G->Adj = malloc(G->V * sizeof(int *));

     for(i = 0; i < G->V; i++)
    {
        G->Adj[i] = malloc(G->V * sizeof(int));
    }
	
	for(u = 0;u< G->V;u++)
	{
		for(v= 0;v <G->V;v++)
		{
			G->Adj[u][v] = 0;
		}
	}
	printf("enter the no. in pair that are connect to edge :");
	for(i=0;i<G->E;i++)
	{
		scanf("%d%d",&u,&v);
		G->Adj[u][v] = 1;
		G->Adj[v][u] = 1;
		
	}
	
	return(G);
}

int main()
{
	adjMatrixOfGraph();
	getch();
	return 0;
}
