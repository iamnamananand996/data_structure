#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define INF 9999

struct Graph
{
	int E;
	int V;
	int *Adj;
};

void FDWS(struct Graph *G)
{
	int i,j,k;
	int dist[G->V][G->V];
	
	for(i=0;i<G->V;i++)
	{
		for(j=0;j< G->V;j++)
		{
			dist[i][j] = *(G->Adj+i * G->V +j);
		}
	}
	
	for(k=0;k <G->V;k++)
	{
		for(i =0;i< G->V;i++)
		{
			for(j =0; j< G->V;j++)
			{
				if(dist[i][k] + dist[k][j]  < dist[i][j])
				   dist[i][j] =  dist[i][k] + dist[k][j];
			}
		}
	}
	
		for(i =0;i< G->V;i++)
		{
			for(j =0; j< G->V;j++)
			{
	            *(G->Adj+i * G->V +j) = dist[i][j] ;
	            
			}
		}
}


void printsol(struct Graph *G)
{
	int i,j;
	
		for(i =0;i< G->V;i++)
		{
			for(j =0; j< G->V;j++)
			{
	            if(*(G->Adj+i * G->V +j)  == INF)
	               printf("%7s","INF");
	               else
	               printf("%7d",*(G->Adj+i * G->V +j));
	            
			}
			printf("\n");
		}
	
}


int main()
{
	struct Graph *G;
	int i,j;
	int matrix[4][4] = {{ 0,5,INF,10},
	                     { INF,0,3,INF},
	                     { INF,INF,0,1},
	                     { INF,INF ,INF,0}	};
	                     
	    G = (struct Graph*)malloc(sizeof(struct Graph));
		G->V = 4;
		G->E = 4;
		G->Adj = malloc(G->V * G->V * sizeof(int));
		    
		for(i =0;i< G->V;i++)
		{
			for(j =0; j< G->V;j++)
			{
	            *(G->Adj+i * G->V +j) = matrix[i][j] ;
	            
			}             
        }
        printf("original distance \n");
        printsol(G);
        FDWS(G);
        
        printf("sortest distance \n");
        printsol(G);
        
        getch();
        return 0;
    }
