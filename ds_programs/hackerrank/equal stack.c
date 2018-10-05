#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


//int stack[size];
int i;
	int a = -1;
	int b = -1;
	int c = -1; 

//int n =5;
int push(int *stack,int item,int top)
{
	//int top = -1;
	stack[++top] = item;
	return top;
}

void display(int *stack,int top)
{
	
	for(i =top;i>=0;i--)
	  printf("%d",stack[i]);
	 // top = -1;
}

int pop(int *stack,int top)
{
	return(stack[top--]);
}

int stackequal(int *stack1,int *stack2,int *stack3)
{
	printf("hiii");	
	while((hight(stack1,a) == hight(stack2,b)) &&(hight(stack1,a) ==hight(stack3,c)) && (hight(stack2,b) == hight(stack3,c) ))
	{
		if(hight(stack1,a) == hight(stack2,b) == hight(stack3,c))
		    return(hight(stack1,a));
		    
		if(hight(stack1,a) == hight(stack2,b) < hight(stack3,c))
		   pop(stack3,c);
		
		if(hight(stack1,a) > hight(stack2,b) == hight(stack3,c))
		     pop(stack1,a);
			 
		if(hight(stack1,a) < hight(stack2,b) > hight(stack3,c))
		   pop(stack2,b);
		   
	    if(hight(stack1,a) > hight(stack2,b) <hight(stack3,c))	   
		{
			pop(stack1,a);
			pop(stack3,c);
		}	
		printf("hiii");				        
	}  
}

int hight(int *stack,int top)
{
	int sum =0;
	for(i=top;i>=0;i--)
	{
		sum = sum + stack[i];
	}
	
	return sum;
}

int main(){
    int n1,x;
	int a =b=c = -1; 
    int n2; 
    int n3; 
    int h1_i;
    int h2_i;
    int h3_i;
    printf("enter the sixe of satcks  : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    int *h1 = malloc(sizeof(int) * n1);
    printf("enter 1st stack element : ");
    for(h1_i = 0; h1_i < n1; h1_i++){
       scanf("%d",&h1[h1_i]);
       a =push(h1,h1[h1_i],a);
    }
    display(h1,a);
    
    int *h2 = malloc(sizeof(int) * n2);
    
    printf("enter 2nd stac element : ");
    for( h2_i = 0; h2_i < n2; h2_i++){
       scanf("%d",&h2[h2_i]);
       b =push(h2,h2[h2_i],b);
    }
    display(h2,b);
    int *h3 = malloc(sizeof(int) * n3);
    printf("enter 3rd stack element : ");
    for( h3_i = 0; h3_i < n3; h3_i++){
       scanf("%d",&h3[h3_i]);
      c = push(h3,h3[h3_i],c);
    }
    display(h3,c);
   x=  stackequal(h1,h2,h3);
    
    printf("equal sum is %d ",x);
    
    return 0;
}

