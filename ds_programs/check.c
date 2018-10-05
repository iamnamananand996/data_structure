#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can 
    int n,i = 0;
    n = p;
                 while( p < s)
    {
    	if(n > m)
    	{
    		n = n-d;
    		//i++;
    		//return i;
		}
		p = p+n;
		i++;
	}
	return i;
}

int main() {
    int p; 
    int d; 
    int m; 
    int s; 
    scanf("%i %i %i %i", &p, &d, &m, &s);
    int answer = howManyGames(p, d, m, s);
    printf("%d\n", answer);
    return 0;
}

