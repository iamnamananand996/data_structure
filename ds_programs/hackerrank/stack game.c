#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int push(int *stack,int top, int item)
{
	stack[++top] = item;
	return top;
}
int pop(int *stack,int top)
{
	return(stack[top--]);
}

int hight(int *stack,int top)
{
	int sum =0;
	int i;
	for(i=top;i>=0;i--)
	{
		sum = sum + stack[i];
		
	}
	return sum;
}

void display(int *stack,int top)
{
	int i;
	
	for(i =top;i>=0;i--)
	  printf("%d",stack[i]);
	 // top = -1;
}

int main(){
	int i = 0;
    int g;
	int a0;
	int b0; 
	int a_i;
	int b_i;
	int top1 = -1;
	int top2 = -1;

    scanf("%d",&g);
    for(a0 = 0; a0 < g; a0++){
        int n; 
        int m; 
        int x,y;
		int x1;
		int sum = 0,z; 
        scanf("%d %d %d",&n,&m,&x);
        int *a = malloc(sizeof(int) * n);
        for(a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
          top1 = push(a,top1,a[a_i]);
        }
        display(a,top1);
         x1= hight(a,top1);
        printf("   %d    ",x1);
        
        
        int *b = malloc(sizeof(int) * m);
        for( b_i = 0; b_i < m; b_i++){
           scanf("%d",&b[b_i]);
          top2= push(b,top2,b[b_i]);
        }
        display(b,top2);
        y= hight(b,top2);
        printf("   %d   ",y);
        //sum = pop(a,top1);
        printf("\n\npoped item is  %d  ",sum);
        while(sum <= x )
        {
        	if(sum <= x)
        	{
			
        	sum = sum +pop(a,top1);
        	i++;
            }
            if(sum <= x )
            {
			
        	sum = sum + pop(b,top2);
        	i++;
        }
		}
        printf(" \n\n game answer is %d  ",i);
        // your code goes here
    }
    return 0;
}

