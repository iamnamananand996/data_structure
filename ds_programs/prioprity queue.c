#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 3
struct data 
{
	char job[MAX];
	int prno;
	int ord;
	
};

struct pque
{
	struct data d[MAX];
	int front;
	int rear;
	
	
};

void create(struct pque *pq)
{
	int i;
	pq->front = pq->rear = -1;
	
/*	for(i=0;i<MAX;i++)
	{
		scanf("%s",&pq->d[i].job);
		
		pq->d[i].prno = pq->d[i].ord = 0;
	}
	*/
}

void add(struct pque *pq,struct data dt)
{
	struct data temp;
	int i,j;
	if(pq->rear == MAX-1)
	{
		printf("queue is full");
		return ;
		
	}
	
	pq->rear++;
	pq->d[pq->rear] = dt;
	
	if(pq->front == -1)
	pq->front = 0;
	
	for(i=pq->front;i<=pq->rear;i++)
	{
		for(j= i+1;j<=pq->rear;j++)
		{
			if(pq->d[i].prno >  pq->d[j].prno)
			{
				temp = pq->d[i];
				pq->d[i] = pq->d[j];
				pq->d[j] = temp;
				
			}
			else 
			{
				if(pq->d[i].prno == pq->d[j].prno)
				{
					if(pq->d[i].ord > pq->d[j].ord)
					{
						temp = pq->d[i];
						pq->d[i] = pq->d[j];
						pq->d[j]= temp;
					}
				}
			}
		}
	}
}

struct data del(struct pque *pq)
{
	struct data t;
	//scanf("%s",&t.job);
	strcpy(t.job,"");
	t.ord = 0;
	t.prno = 0;
	
	if(pq->front == -1)
	{
		 printf("queue is empaty");
		 return t;
		 
	}
	t= pq->d[pq->front];
	pq->d[pq->front] = t;
	
	
	if(pq->front == pq->rear)
	pq->front = pq->rear = -1;
	else 
	pq->front++;
	
	return t;
}

void get(struct pque *pq,struct data dt)
{
	int i,j=0;
	printf("enter job description max char 4 \n\n");
	printf("lower priority no.  higher the priority\n\n ");
	printf(" job \t priority\n\n");
	
	for(i=0;i<MAX;i++)
	{
		scanf("%s %d",&dt.job,&dt.prno);
		dt.ord = j++;
		
		add(pq,dt);
		
	}
	printf("\n");
	
	
}

void print(struct data temp,struct pque *pq)
{
	int i;
	printf("process jobs priority wise\n");
	printf("job \t priority");
	
	for( i=0;i<MAX;i++)
	{
		temp = del(pq);
		printf("%s\t %d\n",temp.job,temp.prno);
		
	}
	printf("\n");
}


int main(void)
{
	struct pque *pq;
	struct data dt;
	struct data temp;
	int i,j=0;
	
	create(&pq);
	get(&pq,dt);
	print(temp,&pq);
	
	getch();
	return 0;
	
}
