#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 100

int stack[size];
int i;
int top = -1;
int n =5;
void push(int item)
{
	stack[++top] = item;
}

int pop()
{
	return(stack[top--]);
}

void STDIN()
{
	printf("enter the elements :");
	for(i =0;i<n;i++)
	{
		scanf("%d",&stack[i]);
		push(stack[i]);
	}
}

void STDOUT()
{
	for(i = top;i>=0; i--)
	{
		printf("poped elements %d",stack[i]);
	}
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    STDIN();
    STDOUT();
	    
    return 0;
}

