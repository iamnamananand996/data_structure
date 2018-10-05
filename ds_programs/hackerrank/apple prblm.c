#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s,i=0,j=0,x; 
    int orange_i;
    int apple_i;
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    
    for(apple_i = 0; apple_i < m; apple_i++)
    {
    	x = a - apple[apple_i];
    	if(x >= s && x <= t)
    	{ 
    	  i++;
		}
	}
	printf("%d\n",i);
	
	for(orange_i = 0; orange_i < n; orange_i++)
	{
			x = a - orange[orange_i];
    	if(x >= s && x <= t)
    	{ 
    	  j++;
	}
}
	printf("\n%d",j);
    return 0;
}

