#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define size 100

char stack[size],i;
int n =10;
int top = -1;

void push(char item)
{
	stack[++top] = item;
}

char pop()
{
	top = top/2;
	return(stack[top--]);
}

void STDIN(char s)
{
	
	for(i =0;s[i] !='\0';i++)
	{
		//scanf("%d",&stack[i]);
		push(s[i]);
	}
}

void STDOUT()
{
	for(i = top/2;i>=0; i--)
	{
		printf("poped elements %c",stack[i]);
	}
}

char* isBalanced(char* s) {
    // Complete this function
}

int main() {
    int t,a0;
    scanf("%i", &t);
    for( a0 = 0; a0 < t; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        printf("%d",strlen(s));
        STDIN(s);
        int result_size;
        char* result = isBalanced(s);
        printf("%s\n", result);
    }
    return 0;
}

